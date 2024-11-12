// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystemComponentBase.h"

#include "SeniorProject/AbilitySystem/Abilities/GameplayAbilityBase.h"
#include "SeniorProject/GameplayTagsBase.h"
#include "SeniorProject/Interface/CombatInterface.h"
#include "SeniorProject/Interface/PlayerInterface.h"
#include "SeniorProject/UI/ItemMenu/ItemMenuWidgetController.h"

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
	AbilitiesGivenDelegate.Broadcast();
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

void UAbilitySystemComponentBase::UpdateForEachItem()
{
	if(!GetAvatarActor()->Implements<UPlayerInterface>()) return;

	TArray<FItemInformation> Information = IPlayerInterface::Execute_GetAllItem(GetAvatarActor());
	for(FItemInformation Info : Information)
	{
		OwnedItemChangedDelegate.Broadcast(Info);
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
		AbilitiesGivenDelegate.Broadcast();
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

void UAbilitySystemComponentBase::ApplyDebuffEffectSelf(TSubclassOf<UGameplayEffect> DebuffEffectClass,
	const FGameplayTag& DebuffTag, const float DebuffCoefficient, const float DebuffDuration, const float DebuffFrequency)
{
	if(DebuffEffectClass == nullptr) return;

	FGameplayTagsBase GameplayTags = FGameplayTagsBase::Get();
	
	FGameplayEffectContextHandle EffectContextHandle = MakeEffectContext();
	EffectContextHandle.AddSourceObject(GetAvatarActor());
	

	FGameplayEffectSpecHandle SpecHandle = MakeOutgoingSpec(DebuffEffectClass, 1, EffectContextHandle);
	//SpecHandle.Data.Get()->SetDuration(DebuffDuration, false);
	//SpecHandle.Data.Get()->Period = DebuffFrequency;
	//SpecHandle.Data.Get()->Def.Get()->Period = FScalableFloat(DebuffFrequency);
	SpecHandle.Data->SetSetByCallerMagnitude(DebuffTag, DebuffCoefficient);
	SpecHandle.Data->SetSetByCallerMagnitude(GameplayTags.Debuff_Frequency, DebuffFrequency);
	SpecHandle.Data->SetSetByCallerMagnitude(GameplayTags.Debuff_Duration, DebuffDuration);


	ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	
}



void UAbilitySystemComponentBase::ServerSellItem_Implementation(const FItemInformation& ClickedItemInfo)
{
	if (!GetAvatarActor()->Implements<UPlayerInterface>()) return;
	

	if(IPlayerInterface::Execute_DeleteItem(GetAvatarActor(), ClickedItemInfo.InputTag))
	{
		FGameplayTagContainer InputTag;
		InputTag.AddTag(ClickedItemInfo.InputTag);
		int32 RemovedEffects = RemoveActiveEffectsWithTags(InputTag);
		IPlayerInterface::Execute_AddToGold(GetAvatarActor(), ClickedItemInfo.ItemPrice);


		if(ClickedItemInfo.ItemAbility != nullptr)
		{
	
			TArray<FGameplayAbilitySpec*> FoundAbilities = GetSpecFromAbilityTag(ClickedItemInfo.ItemTag);

			for (FGameplayAbilitySpec* AbilitySpec : FoundAbilities)
			{
				if (AbilitySpec && AbilitySpec->DynamicAbilityTags.HasTagExact(ClickedItemInfo.InputTag))
				{
					// StartupInputTag가 ClickedItemInfo.InputTag와 일치하는 능력만 제거
					ClearAbility(AbilitySpec->Handle);
				}
			}
		}
		
		
		/* 빈 아이템으로 다시 교체 */
	//	FItemInformation ItemInfo = FItemInformation();
	//	ItemInfo.InputTag = ItemInputTag;
		//IPlayerInterface::Execute_SortingItem(GetAvatarActor());
	//	ClientUpdateItem(ItemInfo);
	}
	
}


void UAbilitySystemComponentBase::ChangeGrantedTagToEffect_Implementation(FGameplayTag PrevTag, FGameplayTag NextTag, TSubclassOf<UGameplayEffect> Effect)
{

	
	FGameplayTagContainer InputTag;
	InputTag.AddTag(PrevTag);
	RemoveActiveEffectsWithTags(InputTag);
	
	FGameplayEffectContextHandle ItemEffectContextHandle = MakeEffectContext();
	ItemEffectContextHandle.AddSourceObject(GetAvatarActor());
	FGameplayEffectSpecHandle ItemSpecHandle = MakeOutgoingSpec(Effect, 1, ItemEffectContextHandle);
	ItemSpecHandle.Data->DynamicGrantedTags.AddTag(NextTag);
	ItemSpecHandle.Data->AddDynamicAssetTag(NextTag);
	ApplyGameplayEffectSpecToSelf(*ItemSpecHandle.Data.Get());
	
}

void UAbilitySystemComponentBase::ServerBuyItem_Implementation(FItemInformation ClickedItemInfo)
{
	if (!GetAvatarActor()->Implements<UPlayerInterface>() || IPlayerInterface::Execute_GetGold(GetAvatarActor()) < ClickedItemInfo.ItemPrice) return;
	if(ClickedItemInfo.ItemEffect == nullptr) return;

	
	
	/* 비어있는 아이템 슬롯 반환 */
	FGameplayTag EmptyItemSlotTag = IPlayerInterface::Execute_GetEmptyItemSlot(GetAvatarActor());

	/* 비어있는 아이템 슬롯이 없을 경우 */
	if(EmptyItemSlotTag == FGameplayTagsBase::Get().Input_NONE) return;

	ClickedItemInfo.InputTag = EmptyItemSlotTag;
	
	FGameplayEffectContextHandle ItemEffectContextHandle = MakeEffectContext();
	ItemEffectContextHandle.AddSourceObject(GetAvatarActor());
	FGameplayEffectSpecHandle ItemSpecHandle = MakeOutgoingSpec(ClickedItemInfo.ItemEffect, 1, ItemEffectContextHandle);
	ItemSpecHandle.Data->DynamicGrantedTags.AddTag(ClickedItemInfo.InputTag);
	ItemSpecHandle.Data->AddDynamicAssetTag(ClickedItemInfo.InputTag);
	ApplyGameplayEffectSpecToSelf(*ItemSpecHandle.Data.Get());

	if(ClickedItemInfo.ItemAbility != nullptr)
	{
		// ItemAbility의 기본 객체에서 StartupInputTag 설정
		if (UGameplayAbilityBase* ItemAbilityObject = Cast<UGameplayAbilityBase>(ClickedItemInfo.ItemAbility->GetDefaultObject()))
		{
			ItemAbilityObject->StartupInputTag = ClickedItemInfo.InputTag;
			
			TArray<TSubclassOf<UGameplayAbility>> AbilitiesToAdd;
			AbilitiesToAdd.Add(ClickedItemInfo.ItemAbility);  // 설정된 Ability 추가
			AddCharacterAbility(AbilitiesToAdd);
		}
		
	}

	
	
	
	
	IPlayerInterface::Execute_AddToItem(GetAvatarActor(), ClickedItemInfo);
	IPlayerInterface::Execute_AddToGold(GetAvatarActor(), -ClickedItemInfo.ItemPrice);
	ClientUpdateItem(ClickedItemInfo);
	
}

void UAbilitySystemComponentBase::ClientUpdateItem_Implementation(const FItemInformation& ClickedItemInfo)
{
	OwnedItemChangedDelegate.Broadcast(ClickedItemInfo);
}




const FItemInformation UAbilitySystemComponentBase::GetPlayerItem(FGameplayTag ItemInputTag)
{
	if(!GetAvatarActor()->Implements<UPlayerInterface>()) return FItemInformation();

	TArray<FItemInformation> ItemInformations = IPlayerInterface::Execute_GetAllItem(GetAvatarActor());

	for(FItemInformation Info : ItemInformations)
	{
		if(Info.InputTag.MatchesTag(ItemInputTag))
		{
			return Info;
		}
	}


	return FItemInformation();
}

const TArray<FItemInformation> UAbilitySystemComponentBase::GetAllPlayerItem()
{
	if(!GetAvatarActor()->Implements<UPlayerInterface>())
	{
		TArray<FItemInformation> Info;
		return Info;
	}
	
	return IPlayerInterface::Execute_GetAllItem(GetAvatarActor());
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
	
	if (!GetAvatarActor()->Implements<UPlayerInterface>() && IPlayerInterface::Execute_GetSpellPoints(GetAvatarActor()) <= 0)
	{
		return;
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
