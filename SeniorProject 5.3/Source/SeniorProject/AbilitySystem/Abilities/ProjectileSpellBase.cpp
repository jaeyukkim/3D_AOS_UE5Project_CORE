// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileSpellBase.h"
#include "SeniorProject/Interface/CombatInterface.h"
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

	//TODO: Give the Projectile a Gameplay Effect Spec for causing Damage.

	Projectile->FinishSpawning(SpawnTransform);
	
}
