// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/DefaultBase/AnimInstanceBase.h"
#include "TwinBlastAnim.generated.h"

class ATwinBlast;
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UTwinBlastAnim : public UAnimInstanceBase
{
	GENERATED_BODY()

public:
	UTwinBlastAnim();
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool bIsUltimateActivative = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool bGrenadeActived = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool bDiveActived = false;
	
	UFUNCTION()
	void AnimNotify_EnableUltimate();
	UFUNCTION()
	void AnimNotify_DisableUltimate();
	
	UPROPERTY()
	TObjectPtr<ATwinBlast> TwinBlast;
};
