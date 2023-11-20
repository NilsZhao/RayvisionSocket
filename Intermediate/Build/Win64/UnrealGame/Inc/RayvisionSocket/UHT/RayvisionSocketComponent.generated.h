// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RayvisionSocketComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJoyMoveMessage;
#ifdef RAYVISIONSOCKET_RayvisionSocketComponent_generated_h
#error "RayvisionSocketComponent.generated.h already included, missing '#pragma once' in RayvisionSocketComponent.h"
#endif
#define RAYVISIONSOCKET_RayvisionSocketComponent_generated_h

#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_13_DELEGATE \
RAYVISIONSOCKET_API void FOnConnectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectedSignature);


#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_14_DELEGATE \
RAYVISIONSOCKET_API void FOnConnectionErrorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionErrorSignature, const FString& Error);


#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_15_DELEGATE \
RAYVISIONSOCKET_API void FOnClosedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClosedSignature, int32 StatusCode, const FString& Reason, bool bWasClean);


#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_16_DELEGATE \
RAYVISIONSOCKET_API void FOnMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSignature, const FString& Message);


#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_17_DELEGATE \
RAYVISIONSOCKET_API void FOnRawMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRawMessageSignature, const TArray<uint8>& Data);


#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_18_DELEGATE \
RAYVISIONSOCKET_API void FOnMessageSentSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSentSignature, const FString& MessageString);


#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_19_DELEGATE \
RAYVISIONSOCKET_API void FReceivedJoystickMoveSignature_DelegateWrapper(const FMulticastScriptDelegate& ReceivedJoystickMoveSignature, FJoyMoveMessage const& ReceivedMove);


#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_SPARSE_DATA
#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBase64Encode); \
	DECLARE_FUNCTION(execBase64Decode); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execConnectToUrl); \
	DECLARE_FUNCTION(execConnectTo3dcat); \
	DECLARE_FUNCTION(execAutoConnect); \
	DECLARE_FUNCTION(execUnbindEvents); \
	DECLARE_FUNCTION(execBindEvents);


#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_ACCESSORS
#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURayvisionSocketComponent(); \
	friend struct Z_Construct_UClass_URayvisionSocketComponent_Statics; \
public: \
	DECLARE_CLASS(URayvisionSocketComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RayvisionSocket"), NO_API) \
	DECLARE_SERIALIZER(URayvisionSocketComponent)


#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URayvisionSocketComponent(URayvisionSocketComponent&&); \
	NO_API URayvisionSocketComponent(const URayvisionSocketComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URayvisionSocketComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URayvisionSocketComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URayvisionSocketComponent) \
	NO_API virtual ~URayvisionSocketComponent();


#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_22_PROLOG
#define FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_SPARSE_DATA \
	FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_ACCESSORS \
	FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAYVISIONSOCKET_API UClass* StaticClass<class URayvisionSocketComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
