// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/Checkpoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpoint() {}

// Begin Cross Module References
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_ACheckpoint();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin Class ACheckpoint
void ACheckpoint::StaticRegisterNativesACheckpoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACheckpoint);
UClass* Z_Construct_UClass_ACheckpoint_NoRegister()
{
	return ACheckpoint::StaticClass();
}
struct Z_Construct_UClass_ACheckpoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Checkpoint.h" },
		{ "ModuleRelativePath", "Public/Checkpoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Checkpoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Checkpoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheckpointName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckpoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpoint, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_CheckpointName = { "CheckpointName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpoint, CheckpointName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointName_MetaData), NewProp_CheckpointName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_CheckpointName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACheckpoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACheckpoint_Statics::ClassParams = {
	&ACheckpoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACheckpoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACheckpoint()
{
	if (!Z_Registration_Info_UClass_ACheckpoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACheckpoint.OuterSingleton, Z_Construct_UClass_ACheckpoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACheckpoint.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UClass* StaticClass<ACheckpoint>()
{
	return ACheckpoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckpoint);
ACheckpoint::~ACheckpoint() {}
// End Class ACheckpoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_Checkpoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACheckpoint, ACheckpoint::StaticClass, TEXT("ACheckpoint"), &Z_Registration_Info_UClass_ACheckpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACheckpoint), 2719300758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_Checkpoint_h_783442823(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_Checkpoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_Checkpoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
