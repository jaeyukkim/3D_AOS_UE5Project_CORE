// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "SeniorProject/DefaultBase/AnimInstanceBase.h"
#include "SeniorProject/Character/Player/MyCharacter.h"

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
		void AnimNotify_HideSword();
	UFUNCTION()
		void AnimNotify_UnHideSword();
	



	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool bIsNoWep;

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float DirectionOnStop;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool bIsCasting;

	


public:
	
	
	FTimerHandle DamagedTimerHandle = { };
};
