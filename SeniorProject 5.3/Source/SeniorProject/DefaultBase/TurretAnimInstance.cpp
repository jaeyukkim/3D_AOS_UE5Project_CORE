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

	
	FTurretAnimValue val = Turret->TurretAnimValue;
	DistanceToTarget = val.DistanceToTarget;
	TargetLocation = val.TargetLocation;
	OpenPanel = val.OpenPanel;
	Aiming = val.Aiming;
	OpenShield = val.OpenShield;
	bIsRecovering = val.bIsRecovering;
	
	
}





