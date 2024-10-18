// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "SeniorProject/DefaultBase/AnimInstanceBase.h"
#include "SeniorProject/Character/Player/MyCharacter.h"

#include "Sound/SoundCue.h"
#include "MyAnimInstance.generated.h"

class AKwangPlayer;
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UMyAnimInstance : public UAnimInstanceBase
{

	GENERATED_BODY()


public:
	UMyAnimInstance();
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;


	UFUNCTION()
		void AnimNotify_RunStop();
	UFUNCTION()
		void AnimNotify_HideSword();
	UFUNCTION()
		void AnimNotify_UnHideSword();
	
	UPROPERTY()
	TObjectPtr<AKwangPlayer> KwangPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool bActiveWep;

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float DirectionOnStop = 0.f;


};
