// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SpellMenu/SpellMenuWidgetController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAbilityInfoBase;
struct FGameplayTag;
#ifdef SENIORPROJECT_SpellMenuWidgetController_generated_h
#error "SpellMenuWidgetController.generated.h already included, missing '#pragma once' in SpellMenuWidgetController.h"
#endif
#define SENIORPROJECT_SpellMenuWidgetController_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_15_DELEGATE \
SENIORPROJECT_API void FOnSpellPointChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSpellPointChangedDelegate, int32 NewSpellPoint);


#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_16_DELEGATE \
SENIORPROJECT_API void FAbilityLevelChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AbilityLevelChangedDelegate, FGameplayTag AbilityTag, int32 NewAbilityLevel);


#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_17_DELEGATE \
SENIORPROJECT_API void FAbilityInfoDelegate_DelegateWrapper(const FMulticastScriptDelegate& AbilityInfoDelegate, FAbilityInfoBase const& Info);


#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanUpgradeSpell); \
	DECLARE_FUNCTION(execUpgradeSpell); \
	DECLARE_FUNCTION(execBroadcastInitialValues);


#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpellMenuWidgetController(); \
	friend struct Z_Construct_UClass_USpellMenuWidgetController_Statics; \
public: \
	DECLARE_CLASS(USpellMenuWidgetController, UDefaultWidgetController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(USpellMenuWidgetController)


#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpellMenuWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpellMenuWidgetController(USpellMenuWidgetController&&); \
	NO_API USpellMenuWidgetController(const USpellMenuWidgetController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpellMenuWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpellMenuWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpellMenuWidgetController) \
	NO_API virtual ~USpellMenuWidgetController();


#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_22_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class USpellMenuWidgetController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_UI_SpellMenu_SpellMenuWidgetController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
