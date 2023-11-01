// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RayvisionSocket/Public/RayvisionSocketComponent.h"
#include "RayvisionSocket/Public/Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRayvisionSocketComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	RAYVISIONSOCKET_API UClass* Z_Construct_UClass_URayvisionSocketComponent();
	RAYVISIONSOCKET_API UClass* Z_Construct_UClass_URayvisionSocketComponent_NoRegister();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature();
	RAYVISIONSOCKET_API UScriptStruct* Z_Construct_UScriptStruct_FJoyMoveMessage();
	UPackage* Z_Construct_UPackage__Script_RayvisionSocket();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnConnectedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnConnectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectedSignature)
{
	OnConnectedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventOnConnectionErrorSignature_Parms
		{
			FString Error;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnConnectionErrorSignature_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error_MetaData), Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnConnectionErrorSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventOnConnectionErrorSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventOnConnectionErrorSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnConnectionErrorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionErrorSignature, const FString& Error)
{
	struct _Script_RayvisionSocket_eventOnConnectionErrorSignature_Parms
	{
		FString Error;
	};
	_Script_RayvisionSocket_eventOnConnectionErrorSignature_Parms Parms;
	Parms.Error=Error;
	OnConnectionErrorSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventOnClosedSignature_Parms
		{
			int32 StatusCode;
			FString Reason;
			bool bWasClean;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
		static void NewProp_bWasClean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasClean;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnClosedSignature_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnClosedSignature_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason_MetaData), Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason_MetaData) };
	void Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean_SetBit(void* Obj)
	{
		((_Script_RayvisionSocket_eventOnClosedSignature_Parms*)Obj)->bWasClean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RayvisionSocket_eventOnClosedSignature_Parms), &Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_StatusCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnClosedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventOnClosedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventOnClosedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnClosedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClosedSignature, int32 StatusCode, const FString& Reason, bool bWasClean)
{
	struct _Script_RayvisionSocket_eventOnClosedSignature_Parms
	{
		int32 StatusCode;
		FString Reason;
		bool bWasClean;
	};
	_Script_RayvisionSocket_eventOnClosedSignature_Parms Parms;
	Parms.StatusCode=StatusCode;
	Parms.Reason=Reason;
	Parms.bWasClean=bWasClean ? true : false;
	OnClosedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventOnMessageSignature_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnMessageSignature_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::NewProp_Message_MetaData), Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::NewProp_Message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnMessageSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventOnMessageSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventOnMessageSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSignature, const FString& Message)
{
	struct _Script_RayvisionSocket_eventOnMessageSignature_Parms
	{
		FString Message;
	};
	_Script_RayvisionSocket_eventOnMessageSignature_Parms Parms;
	Parms.Message=Message;
	OnMessageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventOnRawMessageSignature_Parms
		{
			TArray<uint8> Data;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnRawMessageSignature_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnRawMessageSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventOnRawMessageSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventOnRawMessageSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRawMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRawMessageSignature, const TArray<uint8>& Data)
{
	struct _Script_RayvisionSocket_eventOnRawMessageSignature_Parms
	{
		TArray<uint8> Data;
	};
	_Script_RayvisionSocket_eventOnRawMessageSignature_Parms Parms;
	Parms.Data=Data;
	OnRawMessageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventOnMessageSentSignature_Parms
		{
			FString MessageString;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnMessageSentSignature_Parms, MessageString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString_MetaData), Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnMessageSentSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventOnMessageSentSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventOnMessageSentSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMessageSentSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSentSignature, const FString& MessageString)
{
	struct _Script_RayvisionSocket_eventOnMessageSentSignature_Parms
	{
		FString MessageString;
	};
	_Script_RayvisionSocket_eventOnMessageSentSignature_Parms Parms;
	Parms.MessageString=MessageString;
	OnMessageSentSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventReceivedJoystickMoveSignature_Parms
		{
			FJoyMoveMessage ReceivedMove;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceivedMove_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReceivedMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::NewProp_ReceivedMove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::NewProp_ReceivedMove = { "ReceivedMove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventReceivedJoystickMoveSignature_Parms, ReceivedMove), Z_Construct_UScriptStruct_FJoyMoveMessage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::NewProp_ReceivedMove_MetaData), Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::NewProp_ReceivedMove_MetaData) }; // 592587350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::NewProp_ReceivedMove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "ReceivedJoystickMoveSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventReceivedJoystickMoveSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::_Script_RayvisionSocket_eventReceivedJoystickMoveSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FReceivedJoystickMoveSignature_DelegateWrapper(const FMulticastScriptDelegate& ReceivedJoystickMoveSignature, FJoyMoveMessage const& ReceivedMove)
{
	struct _Script_RayvisionSocket_eventReceivedJoystickMoveSignature_Parms
	{
		FJoyMoveMessage ReceivedMove;
	};
	_Script_RayvisionSocket_eventReceivedJoystickMoveSignature_Parms Parms;
	Parms.ReceivedMove=ReceivedMove;
	ReceivedJoystickMoveSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(URayvisionSocketComponent::execBase64Encode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URayvisionSocketComponent::Base64Encode(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execBase64Decode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Dest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URayvisionSocketComponent::Base64Decode(Z_Param_Source,Z_Param_Out_Dest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execSendData)
	{
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_GET_UBOOL(Z_Param_bIsBinary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendData(Z_Param_Data,Z_Param_bIsBinary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execSendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execConnectToUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectToUrl(Z_Param_NewUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execConnectTo3dcat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectTo3dcat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execAutoConnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoConnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execUnbindEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execBindEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindEvents();
		P_NATIVE_END;
	}
	void URayvisionSocketComponent::StaticRegisterNativesURayvisionSocketComponent()
	{
		UClass* Class = URayvisionSocketComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoConnect", &URayvisionSocketComponent::execAutoConnect },
			{ "Base64Decode", &URayvisionSocketComponent::execBase64Decode },
			{ "Base64Encode", &URayvisionSocketComponent::execBase64Encode },
			{ "BindEvents", &URayvisionSocketComponent::execBindEvents },
			{ "ConnectTo3dcat", &URayvisionSocketComponent::execConnectTo3dcat },
			{ "ConnectToUrl", &URayvisionSocketComponent::execConnectToUrl },
			{ "Disconnect", &URayvisionSocketComponent::execDisconnect },
			{ "SendData", &URayvisionSocketComponent::execSendData },
			{ "SendMessage", &URayvisionSocketComponent::execSendMessage },
			{ "UnbindEvents", &URayvisionSocketComponent::execUnbindEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\xe8\xbf\x9b\xe8\xa1\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe8\xbf\x9e\xe6\x8e\xa5, \xe8\x8b\xa5\xe5\xa4\x84\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81, \xe5\x88\x99\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3TestUrl, \xe8\x8b\xa5\xe5\xa4\x84\xe4\xba\x8e\xe9\x9d\x9e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81, \xe5\x88\x99\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3""3dcat.live\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9b\xe8\xa1\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe8\xbf\x9e\xe6\x8e\xa5, \xe8\x8b\xa5\xe5\xa4\x84\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81, \xe5\x88\x99\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3TestUrl, \xe8\x8b\xa5\xe5\xa4\x84\xe4\xba\x8e\xe9\x9d\x9e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81, \xe5\x88\x99\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3""3dcat.live" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "AutoConnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics
	{
		struct RayvisionSocketComponent_eventBase64Decode_Parms
		{
			FString Source;
			FString Dest;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Dest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventBase64Decode_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Source_MetaData), Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Source_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventBase64Decode_Parms, Dest), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RayvisionSocketComponent_eventBase64Decode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RayvisionSocketComponent_eventBase64Decode_Parms), &Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Dest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "Base64Decode", nullptr, nullptr, Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::RayvisionSocketComponent_eventBase64Decode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::RayvisionSocketComponent_eventBase64Decode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics
	{
		struct RayvisionSocketComponent_eventBase64Encode_Parms
		{
			FString Source;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventBase64Encode_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_Source_MetaData), Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_Source_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventBase64Encode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "Base64Encode", nullptr, nullptr, Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::RayvisionSocketComponent_eventBase64Encode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::RayvisionSocketComponent_eventBase64Encode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\xe7\xbb\x91\xe5\xae\x9a\xe8\xbf\x9e\xe6\x8e\xa5\xe4\xba\x8b\xe4\xbb\xb6.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x91\xe5\xae\x9a\xe8\xbf\x9e\xe6\x8e\xa5\xe4\xba\x8b\xe4\xbb\xb6." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "BindEvents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_BindEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0""3dcat, \xe7\xab\xaf\xe5\x8f\xa3\xe4\xbc\x9a\xe9\x80\x9a\xe8\xbf\x87\xe5\x91\xbd\xe4\xbb\xa4\xe8\xa1\x8c\xe8\x8e\xb7\xe5\x8f\x96.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0""3dcat, \xe7\xab\xaf\xe5\x8f\xa3\xe4\xbc\x9a\xe9\x80\x9a\xe8\xbf\x87\xe5\x91\xbd\xe4\xbb\xa4\xe8\xa1\x8c\xe8\x8e\xb7\xe5\x8f\x96." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "ConnectTo3dcat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics
	{
		struct RayvisionSocketComponent_eventConnectToUrl_Parms
		{
			FString NewUrl;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::NewProp_NewUrl = { "NewUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventConnectToUrl_Parms, NewUrl), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::NewProp_NewUrl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\xa0\xb9\xe6\x8d\xae\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84URL\xe5\xbb\xba\xe7\xab\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe6\x96\xb0\xe7\x9a\x84WebSocket\xe8\xbf\x9e\xe6\x8e\xa5, \xe5\x8e\x9f\xe6\x9c\x89\xe7\x9a\x84\xe9\x93\xbe\xe6\x8e\xa5\xe5\xb0\x86\xe4\xbc\x9a\xe8\xa2\xab\xe8\x87\xaa\xe5\x8a\xa8\xe5\x85\xb3\xe9\x97\xad.\n\x09 * @param NewUrl \xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84url\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\xb9\xe6\x8d\xae\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84URL\xe5\xbb\xba\xe7\xab\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe6\x96\xb0\xe7\x9a\x84WebSocket\xe8\xbf\x9e\xe6\x8e\xa5, \xe5\x8e\x9f\xe6\x9c\x89\xe7\x9a\x84\xe9\x93\xbe\xe6\x8e\xa5\xe5\xb0\x86\xe4\xbc\x9a\xe8\xa2\xab\xe8\x87\xaa\xe5\x8a\xa8\xe5\x85\xb3\xe9\x97\xad.\n@param NewUrl \xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84url" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "ConnectToUrl", nullptr, nullptr, Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::RayvisionSocketComponent_eventConnectToUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::RayvisionSocketComponent_eventConnectToUrl_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\xe5\x85\xb3\xe9\x97\xad\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe6\x8e\xa5.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe9\x97\xad\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe6\x8e\xa5." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics
	{
		struct RayvisionSocketComponent_eventSendData_Parms
		{
			TArray<uint8> Data;
			bool bIsBinary;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_bIsBinary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBinary;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventSendData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data_MetaData) };
	void Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_bIsBinary_SetBit(void* Obj)
	{
		((RayvisionSocketComponent_eventSendData_Parms*)Obj)->bIsBinary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_bIsBinary = { "bIsBinary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RayvisionSocketComponent_eventSendData_Parms), &Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_bIsBinary_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RayvisionSocketComponent_eventSendData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RayvisionSocketComponent_eventSendData_Parms), &Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_bIsBinary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\xe5\x8f\x91\xe9\x80\x81\xe4\xb8\x80\xe4\xb8\xaa\xe6\x95\xb0\xe7\xbb\x84\xe5\x88\xb0\xe6\x9c\x8d\xe5\x8a\xa1\xe7\xab\xaf.\n\x09 */" },
#endif
		{ "CPP_Default_bIsBinary", "false" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x91\xe9\x80\x81\xe4\xb8\x80\xe4\xb8\xaa\xe6\x95\xb0\xe7\xbb\x84\xe5\x88\xb0\xe6\x9c\x8d\xe5\x8a\xa1\xe7\xab\xaf." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "SendData", nullptr, nullptr, Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::RayvisionSocketComponent_eventSendData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::RayvisionSocketComponent_eventSendData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_SendData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics
	{
		struct RayvisionSocketComponent_eventSendMessage_Parms
		{
			FString Message;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventSendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_Message_MetaData), Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_Message_MetaData) };
	void Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RayvisionSocketComponent_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RayvisionSocketComponent_eventSendMessage_Parms), &Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\xe5\x8f\x91\xe9\x80\x81\xe4\xb8\x80\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\x88\xb0\xe6\x9c\x8d\xe5\x8a\xa1\xe7\xab\xaf.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x91\xe9\x80\x81\xe4\xb8\x80\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\x88\xb0\xe6\x9c\x8d\xe5\x8a\xa1\xe7\xab\xaf." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::RayvisionSocketComponent_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::RayvisionSocketComponent_eventSendMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "UnbindEvents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URayvisionSocketComponent);
	UClass* Z_Construct_UClass_URayvisionSocketComponent_NoRegister()
	{
		return URayvisionSocketComponent::StaticClass();
	}
	struct Z_Construct_UClass_URayvisionSocketComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectionError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRawMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRawMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageSent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageSent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReceivedJoystickMove_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceivedJoystickMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnect_MetaData[];
#endif
		static void NewProp_bAutoConnect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReconnectOnFailed_MetaData[];
#endif
		static void NewProp_bAutoReconnectOnFailed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReconnectOnFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReconnectInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReconnectInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URayvisionSocketComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RayvisionSocket,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URayvisionSocketComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect, "AutoConnect" }, // 36004580
		{ &Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode, "Base64Decode" }, // 706150036
		{ &Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode, "Base64Encode" }, // 2514286330
		{ &Z_Construct_UFunction_URayvisionSocketComponent_BindEvents, "BindEvents" }, // 3418486845
		{ &Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat, "ConnectTo3dcat" }, // 2542697227
		{ &Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl, "ConnectToUrl" }, // 3528230118
		{ &Z_Construct_UFunction_URayvisionSocketComponent_Disconnect, "Disconnect" }, // 3699738823
		{ &Z_Construct_UFunction_URayvisionSocketComponent_SendData, "SendData" }, // 308997508
		{ &Z_Construct_UFunction_URayvisionSocketComponent_SendMessage, "SendMessage" }, // 3796961707
		{ &Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents, "UnbindEvents" }, // 154575689
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RayvisionSocketComponent.h" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnConnected), Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnected_MetaData), Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnected_MetaData) }; // 3049911955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnectionError_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnectionError = { "OnConnectionError", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnConnectionError), Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnectionError_MetaData), Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnectionError_MetaData) }; // 3341253409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnClosed_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnClosed), Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnClosed_MetaData), Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnClosed_MetaData) }; // 2185303990
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessage_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessage = { "OnMessage", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnMessage), Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessage_MetaData), Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessage_MetaData) }; // 4048152451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnRawMessage_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnRawMessage = { "OnRawMessage", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnRawMessage), Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnRawMessage_MetaData), Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnRawMessage_MetaData) }; // 67108748
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessageSent_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessageSent = { "OnMessageSent", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnMessageSent), Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessageSent_MetaData), Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessageSent_MetaData) }; // 963897691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnReceivedJoystickMove_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnReceivedJoystickMove = { "OnReceivedJoystickMove", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnReceivedJoystickMove), Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnReceivedJoystickMove_MetaData), Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnReceivedJoystickMove_MetaData) }; // 1496144453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_TestUrl_MetaData[] = {
		{ "Category", "Sockets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xa8\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe6\xb5\x8b\xe8\xaf\x95WebSocket\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84Url. \xe4\xbb\x85\xe7\x94\xa8\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe7\x9a\x84\xe5\xbc\x80\xe5\x8f\x91\xe4\xb8\x8e\xe6\xb5\x8b\xe8\xaf\x95, \xe9\x9d\x9e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\xb0\x9d\xe8\xaf\x95\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3""3dcat\xe6\x8c\x87\xe5\xae\x9a\xe7\xab\xaf\xe5\x8f\xa3.\n" },
#endif
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe6\xb5\x8b\xe8\xaf\x95WebSocket\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84Url. \xe4\xbb\x85\xe7\x94\xa8\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe7\x9a\x84\xe5\xbc\x80\xe5\x8f\x91\xe4\xb8\x8e\xe6\xb5\x8b\xe8\xaf\x95, \xe9\x9d\x9e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\xb0\x9d\xe8\xaf\x95\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3""3dcat\xe6\x8c\x87\xe5\xae\x9a\xe7\xab\xaf\xe5\x8f\xa3." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_TestUrl = { "TestUrl", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayvisionSocketComponent, TestUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_TestUrl_MetaData), Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_TestUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect_MetaData[] = {
		{ "Category", "Sockets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x9b\xe8\xa1\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe8\xbf\x9e\xe6\x8e\xa5.\n" },
#endif
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x9b\xe8\xa1\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe8\xbf\x9e\xe6\x8e\xa5." },
#endif
	};
#endif
	void Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect_SetBit(void* Obj)
	{
		((URayvisionSocketComponent*)Obj)->bAutoConnect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect = { "bAutoConnect", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URayvisionSocketComponent), &Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect_MetaData), Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed_MetaData[] = {
		{ "Category", "Sockets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x87\xaa\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e, \xe5\xbd\x93\xe8\xbf\x9e\xe6\x8e\xa5\xe5\xa4\xb1\xe8\xb4\xa5\xe5\x90\x8e, \xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\xb0\x9d\xe8\xaf\x95\xe9\x87\x8d\xe6\x96\xb0\xe5\xbb\xba\xe7\xab\x8b\xe8\xbf\x9e\xe6\x8e\xa5. \xe5\xaf\xb9\xe4\xba\x8e\xe5\x90\xaf\xe7\x94\xa8\xe4\xba\x86\xe9\xa2\x84\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x8a\x9f\xe8\x83\xbd\xe7\x9a\x84\xe5\xba\x94\xe7\x94\xa8,\xe7\x94\xb1\xe4\xba\x8e\xe6\x9c\xac\xe5\x9c\xb0\xe7\xab\xaf\xe5\x8f\xa3\xe5\x8f\xaa\xe4\xbc\x9a\xe5\x9c\xa8\xe7\x94\xa8\xe6\x88\xb7\xe6\x8e\xa5\xe5\x85\xa5\xe5\x90\x8e\xe5\xbc\x80\xe5\x90\xaf, \xe5\x9b\xa0\xe6\xad\xa4\xe5\xbb\xba\xe8\xae\xae\xe5\x8b\xbe\xe9\x80\x89\xe6\xad\xa4\xe9\xa1\xb9. \n" },
#endif
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e, \xe5\xbd\x93\xe8\xbf\x9e\xe6\x8e\xa5\xe5\xa4\xb1\xe8\xb4\xa5\xe5\x90\x8e, \xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\xb0\x9d\xe8\xaf\x95\xe9\x87\x8d\xe6\x96\xb0\xe5\xbb\xba\xe7\xab\x8b\xe8\xbf\x9e\xe6\x8e\xa5. \xe5\xaf\xb9\xe4\xba\x8e\xe5\x90\xaf\xe7\x94\xa8\xe4\xba\x86\xe9\xa2\x84\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x8a\x9f\xe8\x83\xbd\xe7\x9a\x84\xe5\xba\x94\xe7\x94\xa8,\xe7\x94\xb1\xe4\xba\x8e\xe6\x9c\xac\xe5\x9c\xb0\xe7\xab\xaf\xe5\x8f\xa3\xe5\x8f\xaa\xe4\xbc\x9a\xe5\x9c\xa8\xe7\x94\xa8\xe6\x88\xb7\xe6\x8e\xa5\xe5\x85\xa5\xe5\x90\x8e\xe5\xbc\x80\xe5\x90\xaf, \xe5\x9b\xa0\xe6\xad\xa4\xe5\xbb\xba\xe8\xae\xae\xe5\x8b\xbe\xe9\x80\x89\xe6\xad\xa4\xe9\xa1\xb9." },
#endif
	};
#endif
	void Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed_SetBit(void* Obj)
	{
		((URayvisionSocketComponent*)Obj)->bAutoReconnectOnFailed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed = { "bAutoReconnectOnFailed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URayvisionSocketComponent), &Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed_MetaData), Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_ReconnectInterval_MetaData[] = {
		{ "Category", "Sockets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x87\xaa\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e\xe9\xa2\x91\xe7\x8e\x87\n" },
#endif
		{ "EditCondition", "bAutoReconnect" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e\xe9\xa2\x91\xe7\x8e\x87" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_ReconnectInterval = { "ReconnectInterval", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayvisionSocketComponent, ReconnectInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_ReconnectInterval_MetaData), Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_ReconnectInterval_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URayvisionSocketComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnectionError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnRawMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessageSent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnReceivedJoystickMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_TestUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_ReconnectInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URayvisionSocketComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URayvisionSocketComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URayvisionSocketComponent_Statics::ClassParams = {
		&URayvisionSocketComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URayvisionSocketComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URayvisionSocketComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URayvisionSocketComponent()
	{
		if (!Z_Registration_Info_UClass_URayvisionSocketComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URayvisionSocketComponent.OuterSingleton, Z_Construct_UClass_URayvisionSocketComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URayvisionSocketComponent.OuterSingleton;
	}
	template<> RAYVISIONSOCKET_API UClass* StaticClass<URayvisionSocketComponent>()
	{
		return URayvisionSocketComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URayvisionSocketComponent);
	URayvisionSocketComponent::~URayvisionSocketComponent() {}
	struct Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URayvisionSocketComponent, URayvisionSocketComponent::StaticClass, TEXT("URayvisionSocketComponent"), &Z_Registration_Info_UClass_URayvisionSocketComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URayvisionSocketComponent), 3246554985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_3755663345(TEXT("/Script/RayvisionSocket"),
		Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_RayvisionSocketComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
