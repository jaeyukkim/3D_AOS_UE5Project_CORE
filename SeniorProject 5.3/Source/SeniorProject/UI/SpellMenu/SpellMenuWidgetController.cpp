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
			OnInitializeStartupAbilities(ASCBase);
		}
		else
		{
			ASCBase->AbilitiesGivenDelegate.AddUObject(this, &USpellMenuWidgetController::OnInitializeStartupAbilities);
		}
	}
}

void USpellMenuWidgetController::OnInitializeStartupAbilities(UAbilitySystemComponentBase* AbilitySystemComponentBase)
{
	//Get information about all given abilities, look up their Ability Info, and broadcast it to widgets.
	if (!AbilitySystemComponentBase->bStartupAbilitiesGiven) return;

	FForEachAbility BroadcastDelegate;
	BroadcastDelegate.BindLambda([this, AbilitySystemComponentBase](const FGameplayAbilitySpec& AbilitySpec)
	{
		
		FAbilityInfoBase Info = AbilityInfo->FindAbilityInfoForTag(AbilitySystemComponentBase->GetAbilityTagFromSpec(AbilitySpec));
		Info.InputTag = AbilitySystemComponentBase->GetInputTagFromSpec(AbilitySpec);
		AbilityInfoDelegate.Broadcast(Info);
	});
	AbilitySystemComponentBase->ForEachAbility(BroadcastDelegate);
}

void USpellMenuWidgetController::UpgradeSpell(const FGameplayTag& AbilityTag)
{
	if (UAbilitySystemComponentBase* ASCBase = Cast<UAbilitySystemComponentBase>(AbilitySystemComponent))
	{
		ASCBase->IncreaseAbilityLevel(AbilityTag);
	}
}

bool USpellMenuWidgetController::CanUpgradeSpell(FGameplayTag AbilityTag)
{
	APlayerStateBase* MyPlayerStateBase = CastChecked<APlayerStateBase>(PlayerState);
	UAbilitySystemComponentBase* ASCBase = Cast<UAbilitySystemComponentBase>(AbilitySystemComponent);

	int32 PlayerLevel = MyPlayerStateBase->GetPlayerLevel();
	int32 SpellLevel = ASCBase->GetAbilityLevel(AbilityTag);

	// 일반 스킬의 경우 스킬레벨 5가 최대
	if(SpellLevel >= 5)
		return false;


	/* 
	 * 궁극기 스킬의 경우 6레벨 ,11레벨, 16레벨 달성 시 업그레이드 가능하며 3레벨이 최고레벨
	 *	ex) 플레이어 레벨 = 8 AND 궁극기 레벨 1 = false
	 *	ex) 플레이어 레벨 = 15  AND 궁극기 레벨 1 = true
	 *	ex) 플레이어 레벨 = 11 AND 궁극기 레벨 1 = true
	 *	ex) 플레이어 레벨 = 18 AND 궁극기 레벨 2 = true
	*/
	
	if(AbilityTag == FGameplayTagsBase::Get().Abilities_AbilityR)
	{
		if(SpellLevel >= 3) return false;
		
		if(PlayerLevel >= 6 && PlayerLevel < 11 && SpellLevel < 1)
		{
			return true;
		}
		else if(PlayerLevel >= 11 && PlayerLevel < 16 && SpellLevel < 2)
		{
			return true;
		}
		else if(PlayerLevel >= 16 && PlayerLevel < 19 && SpellLevel < 3)
		{
			return true;
		}

		return false;
	}
	
	return true;
}
