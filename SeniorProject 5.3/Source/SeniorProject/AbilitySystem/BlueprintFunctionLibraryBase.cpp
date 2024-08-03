// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintFunctionLibraryBase.h"

#include "SeniorProject/DefaultBase/PlayerStateBase.h"
#include "SeniorProject/UI/DefaultHUD.h"

UOverlayWidgetController* UBlueprintFunctionLibraryBase::GetOverlayWidgetController(const UObject* WorldContextObject)
{
	if(APlayerController* PC = UGameplayStatics::GetPlayerController(WorldContextObject, 0))
	{
		if(ADefaultHUD* DefaultHUD = Cast<ADefaultHUD>(PC->GetHUD()))
		{
			APlayerStateBase* PS = PC->GetPlayerState<APlayerStateBase>();
			UAbilitySystemComponent* ASC = PS->GetAbilitySystemComponent();
			UAttributeSet* AS = PS->GetAttributeSet();
			const FWidgetControllerParams WCParam = FWidgetControllerParams(PC, PS, ASC, AS);
			return DefaultHUD->GetOverlayWidgetController(WCParam);
		}
	}

	return nullptr;
}

UAttributeMenuWidgetController* UBlueprintFunctionLibraryBase::GetUAttributeMenuWidgetController(
	const UObject* WorldContextObject)
{
	if(APlayerController* PC = UGameplayStatics::GetPlayerController(WorldContextObject, 0))
	{
		if(ADefaultHUD* DefaultHUD = Cast<ADefaultHUD>(PC->GetHUD()))
		{
			APlayerStateBase* PS = PC->GetPlayerState<APlayerStateBase>();
			UAbilitySystemComponent* ASC = PS->GetAbilitySystemComponent();
			UAttributeSet* AS = PS->GetAttributeSet();
			const FWidgetControllerParams WCParam = FWidgetControllerParams(PC, PS, ASC, AS);
			return DefaultHUD->GetAttributeMenuWidgetController(WCParam);
		}
	}

	return nullptr;
}
