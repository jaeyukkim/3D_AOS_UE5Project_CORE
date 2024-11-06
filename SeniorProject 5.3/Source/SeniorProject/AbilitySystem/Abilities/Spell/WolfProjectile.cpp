// Fill out your copyright notice in the Description page of Project Settings.


#include "WolfProjectile.h"

#include "SeniorProject/Actor/Projectile/ProjectileBase.h"
#include "SeniorProject/Interface/CombatInterface.h"


void UWolfProjectile::SpawnWolf(const FVector& ProjectileTargetLocation)
{
	AActor* SpellOwner = GetAvatarActorFromActorInfo();
	if (!SpellOwner) return;

	// 소유자의 전방 벡터 + 바닥에 닿는거 방지
	const FVector OwnerLocation = SpellOwner->GetActorLocation()+FVector(0,0, 20) + (SpellOwner->GetActorForwardVector() * PlusSpawnLocationFromOwner);
	
	
	// 소유자가 바라보는 방향으로 회전 설정
	FRotator Rotation = SpellOwner->GetActorRotation();

	// 스폰 변환 설정
	FTransform SpawnTransform;
	SpawnTransform.SetLocation(OwnerLocation);
	SpawnTransform.SetRotation(Rotation.Quaternion());
	
	AProjectileBase* Projectile = GetWorld()->SpawnActorDeferred<AProjectileBase>(
	ProjectileClass,
	SpawnTransform,
	GetOwningActorFromActorInfo(),
	Cast<APawn>(GetOwningActorFromActorInfo()),
	ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

	Projectile->DamageEffectParams = MakeDamageEffectParamsFromClassDefaults();
	Projectile->OwnerAvatarActor = GetAvatarActorFromActorInfo();
	Projectile->FinishSpawning(SpawnTransform);
	
}

void UWolfProjectile::SpawnRMBWolf(const FVector& ProjectileTargetLocation)
{
	// 서버에서만 실행
	const bool bIsServer = GetAvatarActorFromActorInfo()->HasAuthority();
	if (!bIsServer) return;

	// 오너 캐릭터의 정보를 가져옵니다.
	AActor* SpellOwner = GetAvatarActorFromActorInfo();
	if (!SpellOwner) return;

	// 오너 캐릭터의 머리 위치를 기준으로 1000 높이에서 시작 위치를 설정합니다.
	FVector StartLocation = SpellOwner->GetActorLocation() + FVector(0, 0, 400) + SpellOwner->GetActorForwardVector()*PlusSpawnLocationFromOwner;

	// 투사체의 방향을 계산하여 ProjectileTargetLocation을 향하게 합니다.
	FVector Direction = (ProjectileTargetLocation - StartLocation).GetSafeNormal();

	// 투사체의 스폰 회전을 방향에 맞게 설정합니다.
	FRotator Rotation = Direction.Rotation();

	// 스폰 변환 설정
	FTransform SpawnTransform;
	SpawnTransform.SetLocation(StartLocation);
	SpawnTransform.SetRotation(Rotation.Quaternion());

	// 투사체 스폰 설정
	AProjectileBase* Projectile = GetWorld()->SpawnActorDeferred<AProjectileBase>(
		ProjectileClass,
		SpawnTransform,
		GetOwningActorFromActorInfo(),
		Cast<APawn>(GetOwningActorFromActorInfo()),
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn
	);

	// 투사체의 설정
	Projectile->DamageEffectParams = MakeDamageEffectParamsFromClassDefaults();
	Projectile->OwnerAvatarActor = GetAvatarActorFromActorInfo();
	Projectile->FinishSpawning(SpawnTransform);


	
}
