// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/ProjectileSpellBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayTag;
#ifdef SENIORPROJECT_ProjectileSpellBase_generated_h
#error "ProjectileSpellBase.generated.h already included, missing '#pragma once' in ProjectileSpellBase.h"
#endif
#define SENIORPROJECT_ProjectileSpellBase_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnHomingProjectile); \
	DECLARE_FUNCTION(execSpawnProjectile); \
	DECLARE_FUNCTION(execSpawnMeteor);


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectileSpellBase(); \
	friend struct Z_Construct_UClass_UProjectileSpellBase_Statics; \
public: \
	DECLARE_CLASS(UProjectileSpellBase, UDamageGameplayAbilityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UProjectileSpellBase)


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectileSpellBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectileSpellBase(UProjectileSpellBase&&); \
	NO_API UProjectileSpellBase(const UProjectileSpellBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileSpellBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileSpellBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectileSpellBase) \
	NO_API virtual ~UProjectileSpellBase();


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_15_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UProjectileSpellBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Abilities_ProjectileSpellBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
