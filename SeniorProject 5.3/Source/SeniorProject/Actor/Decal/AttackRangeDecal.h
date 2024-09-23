// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AttackRangeDecal.generated.h"

class UDecalComponent;

UCLASS()
class SENIORPROJECT_API AAttackRangeDecal : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AAttackRangeDecal();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UDecalComponent> MagicCircleDecal;
	
public:
	
	virtual void Tick(float DeltaTime) override;

};
