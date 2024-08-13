// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintFunctionLibraryBase.h"

#include "AbilitySystemComponent.h"
#include "SeniorProject/DefaultBase/PlayerStateBase.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
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

void UBlueprintFunctionLibraryBase::InitializeDefaultAttributes(const UObject* WorldContextObject,
	ECharacterClass CharacterClass, float Level, UAbilitySystemComponent* ASC)
{
	AMyGameModeBase* MyGameModeBase = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(WorldContextObject));
	if(MyGameModeBase == nullptr) return;

	AActor* AvatarActor = ASC->GetAvatarActor();
	
	UCharacterClassInfo* CharacterClassInfo = MyGameModeBase->CharacterClassInfo;
	FCharacterClassDefaultInfo ClassDefaultInfo = CharacterClassInfo->GetClassDefaultInfo(CharacterClass);
	
	FGameplayEffectContextHandle ContextHandle = ASC->MakeEffectContext();
	ContextHandle.AddSourceObject(AvatarActor);
	
	const FGameplayEffectSpecHandle AdditionalVitalAttributesSpecHandle = ASC->MakeOutgoingSpec(ClassDefaultInfo.AdditionalVitalAttributes,Level,ContextHandle);
	ASC->ApplyGameplayEffectSpecToSelf(*AdditionalVitalAttributesSpecHandle.Data.Get());

	const FGameplayEffectSpecHandle VitalAttributesSpecHandle = ASC->MakeOutgoingSpec(ClassDefaultInfo.VitalAttributes,Level,ContextHandle);
	ASC->ApplyGameplayEffectSpecToSelf(*VitalAttributesSpecHandle.Data.Get());

	const FGameplayEffectSpecHandle SecondaryAttributesSpecHandle = ASC->MakeOutgoingSpec(ClassDefaultInfo.SecondaryAttributes,Level,ContextHandle);
	ASC->ApplyGameplayEffectSpecToSelf(*SecondaryAttributesSpecHandle.Data.Get());

	const FGameplayEffectSpecHandle GamePlayAttributesSpecHandle = ASC->MakeOutgoingSpec(ClassDefaultInfo.GamePlayAttributes,Level,ContextHandle);
	ASC->ApplyGameplayEffectSpecToSelf(*GamePlayAttributesSpecHandle.Data.Get());
}
