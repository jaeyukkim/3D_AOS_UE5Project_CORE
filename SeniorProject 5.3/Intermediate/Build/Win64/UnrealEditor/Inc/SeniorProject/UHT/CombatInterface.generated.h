// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/CombatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimationAsset;
class UAnimMontage;
struct FGameplayTag;
#ifdef SENIORPROJECT_CombatInterface_generated_h
#error "CombatInterface.generated.h already included, missing '#pragma once' in CombatInterface.h"
#endif
#define SENIORPROJECT_CombatInterface_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetIsAttacking_Implementation(bool bIsAttacking) {}; \
	virtual bool IsAttacking_Implementation() { return false; }; \
	virtual AActor* GetAvatar_Implementation() { return NULL; }; \
	virtual bool IsDead_Implementation() const { return false; }; \
	virtual UAnimationAsset* GetDieAnimationAsset_Implementation() { return NULL; }; \
	virtual UAnimMontage* GetAttackMontage_Implementation() { return NULL; }; \
	virtual UAnimMontage* GetHitReactMontage_Implementation() { return NULL; }; \
	virtual FVector GetCombatSocketLocation_Implementation(FGameplayTag const& MontageTag) { return FVector(ForceInit); }; \
 \
	DECLARE_FUNCTION(execSetIsAttacking); \
	DECLARE_FUNCTION(execIsAttacking); \
	DECLARE_FUNCTION(execGetAvatar); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execGetDieAnimationAsset); \
	DECLARE_FUNCTION(execGetAttackMontage); \
	DECLARE_FUNCTION(execGetHitReactMontage); \
	DECLARE_FUNCTION(execGetCombatSocketLocation);


#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_CALLBACK_WRAPPERS
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SENIORPROJECT_API UCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SENIORPROJECT_API UCombatInterface(UCombatInterface&&); \
	SENIORPROJECT_API UCombatInterface(const UCombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SENIORPROJECT_API, UCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatInterface) \
	SENIORPROJECT_API virtual ~UCombatInterface();


#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatInterface(); \
	friend struct Z_Construct_UClass_UCombatInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SeniorProject"), SENIORPROJECT_API) \
	DECLARE_SERIALIZER(UCombatInterface)


#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatInterface() {} \
public: \
	typedef UCombatInterface UClassType; \
	typedef ICombatInterface ThisClass; \
	static UAnimMontage* Execute_GetAttackMontage(UObject* O); \
	static AActor* Execute_GetAvatar(UObject* O); \
	static FVector Execute_GetCombatSocketLocation(UObject* O, FGameplayTag const& MontageTag); \
	static UAnimationAsset* Execute_GetDieAnimationAsset(UObject* O); \
	static UAnimMontage* Execute_GetHitReactMontage(UObject* O); \
	static bool Execute_IsAttacking(UObject* O); \
	static bool Execute_IsDead(const UObject* O); \
	static void Execute_SetIsAttacking(UObject* O, bool bIsAttacking); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_13_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_CALLBACK_WRAPPERS \
	FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UCombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_Interface_CombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
