// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/ParentSaveGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentSaveGameInstance() {}

// Begin Cross Module References
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UParentSaveGameInstance();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UParentSaveGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin Class UParentSaveGameInstance
void UParentSaveGameInstance::StaticRegisterNativesUParentSaveGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParentSaveGameInstance);
UClass* Z_Construct_UClass_UParentSaveGameInstance_NoRegister()
{
	return UParentSaveGameInstance::StaticClass();
}
struct Z_Construct_UClass_UParentSaveGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ParentSaveGameInstance.h" },
		{ "ModuleRelativePath", "Public/ParentSaveGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSlot_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/ParentSaveGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CachedSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParentSaveGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParentSaveGameInstance_Statics::NewProp_CachedSlot = { "CachedSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentSaveGameInstance, CachedSlot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSlot_MetaData), NewProp_CachedSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParentSaveGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentSaveGameInstance_Statics::NewProp_CachedSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParentSaveGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParentSaveGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParentSaveGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParentSaveGameInstance_Statics::ClassParams = {
	&UParentSaveGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParentSaveGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParentSaveGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentSaveGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UParentSaveGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParentSaveGameInstance()
{
	if (!Z_Registration_Info_UClass_UParentSaveGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParentSaveGameInstance.OuterSingleton, Z_Construct_UClass_UParentSaveGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParentSaveGameInstance.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UClass* StaticClass<UParentSaveGameInstance>()
{
	return UParentSaveGameInstance::StaticClass();
}
UParentSaveGameInstance::UParentSaveGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParentSaveGameInstance);
UParentSaveGameInstance::~UParentSaveGameInstance() {}
// End Class UParentSaveGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParentSaveGameInstance, UParentSaveGameInstance::StaticClass, TEXT("UParentSaveGameInstance"), &Z_Registration_Info_UClass_UParentSaveGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParentSaveGameInstance), 1687317134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGameInstance_h_3976680173(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
