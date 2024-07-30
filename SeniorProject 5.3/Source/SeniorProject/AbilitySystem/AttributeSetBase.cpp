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

	InitAttackDamage(10);

}

void UAttributeSetBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	/* 기본 필수 스텟 */
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, AttackDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Exp, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, Armor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, MovementSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, CriticalChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, LifeSteal, COND_None, REPNOTIFY_Always);
	/* 기본 필수 스텟 */

	/* 기본 필수 스텟 추가 정보 */
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, HealthRegeneration, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, ManaRegeneration, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, DropExp, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, NextExp, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetBase, DropGold, COND_None, REPNOTIFY_Always);

	/* 기본 필수 스텟 추가 정보 */
}

void UAttributeSetBase::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());
	}
	if (Attribute == GetManaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxMana());
	}
}


void UAttributeSetBase::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	FEffectProperties Props;
	SetEffectProperties(Data, Props);

	if(Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
	}
	if(Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		SetMana(FMath::Clamp(GetMana(), 0.f, GetMaxMana()));
	}
	if(Data.EvaluatedData.Attribute == GetExpAttribute())
	{
		SetExp(FMath::Clamp(GetExp(), 0.f, GetNextExp()));
	}
}

void UAttributeSetBase::SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props) const
{

	Props.EffectContextHandle = Data.EffectSpec.GetContext();
	Props.SourceASC = Props.EffectContextHandle.GetOriginalInstigatorAbilitySystemComponent();

	if (IsValid(Props.SourceASC) && Props.SourceASC->AbilityActorInfo.IsValid() && Props.SourceASC->AbilityActorInfo->AvatarActor.IsValid())
	{
		Props.SourceAvatarActor = Props.SourceASC->AbilityActorInfo->AvatarActor.Get();
		Props.SourceController = Props.SourceASC->AbilityActorInfo->PlayerController.Get();
		if (Props.SourceController == nullptr && Props.SourceAvatarActor != nullptr)
		{
			if (const APawn* Pawn = Cast<APawn>(Props.SourceAvatarActor))
			{
				Props.SourceController = Pawn->GetController();
			}
		}

		if (Props.SourceController)
		{
			ACharacter* SourceCharacter = Cast<ACharacter>(Props.SourceController->GetPawn());
			if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
			{
				Props.TargetAvatarActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
				Props.TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
				Props.TargetCharacter = Cast<ACharacter>(Props.TargetAvatarActor);
				Props.TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Props.TargetAvatarActor);
			}
		}

	}
}

void UAttributeSetBase::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Health, OldHealth);
}

void UAttributeSetBase::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, MaxHealth, OldMaxHealth);
}

void UAttributeSetBase::OnRep_Mana(const FGameplayAttributeData& OldMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Mana, OldMana);
}

void UAttributeSetBase::OnRep_Armor(const FGameplayAttributeData& OldArmor) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Armor, OldArmor);
}

void UAttributeSetBase::OnRep_MovementSpeed(const FGameplayAttributeData& OldMovementSpeed) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, MovementSpeed, OldMovementSpeed);
}

void UAttributeSetBase::OnRep_CriticalChance(const FGameplayAttributeData& OldCriticalChance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, CriticalChance, OldCriticalChance);
}

void UAttributeSetBase::OnRep_LifeSteal(const FGameplayAttributeData& OldLifeSteal) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, LifeSteal, OldLifeSteal);
}

void UAttributeSetBase::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, MaxMana, OldMaxMana);
}

void UAttributeSetBase::OnRep_AttackDamage(const FGameplayAttributeData& OldAttackDamage) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, AttackDamage, OldAttackDamage);
}

void UAttributeSetBase::OnRep_DropExp(const FGameplayAttributeData& OldDropExp) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, DropExp, OldDropExp);
}

void UAttributeSetBase::OnRep_NextExp(const FGameplayAttributeData& OldNextExp) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, NextExp, OldNextExp);
}

void UAttributeSetBase::OnRep_HealthRegeneration(const FGameplayAttributeData& OldHealthRegeneration) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Mana, HealthRegeneration);
}

void UAttributeSetBase::OnRep_ManaRegeneration(const FGameplayAttributeData& OldManaRegeneration) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, ManaRegeneration, OldManaRegeneration);
}


void UAttributeSetBase::OnRep_Exp(const FGameplayAttributeData& OldExp) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Exp, OldExp);
}

void UAttributeSetBase::OnRep_DropGold(const FGameplayAttributeData& OldDropGold) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, DropGold, OldDropGold);
}



