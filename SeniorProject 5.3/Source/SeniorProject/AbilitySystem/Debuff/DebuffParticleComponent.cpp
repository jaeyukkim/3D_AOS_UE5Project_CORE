// Fill out your copyright notice in the Description page of Project Settings.


#include "DebuffParticleComponent.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/Interface/CombatInterface.h"

UDebuffParticleComponent::UDebuffParticleComponent()
{
	bAutoActivate = false;

}

void UDebuffParticleComponent::BeginPlay()
{
	Super::BeginPlay();

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(GetOwner());
	if (UAbilitySystemComponent* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetOwner()))
	{
		ASC->RegisterGameplayTagEvent(DebuffTag, EGameplayTagEventType::AnyCountChange).AddUObject(this, &UDebuffParticleComponent::DebuffTagChanged);
	}
	if (CombatInterface)
	{
		CombatInterface->GetOnASCRegisteredDelegate().AddWeakLambda(this, [this](UAbilitySystemComponent* InASC)
		{
			InASC->RegisterGameplayTagEvent(DebuffTag, EGameplayTagEventType::AnyCountChange).AddUObject(this, &UDebuffParticleComponent::DebuffTagChanged);
		});
	}
	
}

void UDebuffParticleComponent::DebuffTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	
	//버프일 떼 버프는 스택이 최대 1임
	if (DebuffTag.MatchesTag(TagsBase.Buff_Type))
	{
		if (NewCount > 0)
		{
			DeactivateImmediate();
			Activate();
		}
		else
		{
			Deactivate();
		}
		
	}

	//디버프일때 디버프는 중첩 가능함
	else
	{
		if (NewCount > PrevCount)
		{
			DeactivateImmediate();
			Activate();
		}
		else
		{
			Deactivate();
		}
		PrevCount = NewCount;
	}
	
}
