// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MinionAnimInstance.h"
#include "BuffAnimInstance.generated.h"

/**
 * 
 */
class ANeutralityMonster;
UCLASS()
class SENIORPROJECT_API UBuffAnimInstance : public UMinionAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY()
	TObjectPtr<ANeutralityMonster> BuffMonster;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Turret, Meta = (AllowPrivateAccess = true))
	TObjectPtr<AActor> TargetPlayer;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float YawToPlayer = 0.f;
};
