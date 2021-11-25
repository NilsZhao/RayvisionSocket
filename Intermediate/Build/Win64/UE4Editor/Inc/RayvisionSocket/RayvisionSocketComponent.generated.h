// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJoyMoveMessage;
#ifdef RAYVISIONSOCKET_RayvisionSocketComponent_generated_h
#error "RayvisionSocketComponent.generated.h already included, missing '#pragma once' in RayvisionSocketComponent.h"
#endif
#define RAYVISIONSOCKET_RayvisionSocketComponent_generated_h

#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_19_DELEGATE \
struct _Script_RayvisionSocket_eventReceivedJoystickMoveSignature_Parms \
{ \
	FJoyMoveMessage ReceivedMove; \
}; \
static inline void FReceivedJoystickMoveSignature_DelegateWrapper(const FMulticastScriptDelegate& ReceivedJoystickMoveSignature, FJoyMoveMessage const& ReceivedMove) \
{ \
	_Script_RayvisionSocket_eventReceivedJoystickMoveSignature_Parms Parms; \
	Parms.ReceivedMove=ReceivedMove; \
	ReceivedJoystickMoveSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_18_DELEGATE \
struct _Script_RayvisionSocket_eventOnMessageSentSignature_Parms \
{ \
	FString MessageString; \
}; \
static inline void FOnMessageSentSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSentSignature, const FString& MessageString) \
{ \
	_Script_RayvisionSocket_eventOnMessageSentSignature_Parms Parms; \
	Parms.MessageString=MessageString; \
	OnMessageSentSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_17_DELEGATE \
struct _Script_RayvisionSocket_eventOnRawMessageSignature_Parms \
{ \
	FString Data; \
}; \
static inline void FOnRawMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRawMessageSignature, const FString& Data) \
{ \
	_Script_RayvisionSocket_eventOnRawMessageSignature_Parms Parms; \
	Parms.Data=Data; \
	OnRawMessageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_16_DELEGATE \
struct _Script_RayvisionSocket_eventOnMessageSignature_Parms \
{ \
	FString Message; \
}; \
static inline void FOnMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSignature, const FString& Message) \
{ \
	_Script_RayvisionSocket_eventOnMessageSignature_Parms Parms; \
	Parms.Message=Message; \
	OnMessageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_15_DELEGATE \
struct _Script_RayvisionSocket_eventOnClosedSignature_Parms \
{ \
	int32 StatusCode; \
	FString Reason; \
	bool bWasClean; \
}; \
static inline void FOnClosedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClosedSignature, int32 StatusCode, const FString& Reason, bool bWasClean) \
{ \
	_Script_RayvisionSocket_eventOnClosedSignature_Parms Parms; \
	Parms.StatusCode=StatusCode; \
	Parms.Reason=Reason; \
	Parms.bWasClean=bWasClean ? true : false; \
	OnClosedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_14_DELEGATE \
struct _Script_RayvisionSocket_eventOnConnectionErrorSignature_Parms \
{ \
	FString Error; \
}; \
static inline void FOnConnectionErrorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionErrorSignature, const FString& Error) \
{ \
	_Script_RayvisionSocket_eventOnConnectionErrorSignature_Parms Parms; \
	Parms.Error=Error; \
	OnConnectionErrorSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_13_DELEGATE \
static inline void FOnConnectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectedSignature) \
{ \
	OnConnectedSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_SPARSE_DATA
#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execConnectToUrl); \
	DECLARE_FUNCTION(execConnectTo3dcat); \
	DECLARE_FUNCTION(execAutoConnect); \
	DECLARE_FUNCTION(execUnbindEvents); \
	DECLARE_FUNCTION(execBindEvents);


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execConnectToUrl); \
	DECLARE_FUNCTION(execConnectTo3dcat); \
	DECLARE_FUNCTION(execAutoConnect); \
	DECLARE_FUNCTION(execUnbindEvents); \
	DECLARE_FUNCTION(execBindEvents);


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURayvisionSocketComponent(); \
	friend struct Z_Construct_UClass_URayvisionSocketComponent_Statics; \
public: \
	DECLARE_CLASS(URayvisionSocketComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RayvisionSocket"), NO_API) \
	DECLARE_SERIALIZER(URayvisionSocketComponent)


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesURayvisionSocketComponent(); \
	friend struct Z_Construct_UClass_URayvisionSocketComponent_Statics; \
public: \
	DECLARE_CLASS(URayvisionSocketComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RayvisionSocket"), NO_API) \
	DECLARE_SERIALIZER(URayvisionSocketComponent)


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URayvisionSocketComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URayvisionSocketComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URayvisionSocketComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URayvisionSocketComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URayvisionSocketComponent(URayvisionSocketComponent&&); \
	NO_API URayvisionSocketComponent(const URayvisionSocketComponent&); \
public:


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URayvisionSocketComponent(URayvisionSocketComponent&&); \
	NO_API URayvisionSocketComponent(const URayvisionSocketComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URayvisionSocketComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URayvisionSocketComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URayvisionSocketComponent)


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_22_PROLOG
#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_SPARSE_DATA \
	HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_RPC_WRAPPERS \
	HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_INCLASS \
	HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_SPARSE_DATA \
	HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAYVISIONSOCKET_API UClass* StaticClass<class URayvisionSocketComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
