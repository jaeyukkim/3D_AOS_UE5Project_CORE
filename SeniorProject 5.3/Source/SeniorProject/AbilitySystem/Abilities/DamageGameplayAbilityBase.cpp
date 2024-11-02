// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageGameplayAbilityBase.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "SeniorProject/AbilitySystem/AbilityTypesBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"


void UDamageGameplayAbilityBase::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UDamageGameplayAbilityBase::CauseDamage(AActor* TargetActor)
{
//	if(!UBlueprintFunctionLibraryBase::IsFriends(TargetActor, GetAvatarActorFromActorInfo()))
//	{
		UBlueprintFunctionLibraryBase::ApplyDamageEffect(MakeDamageEffectParamsFromClassDefaults(TargetActor));
//	}
}

FDamageEffectParams UDamageGameplayAbilityBase::MakeDamageEffectParamsFromClassDefaults(AActor* TargetActor) const
{
	FDamageEffectParams Params;

	Params.WorldContextObject = GetAvatarActorFromActorInfo();
	Params.DamageGameplayEffectClass = DamageEffectClass;
	Params.SourceAbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	Params.TargetAbilitySystemComponent = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	Params.bIsBasicAttack = bIsBasicAttack;
	Params.BaseDamage = BaseDamage.GetValueAtLevel(GetAbilityLevel());
	Params.AbilityLevel = GetAbilityLevel();
	Params.ADCoefficient = ADCoefficient;
	Params.APCoefficient = APCoefficient;
	Params.DamageType = DamageType;
	Params.bDebuffValid = bDebuffValid;
	Params.DebuffType = DebuffType;
	Params.DebuffCoefficient = DebuffCoefficient;
	Params.DebuffDuration = DebuffDuration;
	Params.DebuffFrequency = DebuffFrequency;

	
	
	
	if (const UAttributeSetBase* SourceAttributes = Params.SourceAbilitySystemComponent ? Params.SourceAbilitySystemComponent->GetSet<UAttributeSetBase>() : nullptr)
	{
		Params.SourceAttackDamage = SourceAttributes->GetAttackDamage();
		Params.SourceAbilityPower = SourceAttributes->GetAbilityPower();
	}

	Params.AppliedCoefficientDamage = Params.BaseDamage + (Params.SourceAttackDamage * Params.ADCoefficient) + (Params.SourceAbilityPower * Params.APCoefficient);

	
	
	return Params;
	
}


