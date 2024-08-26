// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintFunctionLibraryBase.h"

#include "AbilitySystemComponent.h"
#include "SeniorProject/AbilitySystem/AbilityTypesBase.h"
#include "SeniorProject/DefaultBase/PlayerStateBase.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/UI/DefaultHUD.h"
#include "SeniorProject/Interface/CombatInterface.h"

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
	if(CharacterClassInfo == nullptr) return;

	
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

void UBlueprintFunctionLibraryBase::GiveStartupAbilities(const UObject* WorldContextObject,
	UAbilitySystemComponent* ASC, ECharacterClass CharacterClass)
{
	AMyGameModeBase* MyGameModeBase = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(WorldContextObject));
	if (MyGameModeBase == nullptr) return;

	UCharacterClassInfo* CharacterClassInfo = MyGameModeBase->CharacterClassInfo;
	for (TSubclassOf<UGameplayAbility> AbilityClass : CharacterClassInfo->StartupAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass, 1);
		ASC->GiveAbility(AbilitySpec);
	}

	const FCharacterClassDefaultInfo& DefaultInfo = CharacterClassInfo->GetClassDefaultInfo(CharacterClass);
	for (TSubclassOf<UGameplayAbility> AbilityClass : DefaultInfo.StartupAbilities)
	{
		if (ICombatInterface* CombatInterface = Cast<ICombatInterface>(ASC->GetAvatarActor()))
		{
			FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass, CombatInterface->GetPlayerLevel());
			ASC->GiveAbility(AbilitySpec);
		}
	}
}


bool UBlueprintFunctionLibraryBase::IsCriticalHit(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if (const FGameplayEffectBaseContext* EffectContext = static_cast<const FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		return EffectContext->IsCriticalHit();
	}
	return false;
}


void UBlueprintFunctionLibraryBase::SetIsCriticalHit(FGameplayEffectContextHandle& EffectContextHandle,
	bool bInIsCriticalHit)
{
	if (FGameplayEffectBaseContext* EffectContext = static_cast<FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		EffectContext->SetIsCriticalHit(bInIsCriticalHit);
	}
}


bool UBlueprintFunctionLibraryBase::IsMagicalDamage(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if (const FGameplayEffectBaseContext* EffectContext = static_cast<const FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		return EffectContext->IsMagicalDamage();
	}
	return false;
}

void UBlueprintFunctionLibraryBase::SetIsMagicalDamage(FGameplayEffectContextHandle& EffectContextHandle,
                                                       bool bInIsMagicalDamage)
{
	if (FGameplayEffectBaseContext* EffectContext = static_cast<FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		EffectContext->SetIsMagicalDamage(bInIsMagicalDamage);
	}
}

void UBlueprintFunctionLibraryBase::GetLivePlayersWithinRadius(const UObject* WorldContextObject,
	TArray<AActor*>& OutOverlappingActors, const TArray<AActor*>& ActorsToIgnore, float Radius, const FVector& SphereOrigin)
{
	FCollisionQueryParams SphereParams;
	SphereParams.AddIgnoredActors(ActorsToIgnore);

	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		TArray<FOverlapResult> Overlaps;
		World->OverlapMultiByObjectType(Overlaps, SphereOrigin, FQuat::Identity, FCollisionObjectQueryParams(FCollisionObjectQueryParams::InitType::AllDynamicObjects), FCollisionShape::MakeSphere(Radius), SphereParams);
		for (FOverlapResult& Overlap : Overlaps)
		{
			if (Overlap.GetActor()->Implements<UCombatInterface>() && !ICombatInterface::Execute_IsDead(Overlap.GetActor()))
			{
				OutOverlappingActors.AddUnique(ICombatInterface::Execute_GetAvatar(Overlap.GetActor()));
			}
		}
	}
}
