// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AllWayPoint.generated.h"


class AWayPoint;
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UAllWayPoint : public UObject
{
	GENERATED_BODY()

public:
	static const UAllWayPoint* Get();
	static void InitializeWayPoint(UWorld* WorldContext);
	
	static TObjectPtr<UAllWayPoint> GAllWayPoint;

	UFUNCTION()
	TArray<AWayPoint*> GetWayPoint(FGameplayTag& LineTag) const;

	UPROPERTY(Transient)
	TArray<TObjectPtr<AWayPoint>> TopWayPoint;
	UPROPERTY(Transient)
	TArray<TObjectPtr<AWayPoint>> MidWayPoint;
	UPROPERTY(Transient)
	TArray<TObjectPtr<AWayPoint>> BottomWayPoint;

};
