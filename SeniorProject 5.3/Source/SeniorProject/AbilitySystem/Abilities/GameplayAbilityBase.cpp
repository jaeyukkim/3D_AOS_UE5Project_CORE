// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilityBase.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "Types/SlateVector2.h"

void UGameplayAbilityBase::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                           const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                           const FGameplayEventData* TriggerEventData)
{
	
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UGameplayAbilityBase::ActivateCasting()
{
	if(IsNeedCasting && CastingEffect)
	{
		// GameplayEffect를 대상 액터에게 적용
		FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(CastingEffect, 1);
		SpecHandle.Data->SetSetByCallerMagnitude(FGameplayTagsBase::Get().Abilities_Combat_CastingOn, CastingTime);
		GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	}
}

void UGameplayAbilityBase::SpawnParticleAtLocation(FVector Location, UParticleSystem* ParticleSystem)
{
	if(GetAvatarActorFromActorInfo()->HasAuthority())
	{
		MulticastSpawnParticleAtLocation(Location, ParticleSystem);
	}
}

void UGameplayAbilityBase::MulticastSpawnParticleAtLocation_Implementation(FVector Location,
	UParticleSystem* ParticleSystem)
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleSystem, Location);
}
