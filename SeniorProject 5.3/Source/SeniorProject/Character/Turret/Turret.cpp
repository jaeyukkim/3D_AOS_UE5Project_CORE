// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"

void ATurret::Die()
{
	if(HasAuthority())
	{
		OnTowerDestroyed.Broadcast(LineTag, TurretLevelTag, TeamName);
	}
	Super::Die();
}
