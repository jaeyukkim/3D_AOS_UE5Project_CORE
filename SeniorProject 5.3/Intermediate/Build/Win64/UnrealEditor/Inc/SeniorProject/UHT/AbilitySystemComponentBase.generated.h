// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilitySystemComponentBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpec;
#ifdef SENIORPROJECT_AbilitySystemComponentBase_generated_h
#error "AbilitySystemComponentBase.generated.h already included, missing '#pragma once' in AbilitySystemComponentBase.h"
#endif
#define SENIORPROJECT_AbilitySystemComponentBase_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_10_DELEGATE \
SENIORPROJECT_API void FOnAttackEndSignatures_DelegateWrapper(const FMulticastScriptDelegate& OnAttackEndSignatures);


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BroadCastAttackEnd_Implementation(); \
	virtual void ClientEffectApplied_Implementation(UAbilitySystemComponent* AbilitySystemComponent, FGameplayEffectSpec const& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle); \
 \
	DECLARE_FUNCTION(execBroadCastAttackEnd); \
	DECLARE_FUNCTION(execClientEffectApplied);


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_CALLBACK_WRAPPERS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySystemComponentBase(); \
	friend struct Z_Construct_UClass_UAbilitySystemComponentBase_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemComponentBase, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemComponentBase)


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemComponentBase(UAbilitySystemComponentBase&&); \
	NO_API UAbilitySystemComponentBase(const UAbilitySystemComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemComponentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemComponentBase) \
	NO_API virtual ~UAbilitySystemComponentBase();


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_14_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_CALLBACK_WRAPPERS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UAbilitySystemComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_AbilitySystemComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
