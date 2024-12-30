// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintFunctionLibraryBase.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AbilityTypesBase.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/UI/HUD/DefaultHUD.h"
#include "SeniorProject/Interface/CombatInterface.h"
#include "SeniorProject/Interface/EnemyInterface.h"
#include "SeniorProject/Interface/GameRuleInterface.h"

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

USpellMenuWidgetController* UBlueprintFunctionLibraryBase::GetSpellMenuWidgetController(
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
			return DefaultHUD->GetSpellMenuWidgetController(WCParam);
		}
	}

	return nullptr;
}

UItemMenuWidgetController* UBlueprintFunctionLibraryBase::GetItemMenuWidgetController(const UObject* WorldContextObject)
{
	if(APlayerController* PC = UGameplayStatics::GetPlayerController(WorldContextObject, 0))
	{
		if(ADefaultHUD* DefaultHUD = Cast<ADefaultHUD>(PC->GetHUD()))
		{
			APlayerStateBase* PS = PC->GetPlayerState<APlayerStateBase>();
			UAbilitySystemComponent* ASC = PS->GetAbilitySystemComponent();
			UAttributeSet* AS = PS->GetAttributeSet();
			const FWidgetControllerParams WCParam = FWidgetControllerParams(PC, PS, ASC, AS);
			return DefaultHUD->GetItemMenuWidgetController(WCParam);
		}
	}

	return nullptr;
}


UCharacterClassInfo* UBlueprintFunctionLibraryBase::GetCharacterClassInfo(const UObject* WorldContextObject)
{
	AMyGameModeBase* MyGameModeBase = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(WorldContextObject));
	if(MyGameModeBase == nullptr) return nullptr;

	return MyGameModeBase->CharacterClassInfo;
}

void UBlueprintFunctionLibraryBase::InitializeDefaultAttributes(const UObject* WorldContextObject,
                                                                ECharacterClass CharacterClass, float Level, UAbilitySystemComponent* ASC)
{
	
	AActor* AvatarActor = ASC->GetAvatarActor();
	
	UCharacterClassInfo* CharacterClassInfo = GetCharacterClassInfo(WorldContextObject);
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
		if (ASC->GetAvatarActor()->Implements<UCombatInterface>())
		{
			FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass, ICombatInterface::Execute_GetPlayerLevel(ASC->GetAvatarActor()));
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

bool UBlueprintFunctionLibraryBase::GetIsBasicAttack(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if (const FGameplayEffectBaseContext* EffectContext = static_cast<const FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		return EffectContext->IsBasicAttack();
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

void UBlueprintFunctionLibraryBase::SetIsBasicAttack(FGameplayEffectContextHandle& EffectContextHandle,
	bool InIsBasicAttack)
{
	if (FGameplayEffectBaseContext* EffectContext = static_cast<FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		EffectContext->SetIsBasicAttack(InIsBasicAttack);
	}
}

void UBlueprintFunctionLibraryBase::SetDebuffValid(FGameplayEffectContextHandle& EffectContextHandle,
                                                   bool InDebuffValid)
{
	if (FGameplayEffectBaseContext* EffectContext = static_cast<FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		EffectContext->SetDebuffValid(InDebuffValid);
	}
}

void UBlueprintFunctionLibraryBase::SetDebuffType(FGameplayEffectContextHandle& EffectContextHandle,
                                                  const FGameplayTag& InDebuffType)
{
	if (FGameplayEffectBaseContext* EffectContext = static_cast<FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		const TSharedPtr<FGameplayTag> DebuffType = MakeShared<FGameplayTag>(InDebuffType);
		EffectContext->SetDebuffType(DebuffType);
	}
}

void UBlueprintFunctionLibraryBase::SetDebuffCoefficient(FGameplayEffectContextHandle& EffectContextHandle,
	float InDebuffCoefficient)
{
	if (FGameplayEffectBaseContext* EffectContext = static_cast<FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		EffectContext->SetDebuffCoefficient(InDebuffCoefficient);
	}
}

void UBlueprintFunctionLibraryBase::SetDebuffDuration(FGameplayEffectContextHandle& EffectContextHandle,
	float InDuration)
{
	if (FGameplayEffectBaseContext* EffectContext = static_cast<FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		EffectContext->SetDebuffDuration(InDuration);
	}
}

void UBlueprintFunctionLibraryBase::SetDebuffFrequency(FGameplayEffectContextHandle& EffectContextHandle,
	float InFrequency)
{
	if (FGameplayEffectBaseContext* EffectContext = static_cast<FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		EffectContext->SetDebuffFrequency(InFrequency);
	}
}



FGameplayTag UBlueprintFunctionLibraryBase::GetDebuffType(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if (const FGameplayEffectBaseContext* EffectContext = static_cast<const FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		return *EffectContext->GetDebuffType();
	}
	return FGameplayTag();
}

bool UBlueprintFunctionLibraryBase::GetIsDebuffValid(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if (const FGameplayEffectBaseContext* EffectContext = static_cast<const FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		return EffectContext->GetIsDebuffValid();
	}
	return false;
}

float UBlueprintFunctionLibraryBase::GetDebuffCoefficient(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if (const FGameplayEffectBaseContext* EffectContext = static_cast<const FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		return EffectContext->GetDebuffCoefficient();
	}
	return 0.f;
}

float UBlueprintFunctionLibraryBase::GetDebuffDuration(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if (const FGameplayEffectBaseContext* EffectContext = static_cast<const FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		return EffectContext->GetDebuffDuration();
	}
	return 0.f;

	
}

float UBlueprintFunctionLibraryBase::GetDebuffFrequency(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if (const FGameplayEffectBaseContext* EffectContext = static_cast<const FGameplayEffectBaseContext*>(EffectContextHandle.Get()))
	{
		return EffectContext->GetDebuffFrequency();
		
	}
	return 0.f;
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

bool UBlueprintFunctionLibraryBase::IsFriends(AActor* ThisActor, AActor* TargetActor)
{
	if (ThisActor == nullptr || TargetActor == nullptr) return true;
	if(!(ThisActor->Implements<UEnemyInterface>() && TargetActor->Implements<UEnemyInterface>()))
	{
		return false;
	}

	
	FGameplayTag ThisActorTeam = Cast<IGameRuleInterface>(ThisActor)->Execute_GetTeamName(ThisActor);
	FGameplayTag TargetActorTeam = Cast<IGameRuleInterface>(TargetActor)->Execute_GetTeamName(TargetActor);

	/* ThisActor가 중립 몬스터 일 때 */
	if(ThisActorTeam == FGameplayTagsBase::Get().GameRule_TeamName_NeutralityTeam)
	{
		// TargetActor가 미니언이면 적이 아님
		return TargetActor->ActorHasTag("Minion");
	}
	
	/* TargetActor가 중립 몬스터 일 때 */
	else if(TargetActorTeam == FGameplayTagsBase::Get().GameRule_TeamName_NeutralityTeam)
	{
		// ThisActor가 미니언이면 적이 아님
		return ThisActor->ActorHasTag("Minion");
	}

	return ThisActorTeam == TargetActorTeam;
}

AActor* UBlueprintFunctionLibraryBase::GetOwnerActorFromSpecHandle(const FGameplayEffectSpecHandle& SpecHandle)
{
	if(SpecHandle.IsValid())
	{
		AActor* Instigator = SpecHandle.Data.Get()->GetContext().GetInstigator();
		UAbilitySystemComponent* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Instigator);
		if(ASC != nullptr && Instigator != nullptr)
		{
			AActor* AvatarActor = ASC->GetAvatarActor();
			if(AvatarActor != nullptr)
				return AvatarActor;
		}
	}
	
	return nullptr;
}

FGameplayEffectContextHandle UBlueprintFunctionLibraryBase::ApplyDamageEffect(
	const FDamageEffectParams& DamageEffectParams)
{
	const FGameplayTagsBase& GameplayTags = FGameplayTagsBase::Get();
	const AActor* SourceAvatarActor = DamageEffectParams.SourceAbilitySystemComponent->GetAvatarActor();
	
	FGameplayEffectContextHandle EffectContextHandle = DamageEffectParams.SourceAbilitySystemComponent->MakeEffectContext();
	EffectContextHandle.AddSourceObject(SourceAvatarActor);
	
	const FGameplayEffectSpecHandle SpecHandle = DamageEffectParams.SourceAbilitySystemComponent->MakeOutgoingSpec(DamageEffectParams.DamageGameplayEffectClass, DamageEffectParams.AbilityLevel, EffectContextHandle);

	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, DamageEffectParams.DamageType, DamageEffectParams.AppliedCoefficientDamage);

	SetIsBasicAttack(EffectContextHandle, DamageEffectParams.bIsBasicAttack);
	SetDebuffValid(EffectContextHandle, DamageEffectParams.bDebuffValid);
	SetDebuffType(EffectContextHandle, DamageEffectParams.DebuffType);
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, GameplayTags.Debuff_DebuffCoefficient, DamageEffectParams.DebuffCoefficient);
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, GameplayTags.Debuff_Duration, DamageEffectParams.DebuffDuration);
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, GameplayTags.Debuff_Frequency, DamageEffectParams.DebuffFrequency);

	
	DamageEffectParams.TargetAbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data);
	return EffectContextHandle;
}

int32 UBlueprintFunctionLibraryBase::GetXPRewardForClassAndLevel(const UObject* WorldContextObject,
	ECharacterClass CharacterClass, int32 CharacterLevel)
{
	UCharacterClassInfo* CharacterClassInfo = GetCharacterClassInfo(WorldContextObject);
	if (CharacterClassInfo == nullptr) return 0;
	
	const FCharacterClassDefaultInfo& Info = CharacterClassInfo->GetClassDefaultInfo(CharacterClass);
	const float XPReward = Info.XPReward.GetValueAtLevel(CharacterLevel);
	
	return static_cast<int32>(XPReward);
}

int32 UBlueprintFunctionLibraryBase::GetGoldRewardForClassAndLevel(const UObject* WorldContextObject,
	ECharacterClass CharacterClass)
{
	UCharacterClassInfo* CharacterClassInfo = GetCharacterClassInfo(WorldContextObject);
	if (CharacterClassInfo == nullptr) return 0;
	
	const FCharacterClassDefaultInfo& Info = CharacterClassInfo->GetClassDefaultInfo(CharacterClass);
	const float GoldReward = Info.GoldReward;
	
	return GoldReward;
}
