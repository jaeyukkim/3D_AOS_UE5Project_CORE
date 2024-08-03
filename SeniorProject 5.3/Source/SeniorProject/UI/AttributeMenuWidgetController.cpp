// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeMenuWidgetController.h"
#include "SeniorProject/AbilitySystem/Data/AttributeInfo.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"


void UAttributeMenuWidgetController::BindCallbacksToDependencies()
{
	check(AttributeInfo);
	UAttributeSetBase* AS = GetMyAS();
	
	for(auto Pair : AS->TagsToAttributes)
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Pair.Value()).AddLambda(
			[this, Pair](const FOnAttributeChangeData& Data)
			{
				BroadcastAttributeInfo(Pair.Key, Pair.Value());
			});
		
	}
}

void UAttributeMenuWidgetController::BroadcastInitialValues()
{
	check(AttributeInfo);
	
	UAttributeSetBase* AS = GetMyAS();
	for(auto& Pair : AS->TagsToAttributes)
	{
		BroadcastAttributeInfo(Pair.Key, Pair.Value());
	}
	
	
}

void UAttributeMenuWidgetController::BroadcastAttributeInfo(const FGameplayTag& AttributeTag,
	const FGameplayAttribute& Attribute) const
{
	FAttributeTagInfo Info = AttributeInfo->FindAttributeInfoForTag(AttributeTag);
	Info.AttributeValue = Attribute.GetNumericValue(AttributeSet);
	AttributeInfoDelegate.Broadcast(Info);
}
