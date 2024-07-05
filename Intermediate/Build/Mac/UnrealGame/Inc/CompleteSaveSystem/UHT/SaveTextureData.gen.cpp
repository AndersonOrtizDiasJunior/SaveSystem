// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/SaveTextureData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveTextureData() {}

// Begin Cross Module References
COMPLETESAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveTextureData();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin ScriptStruct FSaveTextureData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveTextureData;
class UScriptStruct* FSaveTextureData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveTextureData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveTextureData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveTextureData, (UObject*)Z_Construct_UPackage__Script_CompleteSaveSystem(), TEXT("SaveTextureData"));
	}
	return Z_Registration_Info_UScriptStruct_SaveTextureData.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UScriptStruct* StaticStruct<FSaveTextureData>()
{
	return FSaveTextureData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSaveTextureData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveTextureData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveTextureData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveTextureData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
	nullptr,
	&NewStructOps,
	"SaveTextureData",
	nullptr,
	0,
	sizeof(FSaveTextureData),
	alignof(FSaveTextureData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveTextureData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveTextureData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveTextureData()
{
	if (!Z_Registration_Info_UScriptStruct_SaveTextureData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveTextureData.InnerSingleton, Z_Construct_UScriptStruct_FSaveTextureData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SaveTextureData.InnerSingleton;
}
// End ScriptStruct FSaveTextureData

// Begin Registration
struct Z_CompiledInDeferFile_FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveTextureData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSaveTextureData::StaticStruct, Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewStructOps, TEXT("SaveTextureData"), &Z_Registration_Info_UScriptStruct_SaveTextureData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveTextureData), 717725285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveTextureData_h_2842895063(TEXT("/Script/CompleteSaveSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveTextureData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveTextureData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
