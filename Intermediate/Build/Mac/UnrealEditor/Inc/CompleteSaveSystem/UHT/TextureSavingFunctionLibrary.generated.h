// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureSavingFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UTextureRenderTarget2D;
struct FSaveTextureData;
#ifdef COMPLETESAVESYSTEM_TextureSavingFunctionLibrary_generated_h
#error "TextureSavingFunctionLibrary.generated.h already included, missing '#pragma once' in TextureSavingFunctionLibrary.h"
#endif
#define COMPLETESAVESYSTEM_TextureSavingFunctionLibrary_generated_h

#define FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRenderTargetToTexture2D); \
	DECLARE_FUNCTION(execCreateTextureFromSaveData); \
	DECLARE_FUNCTION(execGetTextureSaveData);


#define FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureSavingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UTextureSavingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UTextureSavingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompleteSaveSystem"), NO_API) \
	DECLARE_SERIALIZER(UTextureSavingFunctionLibrary)


#define FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureSavingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureSavingFunctionLibrary(UTextureSavingFunctionLibrary&&); \
	UTextureSavingFunctionLibrary(const UTextureSavingFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureSavingFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureSavingFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureSavingFunctionLibrary) \
	NO_API virtual ~UTextureSavingFunctionLibrary();


#define FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_12_PROLOG
#define FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETESAVESYSTEM_API UClass* StaticClass<class UTextureSavingFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_TextureSavingFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
