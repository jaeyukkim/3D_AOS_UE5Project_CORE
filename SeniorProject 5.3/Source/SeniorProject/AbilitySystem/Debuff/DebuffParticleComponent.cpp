// Fill out your copyright notice in the Description page of Project Settings.


#include "DebuffParticleComponent.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
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
