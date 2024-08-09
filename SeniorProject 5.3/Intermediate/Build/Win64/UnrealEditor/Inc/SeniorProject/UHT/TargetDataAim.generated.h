// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilityTask/TargetDataAim.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UTargetDataAim;
struct FGameplayAbilityTargetDataHandle;
#ifdef SENIORPROJECT_TargetDataAim_generated_h
#error "TargetDataAim.generated.h already included, missing '#pragma once' in TargetDataAim.h"
#endif
#define SENIORPROJECT_TargetDataAim_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_9_DELEGATE \
SENIORPROJECT_API void FAimTargetDataSignature_DelegateWrapper(const FMulticastScriptDelegate& AimTargetDataSignature, FGameplayAbilityTargetDataHandle const& DataHandle);


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateTargetDataAim);


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetDataAim(); \
	friend struct Z_Construct_UClass_UTargetDataAim_Statics; \
public: \
	DECLARE_CLASS(UTargetDataAim, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UTargetDataAim)


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetDataAim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetDataAim(UTargetDataAim&&); \
	NO_API UTargetDataAim(const UTargetDataAim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetDataAim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetDataAim); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetDataAim) \
	NO_API virtual ~UTargetDataAim();


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_13_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UTargetDataAim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilityTask_TargetDataAim_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
