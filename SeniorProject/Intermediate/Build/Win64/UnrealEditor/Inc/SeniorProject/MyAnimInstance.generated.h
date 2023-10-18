// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_MyAnimInstance_generated_h
#error "MyAnimInstance.generated.h already included, missing '#pragma once' in MyAnimInstance.h"
#endif
#define SENIORPROJECT_MyAnimInstance_generated_h

#define FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_SPARSE_DATA
#define FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDead); \
	DECLARE_FUNCTION(execAnimNotify_Ability_R_Cooldown); \
	DECLARE_FUNCTION(execAnimNotify_Attack_R); \
	DECLARE_FUNCTION(execAnimNotify_MoveToSword); \
	DECLARE_FUNCTION(execAnimNotify_Ability_RMB_Cooldown); \
	DECLARE_FUNCTION(execAnimNotify_Attack_RMB_NoWep); \
	DECLARE_FUNCTION(execAnimNotify_Attack_RMB); \
	DECLARE_FUNCTION(execAnimNotify_Attack_Q); \
	DECLARE_FUNCTION(execAnimNotify_Ability_Q_Cooldown); \
	DECLARE_FUNCTION(execAnimNotify_UnHideKwangSword); \
	DECLARE_FUNCTION(execAnimNotify_HideKwangSword); \
	DECLARE_FUNCTION(execAnimNotify_UnHideSword); \
	DECLARE_FUNCTION(execAnimNotify_HideSword); \
	DECLARE_FUNCTION(execAnimNotify_FootStep); \
	DECLARE_FUNCTION(execAnimNotify_CanMove); \
	DECLARE_FUNCTION(execAnimNotify_StopMove); \
	DECLARE_FUNCTION(execAnimNotify_CastingOff); \
	DECLARE_FUNCTION(execAnimNotify_CastingOn); \
	DECLARE_FUNCTION(execAnimNotify_CanNotAttack); \
	DECLARE_FUNCTION(execAnimNotify_CanAttack); \
	DECLARE_FUNCTION(execAnimNotify_RunStop); \
	DECLARE_FUNCTION(execAnimNotify_ResetCombo); \
	DECLARE_FUNCTION(execAnimNotify_SaveAttack);


#define FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDead); \
	DECLARE_FUNCTION(execAnimNotify_Ability_R_Cooldown); \
	DECLARE_FUNCTION(execAnimNotify_Attack_R); \
	DECLARE_FUNCTION(execAnimNotify_MoveToSword); \
	DECLARE_FUNCTION(execAnimNotify_Ability_RMB_Cooldown); \
	DECLARE_FUNCTION(execAnimNotify_Attack_RMB_NoWep); \
	DECLARE_FUNCTION(execAnimNotify_Attack_RMB); \
	DECLARE_FUNCTION(execAnimNotify_Attack_Q); \
	DECLARE_FUNCTION(execAnimNotify_Ability_Q_Cooldown); \
	DECLARE_FUNCTION(execAnimNotify_UnHideKwangSword); \
	DECLARE_FUNCTION(execAnimNotify_HideKwangSword); \
	DECLARE_FUNCTION(execAnimNotify_UnHideSword); \
	DECLARE_FUNCTION(execAnimNotify_HideSword); \
	DECLARE_FUNCTION(execAnimNotify_FootStep); \
	DECLARE_FUNCTION(execAnimNotify_CanMove); \
	DECLARE_FUNCTION(execAnimNotify_StopMove); \
	DECLARE_FUNCTION(execAnimNotify_CastingOff); \
	DECLARE_FUNCTION(execAnimNotify_CastingOn); \
	DECLARE_FUNCTION(execAnimNotify_CanNotAttack); \
	DECLARE_FUNCTION(execAnimNotify_CanAttack); \
	DECLARE_FUNCTION(execAnimNotify_RunStop); \
	DECLARE_FUNCTION(execAnimNotify_ResetCombo); \
	DECLARE_FUNCTION(execAnimNotify_SaveAttack);


#define FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAnimInstance(); \
	friend struct Z_Construct_UClass_UMyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UMyAnimInstance)


#define FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMyAnimInstance(); \
	friend struct Z_Construct_UClass_UMyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UMyAnimInstance)


#define FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAnimInstance(UMyAnimInstance&&); \
	NO_API UMyAnimInstance(const UMyAnimInstance&); \
public:


#define FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAnimInstance(UMyAnimInstance&&); \
	NO_API UMyAnimInstance(const UMyAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyAnimInstance)


#define FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_16_PROLOG
#define FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_RPC_WRAPPERS \
	FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_INCLASS \
	FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UMyAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_Source_SeniorProject_Player_MyAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
