﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "RayvisionSocketComponent.h"

//#include "SocketLogger.h"
#include "JsonUtilities/Public/JsonObjectConverter.h"
#include "WebSockets/Public/WebSocketsModule.h"


// Sets default values for this component's properties
URayvisionSocketComponent::URayvisionSocketComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URayvisionSocketComponent::BeginPlay()
{
	Super::BeginPlay();

	FModuleManager::Get().LoadModuleChecked("WebSockets");
	
	if(bAutoConnect)
		AutoConnect();
		
	ReconnectDelegate.BindDynamic(this, &URayvisionSocketComponent::AutoConnect);

}

void URayvisionSocketComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	GetWorld()->GetTimerManager().ClearTimer(ReconnectTimerHandle);
	if(Socket)
		Socket->Close();
}


void URayvisionSocketComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(bUseSocketJoystick)
	{
		FVector2D TargetMove(0);

		if(FDateTime::UtcNow().ToUnixTimestamp() - LastJoyMove.Timestamp <= MaxNetDelayPermitted * 1000)
		{
			TargetMove =  FVector2D(LastJoyMove.X, LastJoyMove.Y);
		}
		
		if(bEnableJoystickMoveLag)
		{
			JoystickAxis = FMath::Vector2DInterpConstantTo(JoystickAxis, TargetMove, DeltaTime, JoystickLagSpeed);
		}else
		{
			JoystickAxis =TargetMove; 
		}
	}
}


void URayvisionSocketComponent::BindEvents()
{
	if(Socket)
	{
		Socket->OnConnected().AddLambda([&]()->void
		{
			OnConnected.Broadcast();
			UE_LOG(LogTemp, Log, TEXT("WebSocket connected."));
		});

		Socket->OnConnectionError().AddLambda([&](const FString& Error)->void
		{
			OnConnectionError.Broadcast(Error);
			UE_LOG(LogTemp, Error, TEXT("WebSocket connect error: %s"), *Error);

			if(bAutoReconnectOnFailed && !IsPendingKill())
			{
				GetWorld()->GetTimerManager().SetTimer(ReconnectTimerHandle, ReconnectDelegate, ReconnectInterval, false);
			}
		});

		Socket->OnClosed().AddLambda([&](int32 StatusCode, const FString& Reason, bool bWasClean)
		{
			OnClosed.Broadcast(StatusCode, Reason, bWasClean);
			UE_LOG(LogTemp, Log, TEXT("WebSocket closed: %s"), *Reason);
		});

		Socket->OnMessage().AddLambda([&](const FString & Message)
		{
			UE_LOG(LogTemp, Log, TEXT("Message received: %s"), *Message);
			OnMessage.Broadcast(Message);
		});

		Socket->OnRawMessage().AddLambda([&](const void* Data, SIZE_T Size, SIZE_T BytesRemaining)
		{
			UE_LOG(LogTemp, Log, TEXT("Raw message received: %s"), UTF8_TO_TCHAR(Data));

			const FString DataString = UTF8_TO_TCHAR(Data);
			MatchJoyMoveCommand(DataString);
			OnRawMessage.Broadcast(DataString);
		});

		Socket->OnMessageSent().AddLambda([&](const FString& Message)
		{
			OnMessageSent.Broadcast(Message);
			UE_LOG(LogTemp, Log, TEXT("Message sent: %s"), *Message);
		});
	}
}

void URayvisionSocketComponent::AutoConnect()
{
#if WITH_EDITOR
	ConnectToUrl(TestUrl);
#else
	ConnectTo3dcat();
#endif
}

void URayvisionSocketComponent::ConnectTo3dcat()
{
	const FString CommandLineParam(FCommandLine::Get());
	UE_LOG(LogTemp, Log, TEXT("Command line params: %s"), *CommandLineParam);

	TArray<FString> ParamArray;
	CommandLineParam.ParseIntoArray(ParamArray,*FString(" "));

	//当命令行有参数时, 使用命令行端口进行连接
	if(ParamArray.Num() > 0 && ParamArray.Last().IsNumeric())
	{
		const FString Url = "ws://127.0.0.1:"+ ParamArray.Last() + "/";
		ConnectToUrl(Url);
	}else
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to connect to 3dcat, command param doesn't end with socket port."));
	}
}

void URayvisionSocketComponent::ConnectToUrl(FString NewUrl)
{
	if(Socket && Socket->IsConnected())
	{
		Disconnect();
	}
	UE_LOG(LogTemp, Log, TEXT("Trying to connect to url: %s"), *NewUrl);
	
	const FString ServerProtocol = TEXT("ws");
	Socket = FWebSocketsModule::Get().CreateWebSocket(NewUrl, ServerProtocol);
	BindEvents();
	Socket->Connect();

	UE_LOG(LogTemp, Log, TEXT("url connected: %s"), *NewUrl);
}

bool URayvisionSocketComponent::SendMessage(const FString& Message)
{
	if(Socket && Socket.IsValid() && Socket->IsConnected())
	{
		Socket->Send(Message);
		return true;
	}

	return false;
}

bool URayvisionSocketComponent::SendData(const TArray<uint8> Data, bool bIsBinary)
{
	if(Socket && Socket.IsValid() && Socket->IsConnected())
	{
		Socket->Send(Data.GetData(), Data.Num() * sizeof(uint8), bIsBinary);
		return true;
	}

	return false;
}

void URayvisionSocketComponent::Disconnect()
{
	Socket->Close();
}

void URayvisionSocketComponent::MatchJoyMoveCommand(const FString& Message)
{
	if(!bUseSocketJoystick) return;
	
	if(Message.Contains(JoyMoveEvent))
	{
		FJoyMoveMessage NewJoyMove;
		const bool bSuccess = FJsonObjectConverter::JsonObjectStringToUStruct(Message, &NewJoyMove, 0, 0);
		if(bSuccess)
		{
			//将前台传入的移动信息进行更新.
			if(NewJoyMove.EventName != "" && NewJoyMove.Timestamp > LastJoyMove.Timestamp)
			{
				LastJoyMove = NewJoyMove;
				OnReceivedJoystickMove.Broadcast(LastJoyMove);
			}
		}
	}
}

