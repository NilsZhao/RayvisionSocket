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
	
	//是否使用前台WebSocket消息来控制角色移动
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Sockets")
	bool bUseSocketJoystick = true;

	/**
	 *允许的最大网络延迟事件, 超过这个时间后, 手柄值将会归零.<br/>
	 *注意: 将该值调整过小会导致输入异常.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Sockets|SocketJoystick", meta=(EditCondition = "bUseSocketJoystick",
		ClampMin = "0.0", ClampMax = "100.0", UIMin = "0.0", UIMax = "100.0"))
	float MaxNetDelayPermitted = 1.0;

	//是否启用手柄延迟, 启用手柄延迟来降低当手柄数值突然变化时的镜头突变.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Sockets|SocketJoystick", meta=(EditCondition = "bUseSocketJoystick"))
	bool bEnableJoystickMoveLag = true;

	//手柄延迟的回复速度, 数值越大, 延后的程度越小.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Sockets|SocketJoystick", meta=(EditCondition = "bUseSocketJoystick"))
	float JoystickLagSpeed = 1;
	
	//取最近一次收到的移动指令.
	UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly, Category="Sockets|SocketJoystick")
	FJoyMoveMessage LastJoyMove;

	//当前手柄移动轴.
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category="Sockets|SocketJoystick")
	FVector2D JoystickAxis;

	//是否记录WebSocket消息日志.
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category="Sockets|SocketJoystick")
	bool bLogSocketMessage = true;
	
	const FString JoyMoveEvent = "joy_move";
public:
	/**
	 *绑定连接事件.
	 */
	UFUNCTION(Category="Sockets")
	void BindEvents();

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

private:
	void MatchJoyMoveCommand(const FString& Message);

	FTimerHandle ReconnectTimerHandle;
	FTimerDynamicDelegate ReconnectDelegate;
};
