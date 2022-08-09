// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Types.h"
#include "Components/ActorComponent.h"
#include "WebSockets/Public/IWebSocket.h"
#include "RayvisionSocketComponent.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnConnectedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConnectionErrorSignature, const FString&, Error);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnClosedSignature, int32, StatusCode, const FString&, Reason, bool, bWasClean);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageSignature, const FString&, Message);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRawMessageSignature, const FString&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageSentSignature, const FString&, MessageString);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceivedJoystickMoveSignature, const FJoyMoveMessage&, ReceivedMove);


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RAYVISIONSOCKET_API URayvisionSocketComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	TSharedPtr<IWebSocket> Socket = nullptr;

public:
	// Sets default values for this component's properties
	URayvisionSocketComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category="Sockets") FOnConnectedSignature OnConnected;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category="Sockets") FOnConnectionErrorSignature OnConnectionError;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category="Sockets") FOnClosedSignature OnClosed;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category="Sockets") FOnMessageSignature OnMessage;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category="Sockets") FOnRawMessageSignature OnRawMessage;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category="Sockets") FOnMessageSentSignature OnMessageSent;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category="Sockets") FReceivedJoystickMoveSignature OnReceivedJoystickMove;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//用于编辑器环境下测试WebSocket连接的Url. 仅用于编辑器环境下的开发与测试, 非编辑器环境下会自动尝试连接至3dcat指定端口.
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="Sockets")
	FString TestUrl = "ws://127.0.0.1:8081/";
	
	//是否进行自动连接.
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="Sockets")
	bool bAutoConnect = true;

	//自动重连, 当连接失败后, 会自动尝试重新建立连接. 对于启用了预加载功能的应用,由于本地端口只会在用户接入后开启, 因此建议勾选此项. 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="Sockets")
	bool bAutoReconnectOnFailed = true;

	//自动重连频率
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="Sockets", meta=(EditCondition = "bAutoReconnect"))
	float ReconnectInterval = 1.f;
public:
	/**
	 *绑定连接事件.
	 */
	UFUNCTION(Category="Sockets")
	void BindEvents();

	UFUNCTION(Category="Sockets")
	void UnbindEvents() const;
	
	/**
	 *进行自动连接, 若处于编辑器状态, 则连接至TestUrl, 若处于非编辑器状态, 则连接至3dcat.live
	 */
	UFUNCTION()
	void AutoConnect();
	
	/**
	 *连接到3dcat, 端口会通过命令行获取.
	 */
	UFUNCTION(BlueprintCallable, Category="Sockets")
	void ConnectTo3dcat();
	
	/**
	 * 根据指定的URL建立一个新的WebSocket连接, 原有的链接将会被自动关闭.
	 * @param NewUrl 需要进行连接的url
	 */
	UFUNCTION(BlueprintCallable, Category="Sockets")
	void ConnectToUrl(FString NewUrl);

	/**
	 *发送一个字符串到服务端.
	 */
	UFUNCTION(BlueprintCallable, Category="Sockets")
	bool SendMessage(const FString& Message);

	/**
	 *发送一个数组到服务端.
	 */
	UFUNCTION(BlueprintCallable, Category="Sockets")
	bool SendData(const TArray<uint8> Data, bool bIsBinary = false);

	/**
	 *关闭当前连接.
	 */
	UFUNCTION(BlueprintCallable, Category="Sockets")
	void Disconnect();

	
	UFUNCTION(BlueprintCallable, Category = "Sockets")
	static bool Base64Decode(const FString& Source, FString& Dest);

	UFUNCTION(BlueprintCallable, Category = "Sockets")
	static FString Base64Encode(const FString& Source);

	FTimerHandle ReconnectTimerHandle;
	FTimerDynamicDelegate ReconnectDelegate;

	FDelegateHandle OnConnectHandle;
	FDelegateHandle OnConnectErrorHandle;
	FDelegateHandle OnMessageHandle;
	FDelegateHandle OnRawMessageHandle;
	FDelegateHandle OnMessageSentHandle;
	FDelegateHandle OnCloseHandle;
};
