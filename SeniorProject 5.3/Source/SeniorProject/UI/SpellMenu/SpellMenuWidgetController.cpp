// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellMenuWidgetController.h"

#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/AbilitySystem/Data/AbilityInfo.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"



void USpellMenuWidgetController::BroadcastInitialValues()
{
	Super::BroadcastInitialValues();

	SpellPointsChanged.Broadcast(GetMyPS()->GetSpellPoints());
	
}

void USpellMenuWidgetController::BindCallbacksToDependencies()
{
	GetMyPS()->OnSpellPointsChangedDelegate.AddLambda([this](int32 SpellPoints)
	{
		SpellPointsChanged.Broadcast(SpellPoints);
	});
	
	if (UAbilitySystemComponentBase* ASCBase = Cast<UAbilitySystemComponentBase>(AbilitySystemComponent))
	{
		if (ASCBase->bStartupAbilitiesGiven)
		{
			OnInitializeStartupAbilities();
		}
		else
		{
			ASCBase->AbilitiesGivenDelegate.AddUObject(this, &USpellMenuWidgetController::OnInitializeStartupAbilities);
		}

		ASCBase->AbilityLevelChanged.AddLambda([this](const FGameplayTag& AbilityTag, int32 NewLevel)
		{
			AbilityLevelChangedDelegate.Broadcast(AbilityTag, NewLevel);
			/* Ability 레벨이 올랐을경우 (스킬을 처음 찍었을 때) */
			if(NewLevel == 1)
			{
				AbilityUnLocked.Broadcast(AbilityTag, NewLevel);
			}
		});
	}
}


void USpellMenuWidgetController::OnInitializeStartupAbilities()
{
	if(GetMyASC() == nullptr) return;
	//Get information about all given abilities, look up their Ability Info, and broadcast it to widgets.
	if (!AbilitySystemComponentBase->bStartupAbilitiesGiven) return;

	if(ICombatInterface* PlayerCharacter = Cast<ICombatInterface>(GetMyASC()->GetAvatarActor()))
	{
		ECharacterClass CharacterClass = PlayerCharacter->GetCharacterClass_Implementation();
		
		FForEachAbility BroadcastDelegate;
		BroadcastDelegate.BindLambda([this, CharacterClass](const FGameplayAbilitySpec& AbilitySpec)
		{
			FAbilityInfoBase Info = AbilityInfo->FindAbilityInfoForTag(AbilitySystemComponentBase->GetAbilityTagFromSpec(AbilitySpec), CharacterClass);
			Info.InputTag = AbilitySystemComponentBase->GetInputTagFromSpec(AbilitySpec);
			AbilityInfoDelegate.Broadcast(Info);
		});
		AbilitySystemComponentBase->ForEachAbility(BroadcastDelegate);
	}

}

void USpellMenuWidgetController::UpgradeSpell(const FGameplayTag& AbilityTag)
{
	if (UAbilitySystemComponentBase* ASCBase = Cast<UAbilitySystemComponentBase>(AbilitySystemComponent))
	{
		ASCBase->ServerSpendSpellPoint(AbilityTag);
	}
}

bool USpellMenuWidgetController::CanUpgradeSpell(FGameplayTag AbilityTag)
{
	APlayerStateBase* MyPlayerStateBase = CastChecked<APlayerStateBase>(PlayerState);
	UAbilitySystemComponentBase* ASCBase = Cast<UAbilitySystemComponentBase>(AbilitySystemComponent);

	int32 PlayerLevel = MyPlayerStateBase->GetPlayerLevel();
	int32 SpellLevel = ASCBase->GetAbilityLevel(AbilityTag);

	// 일반 스킬의 경우 스킬레벨 7이 최대
	if(SpellLevel >= 7)
		return false;


	/* 
	 * 궁극기 스킬의 경우 6레벨 ,11레벨, 16레벨 달성 시 업그레이드 가능하며 3레벨이 최고레벨
	 *	ex) 플레이어 레벨 = 8 AND 궁극기 레벨 1 = false
	 *	ex) 플레이어 레벨 = 9  AND 궁극기 레벨 1 = true
	 *	ex) 플레이어 레벨 = 11 AND 궁극기 레벨 2 = false
	 *	ex) 플레이어 레벨 = 18 AND 궁극기 레벨 3 = true
	*/
	
	if(AbilityTag == FGameplayTagsBase::Get().Abilities_AbilityR)
	{
		if(SpellLevel >= 4) return false;
		
		if(PlayerLevel >= 5 && PlayerLevel < 9 && SpellLevel < 1)
		{
			return true;
		}
		if(PlayerLevel >= 9 && PlayerLevel < 13 && SpellLevel < 2)
		{
			return true;
		}
		else if(PlayerLevel >= 13 && PlayerLevel < 17 && SpellLevel < 3)
		{
			return true;
		}
		else if(PlayerLevel >= 17 && PlayerLevel < 19 && SpellLevel < 4)
		{
			return true;
		}

		return false;
	}
	
	return true;
}
