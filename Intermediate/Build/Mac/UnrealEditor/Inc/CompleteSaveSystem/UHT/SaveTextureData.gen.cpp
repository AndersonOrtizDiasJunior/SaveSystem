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
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveTextureData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveTextureData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveTextureData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveTextureData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveTextureData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveTextureData, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 2609309733
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveTextureData, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveTextureData, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveTextureData, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffer_MetaData), NewProp_Buffer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveTextureData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewProp_Buffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveTextureData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveTextureData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
	nullptr,
	&NewStructOps,
	"SaveTextureData",
	Z_Construct_UScriptStruct_FSaveTextureData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveTextureData_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveTextureData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSaveTextureData::StaticStruct, Z_Construct_UScriptStruct_FSaveTextureData_Statics::NewStructOps, TEXT("SaveTextureData"), &Z_Registration_Info_UScriptStruct_SaveTextureData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveTextureData), 157386760U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveTextureData_h_3509821691(TEXT("/Script/CompleteSaveSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveTextureData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveTextureData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
