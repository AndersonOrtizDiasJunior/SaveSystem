// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/TextureSavingFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureSavingFunctionLibrary() {}

// Begin Cross Module References
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UTextureSavingFunctionLibrary();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UTextureSavingFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin Class UTextureSavingFunctionLibrary Function DeleteFile
struct Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics
{
	struct TextureSavingFunctionLibrary_eventDeleteFile_Parms
	{
		FString FullPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "File Deleting" },
		{ "ModuleRelativePath", "Public/TextureSavingFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FullPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::NewProp_FullPath = { "FullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureSavingFunctionLibrary_eventDeleteFile_Parms, FullPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullPath_MetaData), NewProp_FullPath_MetaData) };
void Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TextureSavingFunctionLibrary_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TextureSavingFunctionLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::NewProp_FullPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureSavingFunctionLibrary, nullptr, "DeleteFile", nullptr, nullptr, Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::TextureSavingFunctionLibrary_eventDeleteFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::TextureSavingFunctionLibrary_eventDeleteFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextureSavingFunctionLibrary::execDeleteFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FullPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTextureSavingFunctionLibrary::DeleteFile(Z_Param_FullPath);
	P_NATIVE_END;
}
// End Class UTextureSavingFunctionLibrary Function DeleteFile

// Begin Class UTextureSavingFunctionLibrary
void UTextureSavingFunctionLibrary::StaticRegisterNativesUTextureSavingFunctionLibrary()
{
	UClass* Class = UTextureSavingFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteFile", &UTextureSavingFunctionLibrary::execDeleteFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureSavingFunctionLibrary);
UClass* Z_Construct_UClass_UTextureSavingFunctionLibrary_NoRegister()
{
	return UTextureSavingFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UTextureSavingFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TextureSavingFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/TextureSavingFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextureSavingFunctionLibrary_DeleteFile, "DeleteFile" }, // 1258058328
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureSavingFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTextureSavingFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CompleteSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureSavingFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureSavingFunctionLibrary_Statics::ClassParams = {
	&UTextureSavingFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureSavingFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureSavingFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureSavingFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UTextureSavingFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureSavingFunctionLibrary.OuterSingleton, Z_Construct_UClass_UTextureSavingFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureSavingFunctionLibrary.OuterSingleton;
}
template<> COMPLETESAVESYSTEM_API UClass* StaticClass<UTextureSavingFunctionLibrary>()
{
	return UTextureSavingFunctionLibrary::StaticClass();
}
UTextureSavingFunctionLibrary::UTextureSavingFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureSavingFunctionLibrary);
UTextureSavingFunctionLibrary::~UTextureSavingFunctionLibrary() {}
// End Class UTextureSavingFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureSavingFunctionLibrary, UTextureSavingFunctionLibrary::StaticClass, TEXT("UTextureSavingFunctionLibrary"), &Z_Registration_Info_UClass_UTextureSavingFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureSavingFunctionLibrary), 1112963618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_3441307451(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
