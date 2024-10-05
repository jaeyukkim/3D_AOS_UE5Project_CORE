// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/UI/DefaultWidgetController.h"
#include "ItemMenuWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGoldChangedSignature, int32, NewGold);

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class SENIORPROJECT_API UItemMenuWidgetController : public UDefaultWidgetController
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	
	virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;
	
	UPROPERTY(BlueprintAssignable)
	FGoldChangedSignature GoldChanged;
	
};
