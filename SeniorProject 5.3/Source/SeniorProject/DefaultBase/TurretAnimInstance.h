// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TurretAnimInstance.generated.h"


class ATurret;
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UTurretAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	

	
	UPROPERTY()
	TObjectPtr<ATurret> Turret;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Turret, Meta = (AllowPrivateAccess = true))
	TObjectPtr<AActor> CombatTarget;
protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Turret, Meta = (AllowPrivateAccess = true))
	float DistanceToTarget = 1000.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Turret, Meta = (AllowPrivateAccess = true))
	float PrevDistanceToTarget = 1000.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Turret, Meta = (AllowPrivateAccess = true))
	FVector TargetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Turret, Meta = (AllowPrivateAccess = true))
	FVector PrevTargetLocation;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Turret, Meta = (AllowPrivateAccess = true))
	bool OpenPanel = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Turret, Meta = (AllowPrivateAccess = true))
	bool Aiming = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Turret, Meta = (AllowPrivateAccess = true))
	bool IsHit = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Turret, Meta = (AllowPrivateAccess = true))
	bool OpenShield = false;

	UPROPERTY(EditAnywhere)
	bool bIsRecovering = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Turret, Meta = (AllowPrivateAccess = true))
	bool bIsDead = false;
	
	UPROPERTY()
	TObjectPtr<APawn> TargetCharacter;

private:


	// 포탑의 기본 보고있는 방향
	UPROPERTY()
	FVector DefalutAimLocation;
	
	const float OpenShieldDistance = 500.f;
	

};
