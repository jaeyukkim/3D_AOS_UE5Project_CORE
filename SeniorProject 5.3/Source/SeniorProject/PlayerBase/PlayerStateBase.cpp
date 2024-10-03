// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStateBase.h"

#include "Net/UnrealNetwork.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"

APlayerStateBase::APlayerStateBase()
{
	bReplicates = true;
	
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponentBase>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UAttributeSetBase>("AttributeSet");

	NetUpdateFrequency = 100.0f;
	
}

void APlayerStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(APlayerStateBase, Level);
	DOREPLIFETIME(APlayerStateBase, XP);
	DOREPLIFETIME(APlayerStateBase, SpellPoints);
	
}

UAbilitySystemComponent* APlayerStateBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


void APlayerStateBase::AddToXP(int32 InXP)
{
	XP += InXP;
	OnXPChangedDelegate.Broadcast(XP);
}

void APlayerStateBase::AddToLevel(int32 InLevel)
{
	Level += InLevel;
	OnLevelChangedDelegate.Broadcast(Level);
}

void APlayerStateBase::AddToSpellPoints(int32 InPoints)
{
	SpellPoints += InPoints;
	OnSpellPointsChangedDelegate.Broadcast(SpellPoints);
}

void APlayerStateBase::SetXP(int32 InXP)
{
	XP = InXP;
	OnXPChangedDelegate.Broadcast(XP);
}

void APlayerStateBase::SetLevel(int32 InLevel)
{
	Level = InLevel;
	OnLevelChangedDelegate.Broadcast(Level);
}

void APlayerStateBase::SetSpellPoints(int32 InPoints)
{
	SpellPoints = InPoints;
	OnSpellPointsChangedDelegate.Broadcast(SpellPoints);

}


void APlayerStateBase::OnRep_Level(int32 OldLevel)
{
	OnLevelChangedDelegate.Broadcast(Level);
}

void APlayerStateBase::OnRep_XP(int32 OldXP)
{
	OnXPChangedDelegate.Broadcast(XP);
}

void APlayerStateBase::OnRep_SpellPoints(int32 OldSpellPoints)
{
	OnSpellPointsChangedDelegate.Broadcast(SpellPoints);
}

