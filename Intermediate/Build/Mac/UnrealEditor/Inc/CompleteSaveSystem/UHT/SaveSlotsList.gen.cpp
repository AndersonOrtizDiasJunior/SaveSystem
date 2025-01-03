// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/SaveSlotsList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSlotsList() {}

// Begin Cross Module References
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_USaveSlotItem_NoRegister();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_USaveSlotsList();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_USaveSlotsList_NoRegister();
UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin Class USaveSlotsList Function DeleteButtonAction
struct SaveSlotsList_eventDeleteButtonAction_Parms
{
	int32 Index;
};
static FName NAME_USaveSlotsList_DeleteButtonAction = FName(TEXT("DeleteButtonAction"));
void USaveSlotsList::DeleteButtonAction(int32 Index)
{
	SaveSlotsList_eventDeleteButtonAction_Parms Parms;
	Parms.Index=Index;
	ProcessEvent(FindFunctionChecked(NAME_USaveSlotsList_DeleteButtonAction),&Parms);
}
struct Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slots" },
		{ "ModuleRelativePath", "Public/SaveSlotsList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSlotsList_eventDeleteButtonAction_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSlotsList, nullptr, "DeleteButtonAction", nullptr, nullptr, Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction_Statics::PropPointers), sizeof(SaveSlotsList_eventDeleteButtonAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveSlotsList_eventDeleteButtonAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USaveSlotsList Function DeleteButtonAction

// Begin Class USaveSlotsList Function GetNewSlotData
struct SaveSlotsList_eventGetNewSlotData_Parms
{
	USaveSlotItem* ReturnValue;

	/** Constructor, initializes return property only **/
	SaveSlotsList_eventGetNewSlotData_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_USaveSlotsList_GetNewSlotData = FName(TEXT("GetNewSlotData"));
USaveSlotItem* USaveSlotsList::GetNewSlotData()
{
	SaveSlotsList_eventGetNewSlotData_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_USaveSlotsList_GetNewSlotData),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USaveSlotsList_GetNewSlotData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slots" },
		{ "ModuleRelativePath", "Public/SaveSlotsList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveSlotsList_GetNewSlotData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSlotsList_eventGetNewSlotData_Parms, ReturnValue), Z_Construct_UClass_USaveSlotItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveSlotsList_GetNewSlotData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotsList_GetNewSlotData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotsList_GetNewSlotData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSlotsList_GetNewSlotData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSlotsList, nullptr, "GetNewSlotData", nullptr, nullptr, Z_Construct_UFunction_USaveSlotsList_GetNewSlotData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotsList_GetNewSlotData_Statics::PropPointers), sizeof(SaveSlotsList_eventGetNewSlotData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotsList_GetNewSlotData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSlotsList_GetNewSlotData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveSlotsList_eventGetNewSlotData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSlotsList_GetNewSlotData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSlotsList_GetNewSlotData_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USaveSlotsList Function GetNewSlotData

// Begin Class USaveSlotsList Function MainButtonAction
struct SaveSlotsList_eventMainButtonAction_Parms
{
	int32 Index;
};
static FName NAME_USaveSlotsList_MainButtonAction = FName(TEXT("MainButtonAction"));
void USaveSlotsList::MainButtonAction(int32 Index)
{
	SaveSlotsList_eventMainButtonAction_Parms Parms;
	Parms.Index=Index;
	ProcessEvent(FindFunctionChecked(NAME_USaveSlotsList_MainButtonAction),&Parms);
}
struct Z_Construct_UFunction_USaveSlotsList_MainButtonAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slots" },
		{ "ModuleRelativePath", "Public/SaveSlotsList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveSlotsList_MainButtonAction_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSlotsList_eventMainButtonAction_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveSlotsList_MainButtonAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotsList_MainButtonAction_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotsList_MainButtonAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSlotsList_MainButtonAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSlotsList, nullptr, "MainButtonAction", nullptr, nullptr, Z_Construct_UFunction_USaveSlotsList_MainButtonAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotsList_MainButtonAction_Statics::PropPointers), sizeof(SaveSlotsList_eventMainButtonAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotsList_MainButtonAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSlotsList_MainButtonAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveSlotsList_eventMainButtonAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSlotsList_MainButtonAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSlotsList_MainButtonAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USaveSlotsList Function MainButtonAction

// Begin Class USaveSlotsList Function UpdateSlotList
struct Z_Construct_UFunction_USaveSlotsList_UpdateSlotList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Slots" },
		{ "ModuleRelativePath", "Public/SaveSlotsList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSlotsList_UpdateSlotList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSlotsList, nullptr, "UpdateSlotList", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotsList_UpdateSlotList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSlotsList_UpdateSlotList_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USaveSlotsList_UpdateSlotList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSlotsList_UpdateSlotList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveSlotsList::execUpdateSlotList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSlotList();
	P_NATIVE_END;
}
// End Class USaveSlotsList Function UpdateSlotList

// Begin Class USaveSlotsList
void USaveSlotsList::StaticRegisterNativesUSaveSlotsList()
{
	UClass* Class = USaveSlotsList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateSlotList", &USaveSlotsList::execUpdateSlotList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveSlotsList);
UClass* Z_Construct_UClass_USaveSlotsList_NoRegister()
{
	return USaveSlotsList::StaticClass();
}
struct Z_Construct_UClass_USaveSlotsList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveSlotsList.h" },
		{ "ModuleRelativePath", "Public/SaveSlotsList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotListView_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Slots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotsList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[] = {
		{ "Category", "Slots" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/SaveSlotsList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadGame_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/SaveSlotsList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotListView;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
	static void NewProp_bIsLoadGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveSlotsList_DeleteButtonAction, "DeleteButtonAction" }, // 250154491
		{ &Z_Construct_UFunction_USaveSlotsList_GetNewSlotData, "GetNewSlotData" }, // 728667429
		{ &Z_Construct_UFunction_USaveSlotsList_MainButtonAction, "MainButtonAction" }, // 3340501321
		{ &Z_Construct_UFunction_USaveSlotsList_UpdateSlotList, "UpdateSlotList" }, // 238259005
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSlotsList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotsList_Statics::NewProp_SlotListView = { "SlotListView", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotsList, SlotListView), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotListView_MetaData), NewProp_SlotListView_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotsList_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USaveSlotItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveSlotsList_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0021080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotsList, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slots_MetaData), NewProp_Slots_MetaData) };
void Z_Construct_UClass_USaveSlotsList_Statics::NewProp_bIsLoadGame_SetBit(void* Obj)
{
	((USaveSlotsList*)Obj)->bIsLoadGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveSlotsList_Statics::NewProp_bIsLoadGame = { "bIsLoadGame", nullptr, (EPropertyFlags)0x0021080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USaveSlotsList), &Z_Construct_UClass_USaveSlotsList_Statics::NewProp_bIsLoadGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadGame_MetaData), NewProp_bIsLoadGame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSlotsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotsList_Statics::NewProp_SlotListView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotsList_Statics::NewProp_Slots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotsList_Statics::NewProp_Slots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotsList_Statics::NewProp_bIsLoadGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotsList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveSlotsList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotsList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSlotsList_Statics::ClassParams = {
	&USaveSlotsList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USaveSlotsList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotsList_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotsList_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveSlotsList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveSlotsList()
{
	if (!Z_Registration_Info_UClass_USaveSlotsList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSlotsList.OuterSingleton, Z_Construct_UClass_USaveSlotsList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveSlotsList.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UClass* StaticClass<USaveSlotsList>()
{
	return USaveSlotsList::StaticClass();
}
USaveSlotsList::USaveSlotsList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSlotsList);
USaveSlotsList::~USaveSlotsList() {}
// End Class USaveSlotsList

// Begin Registration
struct Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotsList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveSlotsList, USaveSlotsList::StaticClass, TEXT("USaveSlotsList"), &Z_Registration_Info_UClass_USaveSlotsList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSlotsList), 3704877169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotsList_h_1626721728(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotsList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_andersondj_Library_CloudStorage_OneDrive_Pessoal_GameDev_Plugin_pluginproject_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_SaveSlotsList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
