// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/Character/Enemy/Monster/Minions.h"
#include "Turret.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTowerDestroyedDelegate, FGameplayTag, LineTag, FGameplayTag, TurretLevelTag, FGameplayTag, TeamName );
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ATurret : public AMinions
{
	GENERATED_BODY()

public:
	
	virtual void Die() override;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FTowerDestroyedDelegate OnTowerDestroyed;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower")
	FGameplayTag LineTag; // 예: 탑, 미드, 바텀

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tower")
	FGameplayTag TurretLevelTag;
	
};
