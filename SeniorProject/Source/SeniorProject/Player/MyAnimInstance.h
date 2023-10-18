// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "Sound/SoundCue.h"
#include "MyCharacter.h"
#include "SeniorProject/SeniorProject.h"
#include "EngineMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UMyAnimInstance : public UAnimInstance
{

	GENERATED_BODY()


public:
	UMyAnimInstance();
	void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	FRotator NormalizedDeltaRotator(FRotator A, FRotator B);
	
	UFUNCTION()
		void AnimNotify_SaveAttack();
	UFUNCTION()
		void AnimNotify_ResetCombo();

	UFUNCTION()
		void AnimNotify_RunStop();

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

	UFUNCTION()
		void AnimNotify_FootStep();


	
	
	UFUNCTION()
		void AnimNotify_HideSword();
	UFUNCTION()
		void AnimNotify_UnHideSword();
	UFUNCTION()
		void AnimNotify_HideKwangSword();
	UFUNCTION()
		void AnimNotify_UnHideKwangSword();

	
	
	UFUNCTION()
		void AnimNotify_Ability_Q_Cooldown();

	UFUNCTION()
		void AnimNotify_Attack_Q();


	UFUNCTION()
		void AnimNotify_Attack_RMB();

	UFUNCTION()
		void AnimNotify_Attack_RMB_NoWep();


	UFUNCTION()
		void AnimNotify_Ability_RMB_Cooldown();


	UFUNCTION()
		void AnimNotify_MoveToSword();
	UFUNCTION()
		void AnimNotify_Attack_R();
	UFUNCTION()
		void AnimNotify_Ability_R_Cooldown();


	UPROPERTY()
	APawn* Pawn;
	UPROPERTY()
	AMyCharacter* Character;

	UFUNCTION()
		void SetDead() { IsDead = true; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool IsDamaged;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float EnemyDirection;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool bIsNoWep;


	

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
