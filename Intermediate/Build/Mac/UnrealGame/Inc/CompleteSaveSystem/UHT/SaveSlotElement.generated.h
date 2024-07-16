// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveSlotElement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPLETESAVESYSTEM_SaveSlotElement_generated_h
#error "SaveSlotElement.generated.h already included, missing '#pragma once' in SaveSlotElement.h"
#endif
#define COMPLETESAVESYSTEM_SaveSlotElement_generated_h

#define FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCallMainAction); \
	DECLARE_FUNCTION(execCallOnDelete);


#define FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveSlotElement(); \
	friend struct Z_Construct_UClass_USaveSlotElement_Statics; \
public: \
	DECLARE_CLASS(USaveSlotElement, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompleteSaveSystem"), NO_API) \
	DECLARE_SERIALIZER(USaveSlotElement) \
	virtual UObject* _getUObject() const override { return const_cast<USaveSlotElement*>(this); }


#define FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveSlotElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaveSlotElement(USaveSlotElement&&); \
	USaveSlotElement(const USaveSlotElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveSlotElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveSlotElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveSlotElement) \
	NO_API virtual ~USaveSlotElement();


#define FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_13_PROLOG
#define FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_16_INCLASS_NO_PURE_DECLS \
	FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETESAVESYSTEM_API UClass* StaticClass<class USaveSlotElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_andersondj_Anderson_BYUI_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_SaveSlotElement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
