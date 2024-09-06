// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Minions.h"
#include "Ranged.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ARanged : public AMinions
{
	GENERATED_BODY()

public:
	ARanged();

protected:
	virtual void SetDefaultSetting() override;
};
