// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/ParentSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentSaveGame() {}

// Begin Cross Module References
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UParentSaveGame();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UParentSaveGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin Class UParentSaveGame
void UParentSaveGame::StaticRegisterNativesUParentSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParentSaveGame);
UClass* Z_Construct_UClass_UParentSaveGame_NoRegister()
{
	return UParentSaveGame::StaticClass();
}
struct Z_Construct_UClass_UParentSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ParentSaveGame.h" },
		{ "ModuleRelativePath", "Public/ParentSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedCheckPoints_MetaData[] = {
		{ "Category", "Checkpoint System" },
		{ "ModuleRelativePath", "Public/ParentSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/ParentSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavedCheckPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedCheckPoints;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParentSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UParentSaveGame_Statics::NewProp_SavedCheckPoints_Inner = { "SavedCheckPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParentSaveGame_Statics::NewProp_SavedCheckPoints = { "SavedCheckPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentSaveGame, SavedCheckPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedCheckPoints_MetaData), NewProp_SavedCheckPoints_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParentSaveGame_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentSaveGame, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParentSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentSaveGame_Statics::NewProp_SavedCheckPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentSaveGame_Statics::NewProp_SavedCheckPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentSaveGame_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParentSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParentSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParentSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParentSaveGame_Statics::ClassParams = {
	&UParentSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParentSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParentSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UParentSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParentSaveGame()
{
	if (!Z_Registration_Info_UClass_UParentSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParentSaveGame.OuterSingleton, Z_Construct_UClass_UParentSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParentSaveGame.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UClass* StaticClass<UParentSaveGame>()
{
	return UParentSaveGame::StaticClass();
}
UParentSaveGame::UParentSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParentSaveGame);
UParentSaveGame::~UParentSaveGame() {}
// End Class UParentSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParentSaveGame, UParentSaveGame::StaticClass, TEXT("UParentSaveGame"), &Z_Registration_Info_UClass_UParentSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParentSaveGame), 1376122031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGame_h_2785644301(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
