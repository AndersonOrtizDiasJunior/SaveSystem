// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtendedCommonActivatableWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDataTableRowHandle;
struct FInputActionBindingHandle;
#ifdef COMPLETESAVESYSTEM_ExtendedCommonActivatableWidget_generated_h
#error "ExtendedCommonActivatableWidget.generated.h already included, missing '#pragma once' in ExtendedCommonActivatableWidget.h"
#endif
#define COMPLETESAVESYSTEM_ExtendedCommonActivatableWidget_generated_h

#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_7_DELEGATE \
COMPLETESAVESYSTEM_API void FInputActionExecutedDelegate_DelegateWrapper(const FScriptDelegate& InputActionExecutedDelegate, FName ActionName);


#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics; \
	COMPLETESAVESYSTEM_API static class UScriptStruct* StaticStruct();


template<> COMPLETESAVESYSTEM_API UScriptStruct* StaticStruct<struct FInputActionBindingHandle>();

#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterAllBindings); \
	DECLARE_FUNCTION(execUnregisterBinding); \
	DECLARE_FUNCTION(execRegisterBinding);


#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExtendedCommonActivatableWidget(); \
	friend struct Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(UExtendedCommonActivatableWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompleteSaveSystem"), NO_API) \
	DECLARE_SERIALIZER(UExtendedCommonActivatableWidget)


#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExtendedCommonActivatableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExtendedCommonActivatableWidget(UExtendedCommonActivatableWidget&&); \
	UExtendedCommonActivatableWidget(const UExtendedCommonActivatableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExtendedCommonActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExtendedCommonActivatableWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExtendedCommonActivatableWidget) \
	NO_API virtual ~UExtendedCommonActivatableWidget();


#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_21_PROLOG
#define FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETESAVESYSTEM_API UClass* StaticClass<class UExtendedCommonActivatableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_andersondj_Documents_Unreal_Projects_pluginRefactor_Plugins_SaveSystem_Source_CompleteSaveSystem_Public_ExtendedCommonActivatableWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
