// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SeniorProject.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_SeniorProject_generated_h
#error "SeniorProject.generated.h already included, missing '#pragma once' in SeniorProject.h"
#endif
#define SENIORPROJECT_SeniorProject_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeniorProject_5_3_Source_SeniorProject_SeniorProject_h


#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::PREINT) \
	op(ECharacterState::LOADING) \
	op(ECharacterState::READY) \
	op(ECharacterState::DEAD) 

enum class ECharacterState : uint8;
template<> struct TIsUEnumClass<ECharacterState> { enum { Value = true }; };
template<> SENIORPROJECT_API UEnum* StaticEnum<ECharacterState>();

#define FOREACH_ENUM_EMINIONSTATE(op) \
	op(EMinionState::LOADING) \
	op(EMinionState::READY) \
	op(EMinionState::DEAD) 

enum class EMinionState : uint8;
template<> struct TIsUEnumClass<EMinionState> { enum { Value = true }; };
template<> SENIORPROJECT_API UEnum* StaticEnum<EMinionState>();

#define FOREACH_ENUM_EATTACKDIRECTION(op) \
	op(EAttackDirection::Left) \
	op(EAttackDirection::Right) 

enum class EAttackDirection : uint8;
template<> struct TIsUEnumClass<EAttackDirection> { enum { Value = true }; };
template<> SENIORPROJECT_API UEnum* StaticEnum<EAttackDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
