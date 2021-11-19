// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RayvisionSocket/Public/Types.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypes() {}
// Cross Module References
	RAYVISIONSOCKET_API UScriptStruct* Z_Construct_UScriptStruct_FJoyMoveMessage();
	UPackage* Z_Construct_UPackage__Script_RayvisionSocket();
	RAYVISIONSOCKET_API UClass* Z_Construct_UClass_UTypes_NoRegister();
	RAYVISIONSOCKET_API UClass* Z_Construct_UClass_UTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FJoyMoveMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RAYVISIONSOCKET_API uint32 Get_Z_Construct_UScriptStruct_FJoyMoveMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoyMoveMessage, Z_Construct_UPackage__Script_RayvisionSocket(), TEXT("JoyMoveMessage"), sizeof(FJoyMoveMessage), Get_Z_Construct_UScriptStruct_FJoyMoveMessage_Hash());
	}
	return Singleton;
}
template<> RAYVISIONSOCKET_API UScriptStruct* StaticStruct<FJoyMoveMessage>()
{
	return FJoyMoveMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJoyMoveMessage(FJoyMoveMessage::StaticStruct, TEXT("/Script/RayvisionSocket"), TEXT("JoyMoveMessage"), false, nullptr, nullptr);
static struct FScriptStruct_RayvisionSocket_StaticRegisterNativesFJoyMoveMessage
{
	FScriptStruct_RayvisionSocket_StaticRegisterNativesFJoyMoveMessage()
	{
		UScriptStruct::DeferCppStructOps<FJoyMoveMessage>(FName(TEXT("JoyMoveMessage")));
	}
} ScriptStruct_RayvisionSocket_StaticRegisterNativesFJoyMoveMessage;
	struct Z_Construct_UScriptStruct_FJoyMoveMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoyMoveMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "JoyMove" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000001000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyMoveMessage, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "JoyMove" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000001000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyMoveMessage, Timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_X_MetaData[] = {
		{ "Category", "JoyMove" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000001000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyMoveMessage, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "JoyMove" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000001000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyMoveMessage, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Y_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Y,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayvisionSocket,
		nullptr,
		&NewStructOps,
		"JoyMoveMessage",
		sizeof(FJoyMoveMessage),
		alignof(FJoyMoveMessage),
		Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoyMoveMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJoyMoveMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RayvisionSocket();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JoyMoveMessage"), sizeof(FJoyMoveMessage), Get_Z_Construct_UScriptStruct_FJoyMoveMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJoyMoveMessage_Hash() { return 2726158293U; }
	void UTypes::StaticRegisterNativesUTypes()
	{
	}
	UClass* Z_Construct_UClass_UTypes_NoRegister()
	{
		return UTypes::StaticClass();
	}
	struct Z_Construct_UClass_UTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RayvisionSocket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Types.h" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTypes_Statics::ClassParams = {
		&UTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTypes, 2901756968);
	template<> RAYVISIONSOCKET_API UClass* StaticClass<UTypes>()
	{
		return UTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTypes(Z_Construct_UClass_UTypes, &UTypes::StaticClass, TEXT("/Script/RayvisionSocket"), TEXT("UTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
