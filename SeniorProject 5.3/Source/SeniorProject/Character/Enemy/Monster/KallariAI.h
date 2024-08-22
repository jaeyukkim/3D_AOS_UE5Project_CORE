// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "Minions.h"
#include "KallariAI.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API AKallariAI : public AMinions
{
	GENERATED_BODY()

public:

	AKallariAI();
	virtual void SetDefaultSetting() override;
};
