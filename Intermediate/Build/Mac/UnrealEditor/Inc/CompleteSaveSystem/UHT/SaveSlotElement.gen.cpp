// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/SaveSlotElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSlotElement() {}

// Begin Cross Module References
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_USaveSlotElement();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_USaveSlotElement_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin Class USaveSlotElement Function CallMainAction
struct Z_Construct_UFunction_USaveSlotElement_CallMainAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSlotElement_CallMainAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSlotElement, nullptr, "CallMainAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotElement_CallMainAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSlotElement_CallMainAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USaveSlotElement_CallMainAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSlotElement_CallMainAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveSlotElement::execCallMainAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallMainAction();
	P_NATIVE_END;
}
// End Class USaveSlotElement Function CallMainAction

// Begin Class USaveSlotElement Function CallOnDelete
struct Z_Construct_UFunction_USaveSlotElement_CallOnDelete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSlotElement_CallOnDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSlotElement, nullptr, "CallOnDelete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotElement_CallOnDelete_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSlotElement_CallOnDelete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USaveSlotElement_CallOnDelete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSlotElement_CallOnDelete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveSlotElement::execCallOnDelete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallOnDelete();
	P_NATIVE_END;
}
// End Class USaveSlotElement Function CallOnDelete

// Begin Class USaveSlotElement
void USaveSlotElement::StaticRegisterNativesUSaveSlotElement()
{
	UClass* Class = USaveSlotElement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallMainAction", &USaveSlotElement::execCallMainAction },
		{ "CallOnDelete", &USaveSlotElement::execCallOnDelete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveSlotElement);
UClass* Z_Construct_UClass_USaveSlotElement_NoRegister()
{
	return USaveSlotElement::StaticClass();
}
struct Z_Construct_UClass_USaveSlotElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SaveSlotElement.h" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStampLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeleteSlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoad_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubtitleLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeStampLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeleteSlotButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionButton;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_bIsLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveSlotElement_CallMainAction, "CallMainAction" }, // 3323937519
		{ &Z_Construct_UFunction_USaveSlotElement_CallOnDelete, "CallOnDelete" }, // 1074293519
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSlotElement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_TitleLabel = { "TitleLabel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, TitleLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleLabel_MetaData), NewProp_TitleLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_SubtitleLabel = { "SubtitleLabel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, SubtitleLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleLabel_MetaData), NewProp_SubtitleLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_TimeStampLabel = { "TimeStampLabel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, TimeStampLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStampLabel_MetaData), NewProp_TimeStampLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, Thumbnail), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thumbnail_MetaData), NewProp_Thumbnail_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_DeleteSlotButton = { "DeleteSlotButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, DeleteSlotButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeleteSlotButton_MetaData), NewProp_DeleteSlotButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_ActionButton = { "ActionButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, ActionButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionButton_MetaData), NewProp_ActionButton_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UClass_USaveSlotElement_Statics::NewProp_bIsLoad_SetBit(void* Obj)
{
	((USaveSlotElement*)Obj)->bIsLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_bIsLoad = { "bIsLoad", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USaveSlotElement), &Z_Construct_UClass_USaveSlotElement_Statics::NewProp_bIsLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoad_MetaData), NewProp_bIsLoad_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSlotElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_TitleLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_SubtitleLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_TimeStampLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_Thumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_DeleteSlotButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_ActionButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_bIsLoad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveSlotElement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USaveSlotElement_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(USaveSlotElement, IUserObjectListEntry), false },  // 228470651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSlotElement_Statics::ClassParams = {
	&USaveSlotElement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USaveSlotElement_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveSlotElement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveSlotElement()
{
	if (!Z_Registration_Info_UClass_USaveSlotElement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSlotElement.OuterSingleton, Z_Construct_UClass_USaveSlotElement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveSlotElement.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UClass* StaticClass<USaveSlotElement>()
{
	return USaveSlotElement::StaticClass();
}
USaveSlotElement::USaveSlotElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSlotElement);
USaveSlotElement::~USaveSlotElement() {}
// End Class USaveSlotElement

// Begin Registration
struct Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveSlotElement, USaveSlotElement::StaticClass, TEXT("USaveSlotElement"), &Z_Registration_Info_UClass_USaveSlotElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSlotElement), 1569332585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_3467928664(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
