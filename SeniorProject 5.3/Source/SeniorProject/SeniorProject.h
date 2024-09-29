// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#define CUSTOM_DEPTH_RED 100
#define ECC_RangeTrace ECC_GameTraceChannel3
UENUM(BlueprintType)

enum class ECharacterState : uint8
{
	PREINT,
	LOADING,
	READY,
	DEAD
};

UENUM(BlueprintType)
enum class EMinionState : uint8
{
	LOADING,
	READY,
	DEAD
};

UENUM(BlueprintType)
enum class EAttackDirection : uint8
{
	Left,
	Right
};

