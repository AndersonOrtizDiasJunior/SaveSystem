// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/ExportingTextureAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportingTextureAsync() {}

// Begin Cross Module References
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UExportingTextureAsync();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UExportingTextureAsync_NoRegister();
COMPLETESAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingFailure__DelegateSignature();
COMPLETESAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin Delegate FExportingSuccess
struct Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics
{
	struct _Script_CompleteSaveSystem_eventExportingSuccess_Parms
	{
		FString Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/ExportingTextureAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CompleteSaveSystem_eventExportingSuccess_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CompleteSaveSystem, nullptr, "ExportingSuccess__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::_Script_CompleteSaveSystem_eventExportingSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::_Script_CompleteSaveSystem_eventExportingSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FExportingSuccess_DelegateWrapper(const FMulticastScriptDelegate& ExportingSuccess, const FString& Path)
{
	struct _Script_CompleteSaveSystem_eventExportingSuccess_Parms
	{
		FString Path;
	};
	_Script_CompleteSaveSystem_eventExportingSuccess_Parms Parms;
	Parms.Path=Path;
	ExportingSuccess.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FExportingSuccess

// Begin Delegate FExportingFailure
struct Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingFailure__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExportingTextureAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CompleteSaveSystem, nullptr, "ExportingFailure__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingFailure__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FExportingFailure_DelegateWrapper(const FMulticastScriptDelegate& ExportingFailure)
{
	ExportingFailure.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FExportingFailure

// Begin Class UExportingTextureAsync Function ExportTextureAsync
struct Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics
{
	struct ExportingTextureAsync_eventExportTextureAsync_Parms
	{
		UObject* WorldContextObject;
		UTexture* Texture;
		FString Name;
		UExportingTextureAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "category", "AsyncTimer" },
		{ "ModuleRelativePath", "Public/ExportingTextureAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExportingTextureAsync_eventExportTextureAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExportingTextureAsync_eventExportTextureAsync_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExportingTextureAsync_eventExportTextureAsync_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExportingTextureAsync_eventExportTextureAsync_Parms, ReturnValue), Z_Construct_UClass_UExportingTextureAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExportingTextureAsync, nullptr, "ExportTextureAsync", nullptr, nullptr, Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::ExportingTextureAsync_eventExportTextureAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::ExportingTextureAsync_eventExportTextureAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExportingTextureAsync::execExportTextureAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UTexture,Z_Param_Texture);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UExportingTextureAsync**)Z_Param__Result=UExportingTextureAsync::ExportTextureAsync(Z_Param_WorldContextObject,Z_Param_Texture,Z_Param_Name);
	P_NATIVE_END;
}
// End Class UExportingTextureAsync Function ExportTextureAsync

// Begin Class UExportingTextureAsync Function OnComplete
struct Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics
{
	struct ExportingTextureAsync_eventOnComplete_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExportingTextureAsync.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((ExportingTextureAsync_eventOnComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExportingTextureAsync_eventOnComplete_Parms), &Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExportingTextureAsync, nullptr, "OnComplete", nullptr, nullptr, Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::ExportingTextureAsync_eventOnComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::ExportingTextureAsync_eventOnComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExportingTextureAsync_OnComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExportingTextureAsync_OnComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExportingTextureAsync::execOnComplete)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnComplete(Z_Param_bSuccess);
	P_NATIVE_END;
}
// End Class UExportingTextureAsync Function OnComplete

// Begin Class UExportingTextureAsync
void UExportingTextureAsync::StaticRegisterNativesUExportingTextureAsync()
{
	UClass* Class = UExportingTextureAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExportTextureAsync", &UExportingTextureAsync::execExportTextureAsync },
		{ "OnComplete", &UExportingTextureAsync::execOnComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExportingTextureAsync);
UClass* Z_Construct_UClass_UExportingTextureAsync_NoRegister()
{
	return UExportingTextureAsync::StaticClass();
}
struct Z_Construct_UClass_UExportingTextureAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExportingTextureAsync.h" },
		{ "ModuleRelativePath", "Public/ExportingTextureAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExportingTextureAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExportingTextureAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExportingTextureAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExportingTextureAsync_ExportTextureAsync, "ExportTextureAsync" }, // 877110280
		{ &Z_Construct_UFunction_UExportingTextureAsync_OnComplete, "OnComplete" }, // 353043431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportingTextureAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExportingTextureAsync_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExportingTextureAsync, OnSuccess), Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1682430359
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExportingTextureAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExportingTextureAsync, OnFailure), Z_Construct_UDelegateFunction_CompleteSaveSystem_ExportingFailure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 612558456
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExportingTextureAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExportingTextureAsync, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExportingTextureAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportingTextureAsync_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportingTextureAsync_Statics::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportingTextureAsync_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExportingTextureAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExportingTextureAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExportingTextureAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExportingTextureAsync_Statics::ClassParams = {
	&UExportingTextureAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UExportingTextureAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UExportingTextureAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExportingTextureAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UExportingTextureAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExportingTextureAsync()
{
	if (!Z_Registration_Info_UClass_UExportingTextureAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExportingTextureAsync.OuterSingleton, Z_Construct_UClass_UExportingTextureAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExportingTextureAsync.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UClass* StaticClass<UExportingTextureAsync>()
{
	return UExportingTextureAsync::StaticClass();
}
UExportingTextureAsync::UExportingTextureAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExportingTextureAsync);
UExportingTextureAsync::~UExportingTextureAsync() {}
// End Class UExportingTextureAsync

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExportingTextureAsync, UExportingTextureAsync::StaticClass, TEXT("UExportingTextureAsync"), &Z_Registration_Info_UClass_UExportingTextureAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExportingTextureAsync), 134247640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_1185334415(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
