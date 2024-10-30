// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKey.h"
#include "Turret.generated.h"


namespace FBlackboard
{
	struct FKey;
}


USTRUCT()
struct FTurretAnimValue
{
	GENERATED_BODY()

	UPROPERTY()
	float DistanceToTarget = 1000.f;

	UPROPERTY()
	FVector TargetLocation = FVector();

	UPROPERTY()
	bool OpenPanel = false;
	
	UPROPERTY()
	bool Aiming = false;
	
	UPROPERTY()
	bool IsHit = false;

	UPROPERTY()
	bool OpenShield = false;

	UPROPERTY(EditAnywhere)
	bool bIsRecovering = false;
	
	UPROPERTY()
	TObjectPtr<APawn> TargetCharacter;

	float OpenShieldDistance = 600.f;
};

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
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void Tick(float DeltaSeconds) override;

	
	// 게임 모드에 자신을 등록하는 함수
	UFUNCTION(Server, Reliable)
	void ServerRegisterWithGameMode();
	UFUNCTION(Server, Reliable)
	void ServerUpdateTurretState();
	UFUNCTION()
	void TurretUnderAttackedSound();
	void PlayTowerDestroyedSound();
	UFUNCTION()
	void ServerSetTurretAnimValue(UObject* InTargetCharacter);
	
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
	
	EBlackboardNotificationResult OnBlackboardTargetChanged(const UBlackboardComponent& BlackboardComp, FBlackboard::FKey KeyID);
	
	UPROPERTY(Replicated)
	FTurretAnimValue TurretAnimValue;
	
private:
	FTimerHandle TurretInitTimerHandle;
	const float InitLoopTime = 5.f;

	

	
	
};
