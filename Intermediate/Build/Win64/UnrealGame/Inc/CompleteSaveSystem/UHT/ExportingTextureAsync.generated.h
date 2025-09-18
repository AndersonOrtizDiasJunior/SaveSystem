// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExportingTextureAsync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UExportingTextureAsync;
class UObject;
class UTexture;
#ifdef COMPLETESAVESYSTEM_ExportingTextureAsync_generated_h
#error "ExportingTextureAsync.generated.h already included, missing '#pragma once' in ExportingTextureAsync.h"
#endif
#define COMPLETESAVESYSTEM_ExportingTextureAsync_generated_h

#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_13_DELEGATE \
COMPLETESAVESYSTEM_API void FExportingSuccess_DelegateWrapper(const FMulticastScriptDelegate& ExportingSuccess, const FString& Path);


#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_15_DELEGATE \
COMPLETESAVESYSTEM_API void FExportingFailure_DelegateWrapper(const FMulticastScriptDelegate& ExportingFailure);


#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnComplete); \
	DECLARE_FUNCTION(execExportTextureAsync);


#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExportingTextureAsync(); \
	friend struct Z_Construct_UClass_UExportingTextureAsync_Statics; \
public: \
	DECLARE_CLASS(UExportingTextureAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompleteSaveSystem"), NO_API) \
	DECLARE_SERIALIZER(UExportingTextureAsync)


#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExportingTextureAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExportingTextureAsync(UExportingTextureAsync&&); \
	UExportingTextureAsync(const UExportingTextureAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExportingTextureAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExportingTextureAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExportingTextureAsync) \
	NO_API virtual ~UExportingTextureAsync();


#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_17_PROLOG
#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETESAVESYSTEM_API UClass* StaticClass<class UExportingTextureAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExportingTextureAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
