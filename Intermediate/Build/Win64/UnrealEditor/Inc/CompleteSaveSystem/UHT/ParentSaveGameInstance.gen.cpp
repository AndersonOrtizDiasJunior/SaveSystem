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

// Begin Class UParentSaveGameInstance Function AddToDestroyList
struct Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics
{
	struct ParentSaveGameInstance_eventAddToDestroyList_Parms
	{
		FName name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Detroyable System" },
		{ "ModuleRelativePath", "Public/ParentSaveGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParentSaveGameInstance_eventAddToDestroyList_Parms, name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::NewProp_name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentSaveGameInstance, nullptr, "AddToDestroyList", nullptr, nullptr, Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::ParentSaveGameInstance_eventAddToDestroyList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::ParentSaveGameInstance_eventAddToDestroyList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParentSaveGameInstance::execAddToDestroyList)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToDestroyList(Z_Param_name);
	P_NATIVE_END;
}
// End Class UParentSaveGameInstance Function AddToDestroyList

// Begin Class UParentSaveGameInstance Function IsOnDestroyList
struct Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics
{
	struct ParentSaveGameInstance_eventIsOnDestroyList_Parms
	{
		FName name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Detroyable System" },
		{ "ModuleRelativePath", "Public/ParentSaveGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParentSaveGameInstance_eventIsOnDestroyList_Parms, name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParentSaveGameInstance_eventIsOnDestroyList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParentSaveGameInstance_eventIsOnDestroyList_Parms), &Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentSaveGameInstance, nullptr, "IsOnDestroyList", nullptr, nullptr, Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::ParentSaveGameInstance_eventIsOnDestroyList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::ParentSaveGameInstance_eventIsOnDestroyList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParentSaveGameInstance::execIsOnDestroyList)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnDestroyList(Z_Param_name);
	P_NATIVE_END;
}
// End Class UParentSaveGameInstance Function IsOnDestroyList

// Begin Class UParentSaveGameInstance Function RemoveFromDestroyList
struct Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics
{
	struct ParentSaveGameInstance_eventRemoveFromDestroyList_Parms
	{
		FName name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Detroyable System" },
		{ "ModuleRelativePath", "Public/ParentSaveGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParentSaveGameInstance_eventRemoveFromDestroyList_Parms, name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParentSaveGameInstance_eventRemoveFromDestroyList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParentSaveGameInstance_eventRemoveFromDestroyList_Parms), &Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentSaveGameInstance, nullptr, "RemoveFromDestroyList", nullptr, nullptr, Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::ParentSaveGameInstance_eventRemoveFromDestroyList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::ParentSaveGameInstance_eventRemoveFromDestroyList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParentSaveGameInstance::execRemoveFromDestroyList)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveFromDestroyList(Z_Param_name);
	P_NATIVE_END;
}
// End Class UParentSaveGameInstance Function RemoveFromDestroyList

// Begin Class UParentSaveGameInstance
void UParentSaveGameInstance::StaticRegisterNativesUParentSaveGameInstance()
{
	UClass* Class = UParentSaveGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToDestroyList", &UParentSaveGameInstance::execAddToDestroyList },
		{ "IsOnDestroyList", &UParentSaveGameInstance::execIsOnDestroyList },
		{ "RemoveFromDestroyList", &UParentSaveGameInstance::execRemoveFromDestroyList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsToDestroy_MetaData[] = {
		{ "Category", "Detroyable System" },
		{ "ModuleRelativePath", "Public/ParentSaveGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CachedSlot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectsToDestroy_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectsToDestroy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParentSaveGameInstance_AddToDestroyList, "AddToDestroyList" }, // 156410688
		{ &Z_Construct_UFunction_UParentSaveGameInstance_IsOnDestroyList, "IsOnDestroyList" }, // 3789849861
		{ &Z_Construct_UFunction_UParentSaveGameInstance_RemoveFromDestroyList, "RemoveFromDestroyList" }, // 1342700146
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParentSaveGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParentSaveGameInstance_Statics::NewProp_CachedSlot = { "CachedSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentSaveGameInstance, CachedSlot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSlot_MetaData), NewProp_CachedSlot_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParentSaveGameInstance_Statics::NewProp_ObjectsToDestroy_Inner = { "ObjectsToDestroy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParentSaveGameInstance_Statics::NewProp_ObjectsToDestroy = { "ObjectsToDestroy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentSaveGameInstance, ObjectsToDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectsToDestroy_MetaData), NewProp_ObjectsToDestroy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParentSaveGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentSaveGameInstance_Statics::NewProp_CachedSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentSaveGameInstance_Statics::NewProp_ObjectsToDestroy_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentSaveGameInstance_Statics::NewProp_ObjectsToDestroy,
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
	FuncInfo,
	Z_Construct_UClass_UParentSaveGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParentSaveGameInstance, UParentSaveGameInstance::StaticClass, TEXT("UParentSaveGameInstance"), &Z_Registration_Info_UClass_UParentSaveGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParentSaveGameInstance), 120463624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGameInstance_h_1239086075(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ParentSaveGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
