// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerBase/MyPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_MyPlayerState_generated_h
#error "MyPlayerState.generated.h already included, missing '#pragma once' in MyPlayerState.h"
#endif
#define SENIORPROJECT_MyPlayerState_generated_h

#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_SPARSE_DATA
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddExp);


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_ACCESSORS
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerState(); \
	friend struct Z_Construct_UClass_AMyPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AMyPlayerState*>(this); }


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerState(AMyPlayerState&&); \
	NO_API AMyPlayerState(const AMyPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerState) \
	NO_API virtual ~AMyPlayerState();


#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_17_PROLOG
#define FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_SPARSE_DATA \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_ACCESSORS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_INCLASS_NO_PURE_DECLS \
	FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AMyPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_PlayerBase_MyPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
