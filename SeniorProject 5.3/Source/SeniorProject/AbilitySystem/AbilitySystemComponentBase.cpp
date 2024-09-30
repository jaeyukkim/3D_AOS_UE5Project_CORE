// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystemComponentBase.h"

#include "SeniorProject/AbilitySystem/Abilities/GameplayAbilityBase.h"
#include "SeniorProject/GameplayTagsBase.h"
#include "SeniorProject/Interface/PlayerInterface.h"

void UAbilitySystemComponentBase::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UAbilitySystemComponentBase::ClientEffectApplied);
	
}


/*
 *
 * Abilities_AbilityQ, Abilities_AbilityRMB, Abilities_AbilityR 스킬의 경우 기본적으로 잠김 상태에서 게임 시작
 */
void UAbilitySystemComponentBase::AddCharacterAbility(TArray<TSubclassOf<UGameplayAbility>>& StartupAbilities)
{
	
	for(const TSubclassOf<UGameplayAbility> ability : StartupAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(ability, 0);

		if(const UGameplayAbilityBase* AbilityBase = Cast<UGameplayAbilityBase>(AbilitySpec.Ability))
		{
			if (! AbilitySpec.Ability)  return;

			if(AbilitySpec.Ability->AbilityTags.HasTag(FGameplayTagsBase::Get().Abilities_AbilityQ) ||
				AbilitySpec.Ability->AbilityTags.HasTag(FGameplayTagsBase::Get().Abilities_AbilityRMB) ||
				AbilitySpec.Ability->AbilityTags.HasTag(FGameplayTagsBase::Get().Abilities_AbilityR))
			{
				AbilitySpec.DynamicAbilityTags.AddTag(FGameplayTagsBase::Get().Abilities_Status_Locked);
			}


			AbilitySpec.DynamicAbilityTags.AddTag(AbilityBase->StartupInputTag);
			GiveAbility(AbilitySpec);
		}
	}
	bStartupAbilitiesGiven = true;
	AbilitiesGivenDelegate.Broadcast(this);
}


void UAbilitySystemComponentBase::AddCharacterPassiveAbilities(
	const TArray<TSubclassOf<UGameplayAbility>>& StartupPassiveAbilities)
{
	for (const TSubclassOf<UGameplayAbility> AbilityClass : StartupPassiveAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass, 1);
		GiveAbilityAndActivateOnce(AbilitySpec);
	}
}


void UAbilitySystemComponentBase::AbilityInputTagHeld(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) return;
	FScopedAbilityListLock ActiveScopeLoc(*this);
	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag) && !AbilitySpec.DynamicAbilityTags.HasTagExact(FGameplayTagsBase::Get().Abilities_Status_Locked))
		{
			AbilitySpecInputPressed(AbilitySpec);
			if (!AbilitySpec.IsActive())
			{
				TryActivateAbility(AbilitySpec.Handle);
			}
		}
	}
	
}

void UAbilitySystemComponentBase::AbilityInputTagReleased(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) return;
	FScopedAbilityListLock ActiveScopeLoc(*this);
	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag) && AbilitySpec.IsActive() && !AbilitySpec.DynamicAbilityTags.HasTagExact(FGameplayTagsBase::Get().Abilities_Status_Locked))
		{
			AbilitySpecInputReleased(AbilitySpec);
			InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputReleased, AbilitySpec.Handle, AbilitySpec.ActivationInfo.GetActivationPredictionKey());
		}
	}
}

void UAbilitySystemComponentBase::AbilityInputTagPressed(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) return;
	FScopedAbilityListLock ActiveScopeLoc(*this);
	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag) && !AbilitySpec.DynamicAbilityTags.HasTagExact(FGameplayTagsBase::Get().Abilities_Status_Locked))
		{
			AbilitySpecInputPressed(AbilitySpec);
			if (AbilitySpec.IsActive())
			{
				InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputPressed, AbilitySpec.Handle, AbilitySpec.ActivationInfo.GetActivationPredictionKey());
			}
		}
	}
}

void UAbilitySystemComponentBase::ForEachAbility(const FForEachAbility& Delegate)
{
	FScopedAbilityListLock ActiveScopeLock(*this);
	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (!Delegate.ExecuteIfBound(AbilitySpec))
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to execute delegate in %hs"), __FUNCTION__);
		}
	}
}

FGameplayTag UAbilitySystemComponentBase::GetAbilityTagFromSpec(const FGameplayAbilitySpec& AbilitySpec)
{
	if (AbilitySpec.Ability)
	{
		for (FGameplayTag Tag : AbilitySpec.Ability.Get()->AbilityTags)
		{
			if (Tag.MatchesTag(FGameplayTag::RequestGameplayTag(FName("Abilities"))))
			{
				return Tag;
			}
		}
	}
	return FGameplayTag();
}


FGameplayTag UAbilitySystemComponentBase::GetInputTagFromSpec(const FGameplayAbilitySpec& AbilitySpec)
{
	for (FGameplayTag Tag : AbilitySpec.DynamicAbilityTags)
	{
		if (Tag.MatchesTag(FGameplayTag::RequestGameplayTag(FName("Input"))))
		{
			return Tag;
		}
	}
	return FGameplayTag();
}

FGameplayTag UAbilitySystemComponentBase::GetStatusFromSpec(const FGameplayAbilitySpec& AbilitySpec)
{
	for (FGameplayTag StatusTag : AbilitySpec.DynamicAbilityTags)
	{
		if (StatusTag.MatchesTag(FGameplayTag::RequestGameplayTag(FName("Abilities.Status"))))
		{
			return StatusTag;
		}
	}
	return FGameplayTag();
}


void UAbilitySystemComponentBase::OnRep_ActivateAbilities()
{
	Super::OnRep_ActivateAbilities();
	
	if (!bStartupAbilitiesGiven)
	{
		bStartupAbilitiesGiven = true;
		AbilitiesGivenDelegate.Broadcast(this);
	}
}

int32 UAbilitySystemComponentBase::GetAbilityLevel(FGameplayTag AbilityTag)
{
	
	
	const TArray<FGameplayAbilitySpec>& AllAbilities = GetActivatableAbilities();

	for (const FGameplayAbilitySpec& Spec : AllAbilities)
	{
		if (Spec.Ability && Spec.Ability->AbilityTags.HasTag(AbilityTag))
		{
			return Spec.Level;
		}
	}

	

	return -1;
}


void UAbilitySystemComponentBase::IncreaseAbilityLevel(FGameplayTag AbilityTag)
{

	if (GetAvatarActor()->Implements<UPlayerInterface>())
	{
		if (IPlayerInterface::Execute_GetSpellPoints(GetAvatarActor()) > 0)
		{
			ServerSpendSpellPoint(AbilityTag);
		}
	}
	
}

TArray<FGameplayAbilitySpec*> UAbilitySystemComponentBase::GetSpecFromAbilityTag(const FGameplayTag& AbilityTag)
{
	FScopedAbilityListLock ActiveScopeLoc(*this);

	TArray<FGameplayAbilitySpec*> Specs;
	
	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		for (FGameplayTag Tag : AbilitySpec.Ability.Get()->AbilityTags)
		{
			if (Tag.MatchesTag(AbilityTag))
			{
				Specs.Add(&AbilitySpec);
			}
		}
	}

	
	return Specs;
}




void UAbilitySystemComponentBase::ServerSpendSpellPoint_Implementation(const FGameplayTag& AbilityTag)
{

	
	// 서버에서만 실행할 로직
	FString DebugMessage = FString::Printf(TEXT("Spell point spent for ability: %s"), *AbilityTag.ToString());
	
	if (GetAvatarActor()->HasAuthority())  // 서버에서 실행 중인지 확인
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, DebugMessage);
	}

	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, DebugMessage);
	}
	
	TArray<FGameplayAbilitySpec*> MatchedAbilitySpecs = GetSpecFromAbilityTag(AbilityTag);
	
	for(FGameplayAbilitySpec* AbilitySpec : MatchedAbilitySpecs)
	{
		if (AbilitySpec)
		{
			
			const FGameplayTagsBase GameplayTags = FGameplayTagsBase::Get();
			FGameplayTag Status = GetStatusFromSpec(*AbilitySpec);
			if (Status.MatchesTagExact(GameplayTags.Abilities_Status_Locked))
			{
				AbilitySpec->DynamicAbilityTags.RemoveTag(GameplayTags.Abilities_Status_Locked);
			
			}
		
			AbilitySpec->Level += 1;
		
			ClientUpdateAbilityLevel(AbilityTag, AbilitySpec->Level);
			MarkAbilitySpecDirty(*AbilitySpec);
			
		}
	}
	
	if (GetAvatarActor()->Implements<UPlayerInterface>())
	{
		IPlayerInterface::Execute_AddToSpellPoints(GetAvatarActor(), -1);
	}
	
}

void UAbilitySystemComponentBase::ClientUpdateAbilityLevel_Implementation(const FGameplayTag& AbilityTag, int32 AbilityLevel)
{
	AbilityLevelChanged.Broadcast(AbilityTag, AbilityLevel);
}

void UAbilitySystemComponentBase::BroadCastAttackEnd_Implementation()
{
	AttackEndSignature.Broadcast();
}

void UAbilitySystemComponentBase::ClientEffectApplied_Implementation(UAbilitySystemComponent* AbilitySystemComponent,
                                                                     const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
{
	FGameplayTagContainer TagContainer;
	EffectSpec.GetAllGrantedTags(TagContainer);
	EffectAssetTags.Broadcast(TagContainer);
}
