// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_MinionAnimInstance_generated_h
#error "MinionAnimInstance.generated.h already included, missing '#pragma once' in MinionAnimInstance.h"
#endif
#define SENIORPROJECT_MinionAnimInstance_generated_h

#define FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_SPARSE_DATA
#define FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDead); \
	DECLARE_FUNCTION(execAnimNotify_LeftAttack); \
	DECLARE_FUNCTION(execAnimNotify_RightAttack); \
	DECLARE_FUNCTION(execAnimNotify_RunStop); \
	DECLARE_FUNCTION(execAnimNotify_ResetCombo); \
	DECLARE_FUNCTION(execAnimNotify_SaveAttack);


#define FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDead); \
	DECLARE_FUNCTION(execAnimNotify_LeftAttack); \
	DECLARE_FUNCTION(execAnimNotify_RightAttack); \
	DECLARE_FUNCTION(execAnimNotify_RunStop); \
	DECLARE_FUNCTION(execAnimNotify_ResetCombo); \
	DECLARE_FUNCTION(execAnimNotify_SaveAttack);


#define FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMinionAnimInstance(); \
	friend struct Z_Construct_UClass_UMinionAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMinionAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UMinionAnimInstance)


#define FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMinionAnimInstance(); \
	friend struct Z_Construct_UClass_UMinionAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMinionAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UMinionAnimInstance)


#define FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMinionAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMinionAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMinionAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinionAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMinionAnimInstance(UMinionAnimInstance&&); \
	NO_API UMinionAnimInstance(const UMinionAnimInstance&); \
public:


#define FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMinionAnimInstance(UMinionAnimInstance&&); \
	NO_API UMinionAnimInstance(const UMinionAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMinionAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinionAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMinionAnimInstance)


#define FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_13_PROLOG
#define FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_RPC_WRAPPERS \
	FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_INCLASS \
	FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UMinionAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_Source_SeniorProject_AIMinions_MinionAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
