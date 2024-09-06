// Fill out your copyright notice in the Description page of Project Settings.


#include "OverlayWidgetController.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"

void UOverlayWidgetController::BroadcastInitialValues()
{

	OnHealthChanged.Broadcast(GetMyAS()->GetHealth());
	OnMaxHealthChanged.Broadcast(GetMyAS()->GetMaxHealth());
	OnManaChanged.Broadcast(GetMyAS()->GetMana());
	OnMaxManaChanged.Broadcast(GetMyAS()->GetMaxMana());
	OnNextExpChanged.Broadcast(GetMyAS()->GetNextExp());
	OnExpChanged.Broadcast(GetMyAS()->GetExp());
	//OnLevelChanged.Broadcast(GetMyAS()->GetLevel());
}

void UOverlayWidgetController::BindCallbacksToDependencies()
{


	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	GetMyAS()->GetHealthAttribute()).AddLambda( [this](const FOnAttributeChangeData& Data)
	{
		OnHealthChanged.Broadcast(Data.NewValue);
	});

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	GetMyAS()->GetMaxHealthAttribute()).AddLambda( [this](const FOnAttributeChangeData& Data)
	{
		OnMaxHealthChanged.Broadcast(Data.NewValue);
	});

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	GetMyAS()->GetManaAttribute()).AddLambda( [this](const FOnAttributeChangeData& Data)
	{
		OnManaChanged.Broadcast(Data.NewValue);
	});

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	GetMyAS()->GetMaxManaAttribute()).AddLambda( [this](const FOnAttributeChangeData& Data)
	{
		OnMaxManaChanged.Broadcast(Data.NewValue);
	});
	
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	GetMyAS()->GetNextExpAttribute()).AddLambda( [this](const FOnAttributeChangeData& Data)
	{
		OnNextExpChanged.Broadcast(Data.NewValue);
	});
	
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	GetMyAS()->GetExpAttribute()).AddLambda( [this](const FOnAttributeChangeData& Data)
	{
		OnExpChanged.Broadcast(Data.NewValue);
	});


	
	Cast<UAbilitySystemComponentBase>(AbilitySystemComponent)->EffectAssetTags.AddLambda(
	[this](const FGameplayTagContainer& AssetTags)
	{
		for (const FGameplayTag& Tag : AssetTags)
		{
			// For example, say that Tag = Message.HealthPotion
				// "Message.HealthPotion".MatchesTag("Message") will return True, "Message".MatchesTag("Message.HealthPotion") will return False
				FGameplayTag MessageTag = FGameplayTag::RequestGameplayTag(FName("Message"));
				if (Tag.MatchesTag(MessageTag))
				{
					const FUIWidgetRow* Row = GetDataTableRowByTag<FUIWidgetRow>(MessageWidgetDataTable, Tag);
					MessageWidgetRowDelegate.Broadcast(*Row);
				}
		}
	});

}



