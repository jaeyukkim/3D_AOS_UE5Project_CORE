// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "Turret.generated.h"


enum class EBlackboardNotificationResult : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTurretDestroyedDelegate, FGameplayTag&, LineTag, FGameplayTag&,
                                               TurretLevelTag, FGameplayTag&, TeamName);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTargetChangedDelegate);

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
	virtual EBlackboardNotificationResult OnBlackboardTargetChanged(const UBlackboardComponent& BlackboardComp, FBlackboard::FKey KeyID) override;
	
	// 게임 모드에 자신을 등록하는 함수
	UFUNCTION(Server, Reliable)
	void ServerRegisterWithGameMode();
	UFUNCTION(Server, Reliable)
	void ServerUpdateTurretState();
	UFUNCTION(NetMulticast, Reliable)
	void MulticastTurretUnderAttackedSound();
	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayTowerDestroyedSound();
	virtual void MulticastHandleDeath() override;
	
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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UParticleSystemComponent> TargetingBeam;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UParticleSystemComponent> AttackBeam;

	UPROPERTY(Replicated)
	bool bIsUnderAttacked = false;
	UFUNCTION(Server, Reliable)
	void ServerSetIsUnderAttacked();
	UFUNCTION(NetMulticast, Reliable)
	void MulticastActiveTargetBeam(AActor* TargetActor);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void MulticastActiveAttackBeam();
	
	
	
private:
	FTimerHandle TurretInitTimerHandle;
	FTimerHandle HitReactTimerHandle;
	FTimerHandle ExplosionTimerHandle;
	const float InitLoopTime = 5.f;
	const float HitReactLoopTime = 0.1f;
	const float ExplosionTime = 3.8f;
};
