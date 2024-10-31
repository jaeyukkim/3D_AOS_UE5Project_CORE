// Fill out your copyright notice in the Description page of Project Settings.


#include "TurretAnimInstance.h"

#include "Net/UnrealNetwork.h"
#include "SeniorProject/Character/Turret/Turret.h"

void UTurretAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	DefalutAimLocation = FVector(100.f, 0.f, 250.f);
	
	auto Pawn = TryGetPawnOwner();

	if (::IsValid(Pawn))
	{
		Turret = Cast<ATurret>(Pawn);
	}

	
	if (!IsValid(Turret))
		return;


}


void UTurretAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	if(!IsValid(Turret)) return;

	
	
	bIsDead = Turret->bDead;
	IsHit = Turret->bHitReacting;
	
	AActor* CombatTarget = Turret->CombatTarget;
	if(CombatTarget == nullptr)
	{
		Aiming = false;
		OpenShield = false;
		OpenPanel = false;
	}
	else
	{
		Aiming = true;
		
		PrevTargetLocation = TargetLocation;
		TargetLocation = FMath::VInterpTo(PrevTargetLocation,
			CombatTarget->GetActorLocation(),DeltaSeconds ,10.0f);

		PrevDistanceToTarget = DistanceToTarget;
		DistanceToTarget = FMath::FInterpTo(PrevDistanceToTarget,
			FVector::Dist(CombatTarget->GetActorLocation(), Turret->GetActorLocation()), DeltaSeconds, 10.f);

		if(DistanceToTarget > OpenShieldDistance)
		{
			OpenShield = true;
			OpenPanel = true;
		}
		else
		{
			OpenShield = false;
			OpenPanel = false;
		}
	}
	
	
	
}





