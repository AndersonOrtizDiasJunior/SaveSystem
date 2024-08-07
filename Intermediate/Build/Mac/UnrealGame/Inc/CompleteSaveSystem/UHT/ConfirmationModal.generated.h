// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConfirmationModal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPLETESAVESYSTEM_ConfirmationModal_generated_h
#error "ConfirmationModal.generated.h already included, missing '#pragma once' in ConfirmationModal.h"
#endif
#define COMPLETESAVESYSTEM_ConfirmationModal_generated_h

#define FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_14_DELEGATE \
static void FActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActionDelegate, int32 Index);


#define FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnClickYes); \
	DECLARE_FUNCTION(execSetParameters);


#define FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConfirmationModal(); \
	friend struct Z_Construct_UClass_UConfirmationModal_Statics; \
public: \
	DECLARE_CLASS(UConfirmationModal, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompleteSaveSystem"), NO_API) \
	DECLARE_SERIALIZER(UConfirmationModal)


#define FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConfirmationModal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConfirmationModal(UConfirmationModal&&); \
	UConfirmationModal(const UConfirmationModal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConfirmationModal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConfirmationModal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConfirmationModal) \
	NO_API virtual ~UConfirmationModal();


#define FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_8_PROLOG
#define FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_11_INCLASS_NO_PURE_DECLS \
	FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETESAVESYSTEM_API UClass* StaticClass<class UConfirmationModal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_andersondj_Anderson_TCC_savesystemplugin_SaveSystem_Plugins_CompleteSaveSystem_Source_CompleteSaveSystem_Public_ConfirmationModal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
