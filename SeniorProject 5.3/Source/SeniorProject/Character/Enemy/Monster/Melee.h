// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Minions.h"
#include "Melee.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API AMelee : public AMinions
{
	GENERATED_BODY()

public:
	AMelee();
	
protected:
	virtual void SetDefaultSetting() override;
};
