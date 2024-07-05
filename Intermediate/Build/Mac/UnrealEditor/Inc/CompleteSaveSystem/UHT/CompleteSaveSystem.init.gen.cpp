// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompleteSaveSystem_init() {}
	COMPLETESAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CompleteSaveSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_CompleteSaveSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CompleteSaveSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6CBA74FD,
				0xFF376D95,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CompleteSaveSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CompleteSaveSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CompleteSaveSystem(Z_Construct_UPackage__Script_CompleteSaveSystem, TEXT("/Script/CompleteSaveSystem"), Z_Registration_Info_UPackage__Script_CompleteSaveSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6CBA74FD, 0xFF376D95));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
