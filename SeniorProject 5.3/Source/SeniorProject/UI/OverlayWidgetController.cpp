// Fill out your copyright notice in the Description page of Project Settings.


#include "OverlayWidgetController.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"

void UOverlayWidgetController::BroadcastInitialValues()
{

	OnHealthChanged.Broadcast(GetMyAS()->GetHealth());
	OnMaxHealthChanged.Broadcast(GetMyAS()->GetMaxHealth());
	OnNextExpChanged.Broadcast(GetMyAS()->GetNextExp());
	OnExpChanged.Broadcast(GetMyAS()->GetExp());
	OnLevelChanged.Broadcast(GetMyAS()->GetLevel());
}

void UOverlayWidgetController::BindCallbacksToDependencies()
{


	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetMyAS()->GetHealthAttribute()).AddUObject(this, &UOverlayWidgetController::HealthChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetMyAS()->GetMaxHealthAttribute()).AddUObject(this, &UOverlayWidgetController::MaxHealthChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetMyAS()->GetNextExpAttribute()).AddUObject(this, &UOverlayWidgetController::NextExpChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetMyAS()->GetExpAttribute()).AddUObject(this, &UOverlayWidgetController::ExpChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetMyAS()->GetLevelAttribute()).AddUObject(this, &UOverlayWidgetController::LevelChanged);

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
					const FString Msg = FString::Printf(TEXT("GE Tag: %s"), *Tag.ToString());
					GEngine->AddOnScreenDebugMessage(-1, 8.f, FColor::Blue, Msg);
					MessageWidgetRowDelegate.Broadcast(*Row);
				}
		}
	});

}

void UOverlayWidgetController::HealthChanged(const FOnAttributeChangeData& Data) const
{
	OnHealthChanged.Broadcast(Data.NewValue);
}

void UOverlayWidgetController::MaxHealthChanged(const FOnAttributeChangeData& Data) const
{
	OnMaxHealthChanged.Broadcast(Data.NewValue);
}

void UOverlayWidgetController::NextExpChanged(const FOnAttributeChangeData& Data) const
{
	OnNextExpChanged.Broadcast(Data.NewValue);

}

void UOverlayWidgetController::ExpChanged(const FOnAttributeChangeData& Data) const
{
	OnNextExpChanged.Broadcast(Data.NewValue);

}

void UOverlayWidgetController::LevelChanged(const FOnAttributeChangeData& Data) const
{
	OnLevelChanged.Broadcast(Data.NewValue);

}


