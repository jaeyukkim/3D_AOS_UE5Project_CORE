// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/Default/EffectActorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayEffect;
#ifdef SENIORPROJECT_EffectActorBase_generated_h
#error "EffectActorBase.generated.h already included, missing '#pragma once' in EffectActorBase.h"
#endif
#define SENIORPROJECT_EffectActorBase_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyEffectToTarget); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEffectActorBase(); \
	friend struct Z_Construct_UClass_AEffectActorBase_Statics; \
public: \
	DECLARE_CLASS(AEffectActorBase, ADamageActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AEffectActorBase)


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEffectActorBase(AEffectActorBase&&); \
	NO_API AEffectActorBase(const AEffectActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEffectActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEffectActorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEffectActorBase) \
	NO_API virtual ~AEffectActorBase();


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_29_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AEffectActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Actor_Default_EffectActorBase_h


#define FOREACH_ENUM_EEFFECTAPPLICATIONPOLICY(op) \
	op(EEffectApplicationPolicy::ApplyOnOverlap) \
	op(EEffectApplicationPolicy::ApplyOnEndOverlap) \
	op(EEffectApplicationPolicy::DoNotApply) 

enum class EEffectApplicationPolicy;
template<> struct TIsUEnumClass<EEffectApplicationPolicy> { enum { Value = true }; };
template<> SENIORPROJECT_API UEnum* StaticEnum<EEffectApplicationPolicy>();

#define FOREACH_ENUM_EEFFECTREMOVALPOLICY(op) \
	op(EEffectRemovalPolicy::RemoveOnEndOverlap) \
	op(EEffectRemovalPolicy::DoNotRemove) 

enum class EEffectRemovalPolicy;
template<> struct TIsUEnumClass<EEffectRemovalPolicy> { enum { Value = true }; };
template<> SENIORPROJECT_API UEnum* StaticEnum<EEffectRemovalPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
