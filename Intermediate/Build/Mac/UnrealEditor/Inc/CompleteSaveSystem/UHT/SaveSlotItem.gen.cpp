// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/SaveSlotItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSlotItem() {}

// Begin Cross Module References
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_USaveSlotItem();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_USaveSlotItem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin Class USaveSlotItem Function SetParameters
struct Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics
{
	struct SaveSlotItem_eventSetParameters_Parms
	{
		int32 NewIndex;
		UMaterialInterface* NewImage;
		FText NewTitle;
		FText NewSubtitle;
		FText NewTimeStamp;
		bool NewCanBeDeleted;
		bool NewIsLoad;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveSlotItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewImage;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewSubtitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewTimeStamp;
	static void NewProp_NewCanBeDeleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanBeDeleted;
	static void NewProp_NewIsLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewIsLoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSlotItem_eventSetParameters_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewImage = { "NewImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSlotItem_eventSetParameters_Parms, NewImage), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewTitle = { "NewTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSlotItem_eventSetParameters_Parms, NewTitle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewSubtitle = { "NewSubtitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSlotItem_eventSetParameters_Parms, NewSubtitle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewTimeStamp = { "NewTimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSlotItem_eventSetParameters_Parms, NewTimeStamp), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewCanBeDeleted_SetBit(void* Obj)
{
	((SaveSlotItem_eventSetParameters_Parms*)Obj)->NewCanBeDeleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewCanBeDeleted = { "NewCanBeDeleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveSlotItem_eventSetParameters_Parms), &Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewCanBeDeleted_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewIsLoad_SetBit(void* Obj)
{
	((SaveSlotItem_eventSetParameters_Parms*)Obj)->NewIsLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewIsLoad = { "NewIsLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveSlotItem_eventSetParameters_Parms), &Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewIsLoad_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewSubtitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewTimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewCanBeDeleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::NewProp_NewIsLoad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSlotItem, nullptr, "SetParameters", nullptr, nullptr, Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::SaveSlotItem_eventSetParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::SaveSlotItem_eventSetParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSlotItem_SetParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSlotItem_SetParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveSlotItem::execSetParameters)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewImage);
	P_GET_PROPERTY(FTextProperty,Z_Param_NewTitle);
	P_GET_PROPERTY(FTextProperty,Z_Param_NewSubtitle);
	P_GET_PROPERTY(FTextProperty,Z_Param_NewTimeStamp);
	P_GET_UBOOL(Z_Param_NewCanBeDeleted);
	P_GET_UBOOL(Z_Param_NewIsLoad);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameters(Z_Param_NewIndex,Z_Param_NewImage,Z_Param_NewTitle,Z_Param_NewSubtitle,Z_Param_NewTimeStamp,Z_Param_NewCanBeDeleted,Z_Param_NewIsLoad);
	P_NATIVE_END;
}
// End Class USaveSlotItem Function SetParameters

// Begin Class USaveSlotItem
void USaveSlotItem::StaticRegisterNativesUSaveSlotItem()
{
	UClass* Class = USaveSlotItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetParameters", &USaveSlotItem::execSetParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveSlotItem);
UClass* Z_Construct_UClass_USaveSlotItem_NoRegister()
{
	return USaveSlotItem::StaticClass();
}
struct Z_Construct_UClass_USaveSlotItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveSlotItem.h" },
		{ "ModuleRelativePath", "Public/SaveSlotItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveSlotItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveSlotItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveSlotItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveSlotItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveSlotItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeDeleted_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveSlotItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoad_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveSlotItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Subtitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TimeStamp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_bCanBeDeleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeDeleted;
	static void NewProp_bIsLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveSlotItem_SetParameters, "SetParameters" }, // 2145592476
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSlotItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotItem_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotItem, Image), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USaveSlotItem_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotItem, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USaveSlotItem_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotItem, Subtitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subtitle_MetaData), NewProp_Subtitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USaveSlotItem_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotItem, TimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStamp_MetaData), NewProp_TimeStamp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveSlotItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotItem, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UClass_USaveSlotItem_Statics::NewProp_bCanBeDeleted_SetBit(void* Obj)
{
	((USaveSlotItem*)Obj)->bCanBeDeleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveSlotItem_Statics::NewProp_bCanBeDeleted = { "bCanBeDeleted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USaveSlotItem), &Z_Construct_UClass_USaveSlotItem_Statics::NewProp_bCanBeDeleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeDeleted_MetaData), NewProp_bCanBeDeleted_MetaData) };
void Z_Construct_UClass_USaveSlotItem_Statics::NewProp_bIsLoad_SetBit(void* Obj)
{
	((USaveSlotItem*)Obj)->bIsLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveSlotItem_Statics::NewProp_bIsLoad = { "bIsLoad", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USaveSlotItem), &Z_Construct_UClass_USaveSlotItem_Statics::NewProp_bIsLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoad_MetaData), NewProp_bIsLoad_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSlotItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotItem_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotItem_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotItem_Statics::NewProp_Subtitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotItem_Statics::NewProp_TimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotItem_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotItem_Statics::NewProp_bCanBeDeleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotItem_Statics::NewProp_bIsLoad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveSlotItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSlotItem_Statics::ClassParams = {
	&USaveSlotItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USaveSlotItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotItem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveSlotItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveSlotItem()
{
	if (!Z_Registration_Info_UClass_USaveSlotItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSlotItem.OuterSingleton, Z_Construct_UClass_USaveSlotItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveSlotItem.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UClass* StaticClass<USaveSlotItem>()
{
	return USaveSlotItem::StaticClass();
}
USaveSlotItem::USaveSlotItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSlotItem);
USaveSlotItem::~USaveSlotItem() {}
// End Class USaveSlotItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveSlotItem, USaveSlotItem::StaticClass, TEXT("USaveSlotItem"), &Z_Registration_Info_UClass_USaveSlotItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSlotItem), 628266462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotItem_h_2322336468(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
