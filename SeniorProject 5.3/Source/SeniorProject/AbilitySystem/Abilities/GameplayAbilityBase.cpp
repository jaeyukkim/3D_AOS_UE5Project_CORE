// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilityBase.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/AbilitySystem/AbilityTypesBase.h"
#include "SeniorProject/AbilitySystem/AttributeSetBase.h"
#include "Types/SlateVector2.h"

void UGameplayAbilityBase::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                           const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                           const FGameplayEventData* TriggerEventData)
{
	
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

bool UGameplayAbilityBase::CommitAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	FGameplayTagContainer* OptionalRelevantTags)
{

	
	if (CustomCooldownGameplayEffectClass)
	{
		ApplyCustomCooldownClass(Handle);
	}

	return Super::CommitAbility(Handle, ActorInfo, ActivationInfo, OptionalRelevantTags);
	

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

void UGameplayAbilityBase::MulticastPlaySoundAtLocation_Implementation(const FVector& Location, USoundBase* SoundCue)
{
	
	UGameplayStatics::PlaySoundAtLocation(this, SoundCue, Location, FRotator::ZeroRotator);
	
}

void UGameplayAbilityBase::ApplyCustomCooldownClass(const FGameplayAbilitySpecHandle Handle)
{

	if (CustomCooldownGameplayEffectClass == nullptr) return;

	// GameplayTag 및 EffectContext 설정
	FGameplayTagsBase GameplayTags = FGameplayTagsBase::Get();
	UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
	if (!ASC) return;

	FGameplayEffectContextHandle EffectContextHandle = ASC->MakeEffectContext();
	EffectContextHandle.AddSourceObject(GetAvatarActorFromActorInfo());

	// Ability Level에 따른 쿨다운 감소율 설정
	float AbilityLevel = GetAbilityLevel();
	float AbilityHaste = ASC->GetNumericAttribute(FGameplayAttribute(UAttributeSetBase::GetAbilityHasteAttribute()));
	float CooldownReductionPercent = FMath::Clamp(AbilityHaste, 0.f, 0.6f); // 최대 60%로 제한
	float AdjustedCooldown = Cooldown.GetValueAtLevel(AbilityLevel) * (1 - CooldownReductionPercent);

	// Cooldown Effect Spec 생성 및 Duration 설정
	FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(CustomCooldownGameplayEffectClass, AbilityLevel, EffectContextHandle);
	if (SpecHandle.IsValid())
	{
		FGameplayEffectSpec* Spec = SpecHandle.Data.Get();
		if (Spec)
		{
			// CooldownTag가 올바르게 설정되었는지 확인 후 적용
			if (CooldownTag.IsValid())
			{
				Spec->SetSetByCallerMagnitude(CooldownTag, AdjustedCooldown);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("CooldownTag is not valid!"));
			}
            
			// 쿨다운 적용
			ASC->ApplyGameplayEffectSpecToSelf(*Spec);
		}
	}
	
}

void UGameplayAbilityBase::MulticastSpawnParticleAtLocation_Implementation(const FVector& Location,
                                                                           UParticleSystem* ParticleSystem)
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleSystem, Location);
}
