// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/Projectile/HomingProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SENIORPROJECT_HomingProjectile_generated_h
#error "HomingProjectile.generated.h already included, missing '#pragma once' in HomingProjectile.h"
#endif
#define SENIORPROJECT_HomingProjectile_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastUpdateProjectileTransform_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastUpdateProjectileTransform); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_CALLBACK_WRAPPERS
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHomingProjectile(); \
	friend struct Z_Construct_UClass_AHomingProjectile_Statics; \
public: \
	DECLARE_CLASS(AHomingProjectile, ADamageActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AHomingProjectile) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TargetLocation=NETFIELD_REP_START, \
		TargetDirection, \
		TargetRotator, \
		NETFIELD_REP_END=TargetRotator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHomingProjectile(AHomingProjectile&&); \
	NO_API AHomingProjectile(const AHomingProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHomingProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHomingProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHomingProjectile) \
	NO_API virtual ~AHomingProjectile();


#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_15_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_CALLBACK_WRAPPERS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AHomingProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Actor_Projectile_HomingProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
