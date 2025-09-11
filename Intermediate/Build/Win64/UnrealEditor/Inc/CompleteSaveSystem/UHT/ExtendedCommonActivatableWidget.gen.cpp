// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/ExtendedCommonActivatableWidget.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtendedCommonActivatableWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UExtendedCommonActivatableWidget();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UExtendedCommonActivatableWidget_NoRegister();
COMPLETESAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature();
COMPLETESAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionBindingHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin Delegate FInputActionExecutedDelegate
struct Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics
{
	struct _Script_CompleteSaveSystem_eventInputActionExecutedDelegate_Parms
	{
		FName ActionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CompleteSaveSystem_eventInputActionExecutedDelegate_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::NewProp_ActionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CompleteSaveSystem, nullptr, "InputActionExecutedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::_Script_CompleteSaveSystem_eventInputActionExecutedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::_Script_CompleteSaveSystem_eventInputActionExecutedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInputActionExecutedDelegate_DelegateWrapper(const FScriptDelegate& InputActionExecutedDelegate, FName ActionName)
{
	struct _Script_CompleteSaveSystem_eventInputActionExecutedDelegate_Parms
	{
		FName ActionName;
	};
	_Script_CompleteSaveSystem_eventInputActionExecutedDelegate_Parms Parms;
	Parms.ActionName=ActionName;
	InputActionExecutedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FInputActionExecutedDelegate

// Begin ScriptStruct FInputActionBindingHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionBindingHandle;
class UScriptStruct* FInputActionBindingHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionBindingHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionBindingHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionBindingHandle, (UObject*)Z_Construct_UPackage__Script_CompleteSaveSystem(), TEXT("InputActionBindingHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionBindingHandle.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UScriptStruct* StaticStruct<FInputActionBindingHandle>()
{
	return FInputActionBindingHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionBindingHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
	nullptr,
	&NewStructOps,
	"InputActionBindingHandle",
	nullptr,
	0,
	sizeof(FInputActionBindingHandle),
	alignof(FInputActionBindingHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputActionBindingHandle()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionBindingHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionBindingHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputActionBindingHandle.InnerSingleton;
}
// End ScriptStruct FInputActionBindingHandle

// Begin Class UExtendedCommonActivatableWidget Function RegisterBinding
struct Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics
{
	struct ExtendedCommonActivatableWidget_eventRegisterBinding_Parms
	{
		FDataTableRowHandle InputAction;
		FScriptDelegate Callback;
		FInputActionBindingHandle BindingHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtendedActivatableWidget" },
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventRegisterBinding_Parms, InputAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 1360917958
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventRegisterBinding_Parms, Callback), Z_Construct_UDelegateFunction_CompleteSaveSystem_InputActionExecutedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2068193111
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::NewProp_BindingHandle = { "BindingHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventRegisterBinding_Parms, BindingHandle), Z_Construct_UScriptStruct_FInputActionBindingHandle, METADATA_PARAMS(0, nullptr) }; // 2531920343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::NewProp_BindingHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExtendedCommonActivatableWidget, nullptr, "RegisterBinding", nullptr, nullptr, Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::ExtendedCommonActivatableWidget_eventRegisterBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::ExtendedCommonActivatableWidget_eventRegisterBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExtendedCommonActivatableWidget::execRegisterBinding)
{
	P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputAction);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT_REF(FInputActionBindingHandle,Z_Param_Out_BindingHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterBinding(Z_Param_InputAction,FInputActionExecutedDelegate(Z_Param_Out_Callback),Z_Param_Out_BindingHandle);
	P_NATIVE_END;
}
// End Class UExtendedCommonActivatableWidget Function RegisterBinding

// Begin Class UExtendedCommonActivatableWidget Function UnregisterAllBindings
struct Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtendedActivatableWidget" },
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExtendedCommonActivatableWidget, nullptr, "UnregisterAllBindings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExtendedCommonActivatableWidget::execUnregisterAllBindings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterAllBindings();
	P_NATIVE_END;
}
// End Class UExtendedCommonActivatableWidget Function UnregisterAllBindings

// Begin Class UExtendedCommonActivatableWidget Function UnregisterBinding
struct Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics
{
	struct ExtendedCommonActivatableWidget_eventUnregisterBinding_Parms
	{
		FInputActionBindingHandle BindingHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ExtendedActivatableWidget" },
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::NewProp_BindingHandle = { "BindingHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventUnregisterBinding_Parms, BindingHandle), Z_Construct_UScriptStruct_FInputActionBindingHandle, METADATA_PARAMS(0, nullptr) }; // 2531920343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::NewProp_BindingHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExtendedCommonActivatableWidget, nullptr, "UnregisterBinding", nullptr, nullptr, Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::ExtendedCommonActivatableWidget_eventUnregisterBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::ExtendedCommonActivatableWidget_eventUnregisterBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExtendedCommonActivatableWidget::execUnregisterBinding)
{
	P_GET_STRUCT(FInputActionBindingHandle,Z_Param_BindingHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterBinding(Z_Param_BindingHandle);
	P_NATIVE_END;
}
// End Class UExtendedCommonActivatableWidget Function UnregisterBinding

// Begin Class UExtendedCommonActivatableWidget
void UExtendedCommonActivatableWidget::StaticRegisterNativesUExtendedCommonActivatableWidget()
{
	UClass* Class = UExtendedCommonActivatableWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterBinding", &UExtendedCommonActivatableWidget::execRegisterBinding },
		{ "UnregisterAllBindings", &UExtendedCommonActivatableWidget::execUnregisterAllBindings },
		{ "UnregisterBinding", &UExtendedCommonActivatableWidget::execUnregisterBinding },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtendedCommonActivatableWidget);
UClass* Z_Construct_UClass_UExtendedCommonActivatableWidget_NoRegister()
{
	return UExtendedCommonActivatableWidget::StaticClass();
}
struct Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Extends UCommonActivatableWidget with Blueprint-visible functions for registering additional input action bindings.\n */" },
#endif
		{ "DisableNativeTick", "" },
		{ "IncludePath", "ExtendedCommonActivatableWidget.h" },
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extends UCommonActivatableWidget with Blueprint-visible functions for registering additional input action bindings." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding, "RegisterBinding" }, // 2381727726
		{ &Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings, "UnregisterAllBindings" }, // 191082399
		{ &Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding, "UnregisterBinding" }, // 1592718547
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtendedCommonActivatableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::ClassParams = {
	&UExtendedCommonActivatableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExtendedCommonActivatableWidget()
{
	if (!Z_Registration_Info_UClass_UExtendedCommonActivatableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtendedCommonActivatableWidget.OuterSingleton, Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExtendedCommonActivatableWidget.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UClass* StaticClass<UExtendedCommonActivatableWidget>()
{
	return UExtendedCommonActivatableWidget::StaticClass();
}
UExtendedCommonActivatableWidget::UExtendedCommonActivatableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExtendedCommonActivatableWidget);
UExtendedCommonActivatableWidget::~UExtendedCommonActivatableWidget() {}
// End Class UExtendedCommonActivatableWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputActionBindingHandle::StaticStruct, Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::NewStructOps, TEXT("InputActionBindingHandle"), &Z_Registration_Info_UScriptStruct_InputActionBindingHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionBindingHandle), 2531920343U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExtendedCommonActivatableWidget, UExtendedCommonActivatableWidget::StaticClass, TEXT("UExtendedCommonActivatableWidget"), &Z_Registration_Info_UClass_UExtendedCommonActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtendedCommonActivatableWidget), 2079413801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_2802440080(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
