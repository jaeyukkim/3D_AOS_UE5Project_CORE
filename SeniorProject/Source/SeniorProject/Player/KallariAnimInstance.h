// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kallari.h"
#include "SeniorProject/SeniorProject.h"
#include "EngineMinimal.h"
#include "Animation/AnimInstance.h"
#include "KallariAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UKallariAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UKallariAnimInstance();
	void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	FRotator NormalizedDeltaRotator(FRotator A, FRotator B);

	UFUNCTION()
		void AnimNotify_SaveAttack();

	UFUNCTION()
		void AnimNotify_ResetCombo();

	UFUNCTION()
		void AnimNotify_RightAttack();

	UFUNCTION()
		void AnimNotify_LeftAttack();

	UFUNCTION()
		void AnimNotify_CanAttack();

	UFUNCTION()
		void AnimNotify_CanNotAttack();

	UFUNCTION()
		void AnimNotify_CastingOn();

	UFUNCTION()
		void AnimNotify_CastingOff();

	UFUNCTION()
		void AnimNotify_StopMove();

	UFUNCTION()
		void AnimNotify_CanMove();





	UPROPERTY()
		APawn* Pawn;

	UPROPERTY()
		AKallari* Kallari;


	UFUNCTION()
		void SetDead() { IsDead = true; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool IsDamaged;



private:



	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Roll;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Pitch;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Yaw;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool IsAccelerating;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool FullBody;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool IsInAir;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool AttackCombo;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool IsDead;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float YawDelta;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		FRotator AimRotation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		FRotator ActorRotation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		FRotator RotationLastTick;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		FRotator DeltaRotator;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Direction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float DirectionOnStop;





public:
	void SetDamaged();

	FTimerHandle DamagedTimerHandle = { };
};
