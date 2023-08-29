// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRayvisionSocket_init() {}
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RayvisionSocket;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RayvisionSocket()
	{
		if (!Z_Registration_Info_UPackage__Script_RayvisionSocket.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RayvisionSocket",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCF643A4F,
				0xEB9700E1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RayvisionSocket.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RayvisionSocket.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RayvisionSocket(Z_Construct_UPackage__Script_RayvisionSocket, TEXT("/Script/RayvisionSocket"), Z_Registration_Info_UPackage__Script_RayvisionSocket, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCF643A4F, 0xEB9700E1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
