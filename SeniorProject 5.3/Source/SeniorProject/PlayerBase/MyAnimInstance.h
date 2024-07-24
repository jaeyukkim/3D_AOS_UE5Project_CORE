// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "SeniorProject/DefaultBase/AnimInstanceBase.h"
#include "SeniorProject/PlayerBase/MyCharacter.h"

#include "Sound/SoundCue.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UMyAnimInstance : public UAnimInstanceBase
{

	GENERATED_BODY()


public:
	UMyAnimInstance();
	void NativeInitializeAnimation() override;



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



	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool bIsNoWep;

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float DirectionOnStop;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool bIsCasting;

	UPROPERTY()
		AMyCharacter* PlayerCharacter;


public:
	void SetDamaged();
	
	FTimerHandle DamagedTimerHandle = { };
};
