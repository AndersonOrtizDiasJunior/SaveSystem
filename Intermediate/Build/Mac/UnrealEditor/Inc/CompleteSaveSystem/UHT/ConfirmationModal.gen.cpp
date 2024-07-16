// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/ConfirmationModal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfirmationModal() {}

// Begin Cross Module References
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UConfirmationModal();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UConfirmationModal_NoRegister();
COMPLETESAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin Delegate FActionDelegate
struct Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics
{
	struct ConfirmationModal_eventActionDelegate_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfirmationModal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConfirmationModal_eventActionDelegate_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirmationModal, nullptr, "ActionDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::ConfirmationModal_eventActionDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::ConfirmationModal_eventActionDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UConfirmationModal::FActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActionDelegate, int32 Index)
{
	struct ConfirmationModal_eventActionDelegate_Parms
	{
		int32 Index;
	};
	ConfirmationModal_eventActionDelegate_Parms Parms;
	Parms.Index=Index;
	ActionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActionDelegate

// Begin Class UConfirmationModal Function OnClickYes
struct Z_Construct_UFunction_UConfirmationModal_OnClickYes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfirmationModal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfirmationModal_OnClickYes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirmationModal, nullptr, "OnClickYes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmationModal_OnClickYes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConfirmationModal_OnClickYes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConfirmationModal_OnClickYes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConfirmationModal_OnClickYes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConfirmationModal::execOnClickYes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClickYes();
	P_NATIVE_END;
}
// End Class UConfirmationModal Function OnClickYes

// Begin Class UConfirmationModal Function SetParameters
struct Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics
{
	struct ConfirmationModal_eventSetParameters_Parms
	{
		FText Title;
		FText Content;
		int32 Index;
		bool HasYesButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/ConfirmationModal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Content;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_HasYesButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasYesButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConfirmationModal_eventSetParameters_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConfirmationModal_eventSetParameters_Parms, Content), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConfirmationModal_eventSetParameters_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::NewProp_HasYesButton_SetBit(void* Obj)
{
	((ConfirmationModal_eventSetParameters_Parms*)Obj)->HasYesButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::NewProp_HasYesButton = { "HasYesButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConfirmationModal_eventSetParameters_Parms), &Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::NewProp_HasYesButton_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::NewProp_HasYesButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirmationModal, nullptr, "SetParameters", nullptr, nullptr, Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::ConfirmationModal_eventSetParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::ConfirmationModal_eventSetParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConfirmationModal_SetParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConfirmationModal_SetParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConfirmationModal::execSetParameters)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_Title);
	P_GET_PROPERTY(FTextProperty,Z_Param_Content);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL(Z_Param_HasYesButton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameters(Z_Param_Title,Z_Param_Content,Z_Param_Index,Z_Param_HasYesButton);
	P_NATIVE_END;
}
// End Class UConfirmationModal Function SetParameters

// Begin Class UConfirmationModal
void UConfirmationModal::StaticRegisterNativesUConfirmationModal()
{
	UClass* Class = UConfirmationModal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnClickYes", &UConfirmationModal::execOnClickYes },
		{ "SetParameters", &UConfirmationModal::execSetParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConfirmationModal);
UClass* Z_Construct_UClass_UConfirmationModal_NoRegister()
{
	return UConfirmationModal::StaticClass();
}
struct Z_Construct_UClass_UConfirmationModal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ConfirmationModal.h" },
		{ "ModuleRelativePath", "Public/ConfirmationModal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YesAction_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/ConfirmationModal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConfirmationModal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConfirmationModal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YesButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConfirmationModal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConfirmationModal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isLoading_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/ConfirmationModal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasYesButton_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/ConfirmationModal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_YesAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YesButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoButton;
	static void NewProp_isLoading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isLoading;
	static void NewProp_bHasYesButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasYesButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature, "ActionDelegate__DelegateSignature" }, // 2656905549
		{ &Z_Construct_UFunction_UConfirmationModal_OnClickYes, "OnClickYes" }, // 1442735450
		{ &Z_Construct_UFunction_UConfirmationModal_SetParameters, "SetParameters" }, // 3981478313
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfirmationModal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConfirmationModal_Statics::NewProp_YesAction = { "YesAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmationModal, YesAction), Z_Construct_UDelegateFunction_UConfirmationModal_ActionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YesAction_MetaData), NewProp_YesAction_MetaData) }; // 2656905549
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmationModal_Statics::NewProp_TitleLabel = { "TitleLabel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmationModal, TitleLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleLabel_MetaData), NewProp_TitleLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmationModal_Statics::NewProp_ContentLabel = { "ContentLabel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmationModal, ContentLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentLabel_MetaData), NewProp_ContentLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmationModal_Statics::NewProp_YesButton = { "YesButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmationModal, YesButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YesButton_MetaData), NewProp_YesButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmationModal_Statics::NewProp_NoButton = { "NoButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmationModal, NoButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoButton_MetaData), NewProp_NoButton_MetaData) };
void Z_Construct_UClass_UConfirmationModal_Statics::NewProp_isLoading_SetBit(void* Obj)
{
	((UConfirmationModal*)Obj)->isLoading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConfirmationModal_Statics::NewProp_isLoading = { "isLoading", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConfirmationModal), &Z_Construct_UClass_UConfirmationModal_Statics::NewProp_isLoading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isLoading_MetaData), NewProp_isLoading_MetaData) };
void Z_Construct_UClass_UConfirmationModal_Statics::NewProp_bHasYesButton_SetBit(void* Obj)
{
	((UConfirmationModal*)Obj)->bHasYesButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConfirmationModal_Statics::NewProp_bHasYesButton = { "bHasYesButton", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConfirmationModal), &Z_Construct_UClass_UConfirmationModal_Statics::NewProp_bHasYesButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasYesButton_MetaData), NewProp_bHasYesButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConfirmationModal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmationModal_Statics::NewProp_YesAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmationModal_Statics::NewProp_TitleLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmationModal_Statics::NewProp_ContentLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmationModal_Statics::NewProp_YesButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmationModal_Statics::NewProp_NoButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmationModal_Statics::NewProp_isLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmationModal_Statics::NewProp_bHasYesButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmationModal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConfirmationModal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmationModal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConfirmationModal_Statics::ClassParams = {
	&UConfirmationModal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UConfirmationModal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmationModal_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmationModal_Statics::Class_MetaDataParams), Z_Construct_UClass_UConfirmationModal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConfirmationModal()
{
	if (!Z_Registration_Info_UClass_UConfirmationModal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConfirmationModal.OuterSingleton, Z_Construct_UClass_UConfirmationModal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConfirmationModal.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UClass* StaticClass<UConfirmationModal>()
{
	return UConfirmationModal::StaticClass();
}
UConfirmationModal::UConfirmationModal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConfirmationModal);
UConfirmationModal::~UConfirmationModal() {}
// End Class UConfirmationModal

// Begin Registration
struct Z_CompiledInDeferFile_FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConfirmationModal, UConfirmationModal::StaticClass, TEXT("UConfirmationModal"), &Z_Registration_Info_UClass_UConfirmationModal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConfirmationModal), 4010710858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_3724609721(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
