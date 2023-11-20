// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RayvisionSocket/Public/Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RAYVISIONSOCKET_API UClass* Z_Construct_UClass_UTypes();
	RAYVISIONSOCKET_API UClass* Z_Construct_UClass_UTypes_NoRegister();
	RAYVISIONSOCKET_API UScriptStruct* Z_Construct_UScriptStruct_FJoyMoveMessage();
	UPackage* Z_Construct_UPackage__Script_RayvisionSocket();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JoyMoveMessage;
class UScriptStruct* FJoyMoveMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JoyMoveMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JoyMoveMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoyMoveMessage, (UObject*)Z_Construct_UPackage__Script_RayvisionSocket(), TEXT("JoyMoveMessage"));
	}
	return Z_Registration_Info_UScriptStruct_JoyMoveMessage.OuterSingleton;
}
template<> RAYVISIONSOCKET_API UScriptStruct* StaticStruct<FJoyMoveMessage>()
{
	return FJoyMoveMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJoyMoveMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoyMoveMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "JoyMove" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoyMoveMessage, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_EventName_MetaData), Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_EventName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "JoyMove" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoyMoveMessage, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Timestamp_MetaData), Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_X_MetaData[] = {
		{ "Category", "JoyMove" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoyMoveMessage, X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_X_MetaData), Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "JoyMove" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoyMoveMessage, Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Y_MetaData), Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Y_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewProp_Y,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayvisionSocket,
		nullptr,
		&NewStructOps,
		"JoyMoveMessage",
		Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::PropPointers),
		sizeof(FJoyMoveMessage),
		alignof(FJoyMoveMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJoyMoveMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_JoyMoveMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JoyMoveMessage.InnerSingleton, Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JoyMoveMessage.InnerSingleton;
	}
	void UTypes::StaticRegisterNativesUTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypes);
	UClass* Z_Construct_UClass_UTypes_NoRegister()
	{
		return UTypes::StaticClass();
	}
	struct Z_Construct_UClass_UTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RayvisionSocket,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Types.h" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypes_Statics::ClassParams = {
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypes()
	{
		if (!Z_Registration_Info_UClass_UTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypes.OuterSingleton, Z_Construct_UClass_UTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypes.OuterSingleton;
	}
	template<> RAYVISIONSOCKET_API UClass* StaticClass<UTypes>()
	{
		return UTypes::StaticClass();
	}
	UTypes::UTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypes);
	UTypes::~UTypes() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_Types_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_Types_h_Statics::ScriptStructInfo[] = {
		{ FJoyMoveMessage::StaticStruct, Z_Construct_UScriptStruct_FJoyMoveMessage_Statics::NewStructOps, TEXT("JoyMoveMessage"), &Z_Registration_Info_UScriptStruct_JoyMoveMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoyMoveMessage), 592587350U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_Types_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypes, UTypes::StaticClass, TEXT("UTypes"), &Z_Registration_Info_UClass_UTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypes), 1533335230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_Types_h_1021814736(TEXT("/Script/RayvisionSocket"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_Types_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_Types_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_Types_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RayvisionSocket_Source_RayvisionSocket_Public_Types_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
