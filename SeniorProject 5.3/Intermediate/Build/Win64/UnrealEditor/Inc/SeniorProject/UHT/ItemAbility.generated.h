// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Item/ItemAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_ItemAbility_generated_h
#error "ItemAbility.generated.h already included, missing '#pragma once' in ItemAbility.h"
#endif
#define SENIORPROJECT_ItemAbility_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastActivateItemEffect_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastActivateItemEffect); \
	DECLARE_FUNCTION(execActivateItemEffect); \
	DECLARE_FUNCTION(execGetDescription);


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_CALLBACK_WRAPPERS
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemAbility(); \
	friend struct Z_Construct_UClass_UItemAbility_Statics; \
public: \
	DECLARE_CLASS(UItemAbility, UGameplayAbilityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UItemAbility)


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemAbility(UItemAbility&&); \
	NO_API UItemAbility(const UItemAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemAbility) \
	NO_API virtual ~UItemAbility();


#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_16_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_CALLBACK_WRAPPERS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UItemAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_AbilitySystem_Item_ItemAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
