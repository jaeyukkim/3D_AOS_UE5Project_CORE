// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/ProjectileBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SENIORPROJECT_ProjectileBase_generated_h
#error "ProjectileBase.generated.h already included, missing '#pragma once' in ProjectileBase.h"
#endif
#define SENIORPROJECT_ProjectileBase_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCapsuleOverlap);


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, ADamageActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileBase) \
	NO_API virtual ~AProjectileBase();


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_13_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Actor_ProjectileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
