// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SeniorProject/UI/DefaultWidgetController.h"
#include "GameplayTagContainer.h"
#include "AttributeMenuWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttributeInfoSignature, const FAttributeTagInfo&, Info);
class UAttributeInfo;
struct FAttributeTagInfo;
/**
 * 
 */

UCLASS(BlueprintType, Blueprintable)
class SENIORPROJECT_API UAttributeMenuWidgetController : public UDefaultWidgetController
{
	GENERATED_BODY()
public:
	
	virtual void BindCallbacksToDependencies() override;
	
	UFUNCTION(BlueprintCallable)
	virtual void BroadcastInitialValues() override;

	UPROPERTY(BlueprintAssignable, Category="GAS|Attributes")
	FAttributeInfoSignature AttributeInfoDelegate;

protected:
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAttributeInfo> AttributeInfo;

private:
	void BroadcastAttributeInfo(const FGameplayTag& AttributeTag, const FGameplayAttribute& Attribute) const;
};
