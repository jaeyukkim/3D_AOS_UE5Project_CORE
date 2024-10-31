// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "Turret.generated.h"


enum class EBlackboardNotificationResult : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTurretDestroyedDelegate, FGameplayTag&, LineTag, FGameplayTag&,
                                               TurretLevelTag, FGameplayTag&, TeamName);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTargetChangedDelegate, UObject*, NewTarget);

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
	virtual void InitializeDefaultAttributes() const override;
	virtual void Tick(float DeltaSeconds) override;

	
	// 게임 모드에 자신을 등록하는 함수
	UFUNCTION(Server, Reliable)
	void ServerRegisterWithGameMode();
	UFUNCTION(Server, Reliable)
	void ServerUpdateTurretState();
	UFUNCTION()
	void TurretUnderAttackedSound();
	void PlayTowerDestroyedSound();
	
	
	/* Combat Interface */
	virtual void Die_Implementation() override;
	/* end Combat Interface */

	/* GameRule Interface */
	virtual FGameplayTag GetTurretLevelTag_Implementation() const override {return TurretLevelTag;}
	/* end GameRule Interface */

	
	UPROPERTY(BlueprintAssignable, Category = "Turret")
	FTurretDestroyedDelegate OnTurretDestroyed;
	
	UPROPERTY(BlueprintAssignable)
	FTargetChangedDelegate OnTargetChanged;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameRule")
	FGameplayTag TurretLevelTag;
	
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	TObjectPtr<UCameraComponent> Camera;

	
private:
	FTimerHandle TurretInitTimerHandle;
	const float InitLoopTime = 5.f;

	
};
