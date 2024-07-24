// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeSetBase.h"
#include "Net/UnrealNetwork.h"

UAttributeSetBase::UAttributeSetBase()
{
	InitHealth(50);
	InitMaxHealth(100);
	InitMana(50);
	InitMaxMana(100);
	InitExp(10);
	InitNextExp(100);
	InitLevel(1);
	InitAttackRating(10);

}

void UAttributeSetBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Level, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, AttackRating, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, DropExp, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, NextExp, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Exp, COND_None, REPNOTIFY_Always);



}

void UAttributeSetBase::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Health, OldHealth);
}

void UAttributeSetBase::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, MaxHealth, OldMaxHealth);
}

void UAttributeSetBase::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Mana, OldMana);

}

void UAttributeSetBase::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, MaxMana, OldMaxMana);

}

void UAttributeSetBase::OnRep_Level(const FGameplayAttributeData& OldLevel)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Level, OldLevel);
}

void UAttributeSetBase::OnRep_AttackRating(const FGameplayAttributeData& OldAttackRating)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, AttackRating, OldAttackRating);

}

void UAttributeSetBase::OnRep_DropExp(const FGameplayAttributeData& OldDropExp)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, DropExp, OldDropExp);

}

void UAttributeSetBase::OnRep_NextExp(const FGameplayAttributeData& OldNextExp)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, NextExp, OldNextExp);

}

void UAttributeSetBase::OnRep_Exp(const FGameplayAttributeData& OldExp)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Exp, OldExp);

}


