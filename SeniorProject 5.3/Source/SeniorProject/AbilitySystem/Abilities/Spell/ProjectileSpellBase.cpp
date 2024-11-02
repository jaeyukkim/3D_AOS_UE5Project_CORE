// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileSpellBase.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "SeniorProject/AbilitySystem/Abilities/DamageGameplayAbilityBase.h"
#include "SeniorProject/Actor/Projectile/ProjectileBase.h"
#include "SeniorProject/Interface/CombatInterface.h"

void UProjectileSpellBase::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                           const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                           const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
}

void UProjectileSpellBase::SpawnProjectileAimLocation(const FVector& AimLocation)
{
//	FHitResult HitResult;
	
	const bool bIsServer = GetAvatarActorFromActorInfo()->HasAuthority();
	if (!bIsServer) return;
	
	FTransform SpawnTransform;
	SpawnTransform.SetLocation(AimLocation + AdditiveSpawnLocation);
	//TODO: Set the Projectile Rotation

	SpawnAtLocation(SpawnTransform);

	
	
}

void UProjectileSpellBase::SpawnProjectile(const FVector& ProjectileTargetLocation, const FGameplayTag& SocketTag,
	bool bOverridePitch, float PitchOverride)
{
	const bool bIsServer = GetAvatarActorFromActorInfo()->HasAuthority();
	if (!bIsServer) return;

	const FVector SocketLocation = ICombatInterface::Execute_GetCombatSocketLocation(
		GetAvatarActorFromActorInfo(), SocketTag);
	
	FRotator Rotation = (ProjectileTargetLocation - SocketLocation).Rotation();
	if (bOverridePitch)
	{
		Rotation.Pitch = PitchOverride;
	}
	
	FTransform SpawnTransform;
	SpawnTransform.SetLocation(SocketLocation);
	SpawnTransform.SetRotation(Rotation.Quaternion());

	SpawnAtLocation(SpawnTransform);
}

void UProjectileSpellBase::SpawnAtLocation(const FTransform SpawnTransform)
{
	
	AProjectileBase* Projectile = GetWorld()->SpawnActorDeferred<AProjectileBase>(
		ProjectileClass,
		SpawnTransform,
		GetOwningActorFromActorInfo(),
		Cast<APawn>(GetOwningActorFromActorInfo()),
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

	Projectile->DamageEffectParams = MakeDamageEffectParamsFromClassDefaults();
	Projectile->OwnerAvatarActor = GetAvatarActorFromActorInfo();
	Projectile->FinishSpawning(SpawnTransform);
	Projectile->SetOwnerActor(GetAvatarActorFromActorInfo());
	
	
}
