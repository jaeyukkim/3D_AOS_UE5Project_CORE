// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "Turret.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTurretDestroyedDelegate, FGameplayTag&, LineTag,  FGameplayTag&, TurretLevelTag, FGameplayTag&, TeamName);
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ATurret : public AMinions
{
	GENERATED_BODY()

public:
	ATurret();
	virtual void PossessedBy(AController* NewController) override;
	virtual void BeginPlay() override;

	// 게임 모드에 자신을 등록하는 함수
	UFUNCTION(Server, Reliable)
	void ServerRegisterWithGameMode();

	UFUNCTION(Server, Reliable)
	void ServerUpdateTurretState();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayTowerDestroyedSound();
	
	/* Combat Interface */
	virtual void Die_Implementation() override;
	/* end Combat Interface */

	/* GameRule Interface */
	virtual FGameplayTag GetTurretLevelTag_Implementation() const override {return TurretLevelTag;}
	/* end GameRule Interface */

	
	UPROPERTY(BlueprintAssignable, Category = "Turret")
	FTurretDestroyedDelegate OnTurretDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameRule")
	FGameplayTag TurretLevelTag;

private:
	FTimerHandle TurretInitTimerHandle;

	const float InitLoopTime = 5.f;
};
