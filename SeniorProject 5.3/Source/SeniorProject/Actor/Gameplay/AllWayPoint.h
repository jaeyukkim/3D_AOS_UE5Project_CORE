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
	
	static UAllWayPoint* GAllWayPoint;

	static TArray<TObjectPtr<AWayPoint>> GetWayPoint(FGameplayTag& LineTag);

	TArray<TObjectPtr<AWayPoint>> TopWayPoint;
	TArray<TObjectPtr<AWayPoint>> MidWayPoint;
	TArray<TObjectPtr<AWayPoint>> BottomWayPoint;

};
