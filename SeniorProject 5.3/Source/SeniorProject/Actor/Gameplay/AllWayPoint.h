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

	static TArray<TObjectPtr<AWayPoint>> GetWayPoint(FGameplayTag& LineTag);

	UPROPERTY()
	TArray<TObjectPtr<AWayPoint>> TopWayPoint;
	UPROPERTY()
	TArray<TObjectPtr<AWayPoint>> MidWayPoint;
	UPROPERTY()
	TArray<TObjectPtr<AWayPoint>> BottomWayPoint;

};
