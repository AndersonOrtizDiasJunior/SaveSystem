// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteSaveSystem/Public/TextureSavingFunctionLibrary.h"
#include "CompleteSaveSystem/Public/SaveTextureData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureSavingFunctionLibrary() {}

// Begin Cross Module References
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UTextureSavingFunctionLibrary();
COMPLETESAVESYSTEM_API UClass* Z_Construct_UClass_UTextureSavingFunctionLibrary_NoRegister();
COMPLETESAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature();
COMPLETESAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveTextureData();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_CompleteSaveSystem();
// End Cross Module References

// Begin Delegate FOnTextureCreated
struct Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics
{
	struct _Script_CompleteSaveSystem_eventOnTextureCreated_Parms
	{
		UTexture2D* NewTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/TextureSavingFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CompleteSaveSystem_eventOnTextureCreated_Parms, NewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::NewProp_NewTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CompleteSaveSystem, nullptr, "OnTextureCreated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::_Script_CompleteSaveSystem_eventOnTextureCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::_Script_CompleteSaveSystem_eventOnTextureCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTextureCreated_DelegateWrapper(const FScriptDelegate& OnTextureCreated, UTexture2D* NewTexture)
{
	struct _Script_CompleteSaveSystem_eventOnTextureCreated_Parms
	{
		UTexture2D* NewTexture;
	};
	_Script_CompleteSaveSystem_eventOnTextureCreated_Parms Parms;
	Parms.NewTexture=NewTexture;
	OnTextureCreated.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnTextureCreated

// Begin Class UTextureSavingFunctionLibrary Function CreateTextureFromSaveData
struct Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics
{
	struct TextureSavingFunctionLibrary_eventCreateTextureFromSaveData_Parms
	{
		FSaveTextureData TextureData;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Texture Saving" },
		{ "ModuleRelativePath", "Public/TextureSavingFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::NewProp_TextureData = { "TextureData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureSavingFunctionLibrary_eventCreateTextureFromSaveData_Parms, TextureData), Z_Construct_UScriptStruct_FSaveTextureData, METADATA_PARAMS(0, nullptr) }; // 157386760
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureSavingFunctionLibrary_eventCreateTextureFromSaveData_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::NewProp_TextureData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureSavingFunctionLibrary, nullptr, "CreateTextureFromSaveData", nullptr, nullptr, Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::TextureSavingFunctionLibrary_eventCreateTextureFromSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::TextureSavingFunctionLibrary_eventCreateTextureFromSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextureSavingFunctionLibrary::execCreateTextureFromSaveData)
{
	P_GET_STRUCT(FSaveTextureData,Z_Param_TextureData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UTextureSavingFunctionLibrary::CreateTextureFromSaveData(Z_Param_TextureData);
	P_NATIVE_END;
}
// End Class UTextureSavingFunctionLibrary Function CreateTextureFromSaveData

// Begin Class UTextureSavingFunctionLibrary Function GetTextureSaveData
struct Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics
{
	struct TextureSavingFunctionLibrary_eventGetTextureSaveData_Parms
	{
		UTexture2D* Texture;
		FSaveTextureData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Texture Saving" },
		{ "ModuleRelativePath", "Public/TextureSavingFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureSavingFunctionLibrary_eventGetTextureSaveData_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureSavingFunctionLibrary_eventGetTextureSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSaveTextureData, METADATA_PARAMS(0, nullptr) }; // 157386760
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureSavingFunctionLibrary, nullptr, "GetTextureSaveData", nullptr, nullptr, Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::TextureSavingFunctionLibrary_eventGetTextureSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::TextureSavingFunctionLibrary_eventGetTextureSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextureSavingFunctionLibrary::execGetTextureSaveData)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSaveTextureData*)Z_Param__Result=UTextureSavingFunctionLibrary::GetTextureSaveData(Z_Param_Texture);
	P_NATIVE_END;
}
// End Class UTextureSavingFunctionLibrary Function GetTextureSaveData

// Begin Class UTextureSavingFunctionLibrary Function RenderTargetToTexture2D
struct Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics
{
	struct TextureSavingFunctionLibrary_eventRenderTargetToTexture2D_Parms
	{
		UTextureRenderTarget2D* RenderTarget;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Texture Saving" },
		{ "ModuleRelativePath", "Public/TextureSavingFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureSavingFunctionLibrary_eventRenderTargetToTexture2D_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureSavingFunctionLibrary_eventRenderTargetToTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureSavingFunctionLibrary, nullptr, "RenderTargetToTexture2D", nullptr, nullptr, Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::TextureSavingFunctionLibrary_eventRenderTargetToTexture2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::TextureSavingFunctionLibrary_eventRenderTargetToTexture2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextureSavingFunctionLibrary::execRenderTargetToTexture2D)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UTextureSavingFunctionLibrary::RenderTargetToTexture2D(Z_Param_RenderTarget);
	P_NATIVE_END;
}
// End Class UTextureSavingFunctionLibrary Function RenderTargetToTexture2D

// Begin Class UTextureSavingFunctionLibrary Function RenderTargetToTexture2D_Async
struct Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics
{
	struct TextureSavingFunctionLibrary_eventRenderTargetToTexture2D_Async_Parms
	{
		UTextureRenderTarget2D* RenderTarget;
		FScriptDelegate OnCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Texture Saving" },
		{ "ModuleRelativePath", "Public/TextureSavingFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureSavingFunctionLibrary_eventRenderTargetToTexture2D_Async_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureSavingFunctionLibrary_eventRenderTargetToTexture2D_Async_Parms, OnCompleted), Z_Construct_UDelegateFunction_CompleteSaveSystem_OnTextureCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 2931568858
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::NewProp_OnCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureSavingFunctionLibrary, nullptr, "RenderTargetToTexture2D_Async", nullptr, nullptr, Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::TextureSavingFunctionLibrary_eventRenderTargetToTexture2D_Async_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::TextureSavingFunctionLibrary_eventRenderTargetToTexture2D_Async_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextureSavingFunctionLibrary::execRenderTargetToTexture2D_Async)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTextureSavingFunctionLibrary::RenderTargetToTexture2D_Async(Z_Param_RenderTarget,FOnTextureCreated(Z_Param_Out_OnCompleted));
	P_NATIVE_END;
}
// End Class UTextureSavingFunctionLibrary Function RenderTargetToTexture2D_Async

// Begin Class UTextureSavingFunctionLibrary
void UTextureSavingFunctionLibrary::StaticRegisterNativesUTextureSavingFunctionLibrary()
{
	UClass* Class = UTextureSavingFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateTextureFromSaveData", &UTextureSavingFunctionLibrary::execCreateTextureFromSaveData },
		{ "GetTextureSaveData", &UTextureSavingFunctionLibrary::execGetTextureSaveData },
		{ "RenderTargetToTexture2D", &UTextureSavingFunctionLibrary::execRenderTargetToTexture2D },
		{ "RenderTargetToTexture2D_Async", &UTextureSavingFunctionLibrary::execRenderTargetToTexture2D_Async },
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
		{ "IncludePath", "TextureSavingFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/TextureSavingFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextureSavingFunctionLibrary_CreateTextureFromSaveData, "CreateTextureFromSaveData" }, // 2628493942
		{ &Z_Construct_UFunction_UTextureSavingFunctionLibrary_GetTextureSaveData, "GetTextureSaveData" }, // 4162838625
		{ &Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D, "RenderTargetToTexture2D" }, // 2194971066
		{ &Z_Construct_UFunction_UTextureSavingFunctionLibrary_RenderTargetToTexture2D_Async, "RenderTargetToTexture2D_Async" }, // 599690080
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
		{ Z_Construct_UClass_UTextureSavingFunctionLibrary, UTextureSavingFunctionLibrary::StaticClass, TEXT("UTextureSavingFunctionLibrary"), &Z_Registration_Info_UClass_UTextureSavingFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureSavingFunctionLibrary), 254010827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_3127811990(TEXT("/Script/CompleteSaveSystem"),
	Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
