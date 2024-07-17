// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "Minions.h"
#include "LaneSuper.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ALaneSuper : public AMinions
{
	GENERATED_BODY()
public:
	ALaneSuper();

	virtual void SetDefaultSetting();
};
