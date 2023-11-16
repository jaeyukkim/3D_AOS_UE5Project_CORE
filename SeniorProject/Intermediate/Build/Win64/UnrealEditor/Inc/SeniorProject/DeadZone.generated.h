// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SENIORPROJECT_DeadZone_generated_h
#error "DeadZone.generated.h already included, missing '#pragma once' in DeadZone.h"
#endif
#define SENIORPROJECT_DeadZone_generated_h

#define FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_SPARSE_DATA
#define FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActiveDeadZone);


#define FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActiveDeadZone);


#define FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeadZone(); \
	friend struct Z_Construct_UClass_ADeadZone_Statics; \
public: \
	DECLARE_CLASS(ADeadZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(ADeadZone)


#define FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADeadZone(); \
	friend struct Z_Construct_UClass_ADeadZone_Statics; \
public: \
	DECLARE_CLASS(ADeadZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(ADeadZone)


#define FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeadZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeadZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeadZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeadZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeadZone(ADeadZone&&); \
	NO_API ADeadZone(const ADeadZone&); \
public:


#define FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeadZone(ADeadZone&&); \
	NO_API ADeadZone(const ADeadZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeadZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeadZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeadZone)


#define FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_11_PROLOG
#define FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_RPC_WRAPPERS \
	FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_INCLASS \
	FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_SPARSE_DATA \
	FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class ADeadZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_Source_SeniorProject_GameSetting_DeadZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
