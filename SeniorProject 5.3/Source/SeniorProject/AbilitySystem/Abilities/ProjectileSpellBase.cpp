// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileSpellBase.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "DamageGameplayAbilityBase.h"
#include "SeniorProject/Actor/ProjectileBase.h"

void UProjectileSpellBase::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	
	
}

void UProjectileSpellBase::SpawnProjectile(const FVector& AimLocation)
{
//	FHitResult HitResult;
	
	const bool bIsServer = GetAvatarActorFromActorInfo()->HasAuthority();
	if (!bIsServer) return;

//	ICombatInterface* CombatInterface = Cast<ICombatInterface>(GetAvatarActorFromActorInfo());
//	CombatInterface->GetAimHitResult(AbilityDistance, HitResult);
	
	

	FTransform SpawnTransform;
	SpawnTransform.SetLocation(AimLocation + FVector(0.0f, 0.0f, 3000.0f));
	//TODO: Set the Projectile Rotation

	AProjectileBase* Projectile = GetWorld()->SpawnActorDeferred<AProjectileBase>(
		ProjectileClass,
		SpawnTransform,
		GetOwningActorFromActorInfo(),
		Cast<APawn>(GetOwningActorFromActorInfo()),
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn);


	const UAbilitySystemComponent* SourceASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetAvatarActorFromActorInfo());
	const FGameplayEffectSpecHandle SpecHandle = SourceASC->MakeOutgoingSpec(DamageEffectClass, GetAbilityLevel(), SourceASC->MakeEffectContext());

	const FGameplayTagsBase GameplayTags = FGameplayTagsBase::Get();

	for (auto& Pair : DamageTypes)
	{
		const float ScaledDamage = Pair.Value.GetValueAtLevel(GetAbilityLevel());
		UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, Pair.Key, ScaledDamage);
	}

	
	
	Projectile->DamageEffectSpecHandle = SpecHandle;
	
	//TODO: Give the Projectile a Gameplay Effect Spec for causing Damage.

	Projectile->FinishSpawning(SpawnTransform);
	
}
