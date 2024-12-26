// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActionComponent.generated.h"

class AMyCharacter;

UCLASS(BlueprintType, Blueprintable)
class SENIORPROJECT_API UActionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UActionComponent();
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void MulticastHitStopAndCameraShake(TSubclassOf<UCameraShakeBase> CameraShake, const float HitStopTime, const float HitStopDelay);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void MulticastHitStop(const float HitStopTime, const float HitStopDelay);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void MulticastCameraShake(TSubclassOf<UCameraShakeBase> CameraShake);
	
protected:
	virtual void BeginPlay() override;

	
private:
	
	FTimerHandle HitStopTimerHandle;
	
		
};
