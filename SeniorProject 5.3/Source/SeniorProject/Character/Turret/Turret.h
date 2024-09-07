// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "Turret.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTurretDestroyedDelegate, FGameplayTag, LineTag, FGameplayTag, TurretLevelTag, FGameplayTag, TeamName);
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ATurret : public AMinions
{
	GENERATED_BODY()

public:
	ATurret();
	virtual void BeginPlay() override;

	// 게임 모드에 자신을 등록하는 함수
	void RegisterWithGameMode();


	
	/* Combat Interface */
	virtual void Die() override;
	/* end Combat Interface */

	/* GameRule Interface */
	virtual FGameplayTag GetTurretLevelTag_Implementation() const override {return TurretLevelTag;}
	/* end GameRule Interface */

	
	UPROPERTY(BlueprintAssignable, Category = "Turret")
	FTurretDestroyedDelegate OnTurretDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameRule")
	FGameplayTag TurretLevelTag;
	
};
