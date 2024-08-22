// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "Minions.h"
#include "Crunch.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ACrunch : public AMinions
{
	GENERATED_BODY()
public:
	ACrunch();

	virtual void SetDefaultSetting() override;
};
