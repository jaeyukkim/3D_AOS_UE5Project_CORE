// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"

ATurret::ATurret()
{
	Tags.Add(TEXT("Turret"));
	
}

void ATurret::Die()
{
	if(HasAuthority())
	{
		OnTurretDestroyed.Broadcast(LineTag, TurretLevelTag, TeamName);
	}
	Super::Die();
}
