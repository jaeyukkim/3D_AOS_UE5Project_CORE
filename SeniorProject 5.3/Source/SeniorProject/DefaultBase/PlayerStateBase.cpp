// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStateBase.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"

APlayerStateBase::APlayerStateBase()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponentBase>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UAttributeSetBase>("AttributeSet");

	NetUpdateFrequency = 100.0f;
	
}

UAbilitySystemComponent* APlayerStateBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
