// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"

#include "SeniorProject/GameSetting/MyGameModeBase.h"

ATurret::ATurret()
{
	Tags.Add(TEXT("Turret"));
	
}

void ATurret::BeginPlay()
{
	Super::BeginPlay();


	RegisterWithGameMode();
	
}

void ATurret::RegisterWithGameMode()
{
	
	if (AMyGameModeBase* GameMode = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		// 게임 모드에 자신을 등록
		GameMode->OnTurretSpawned(this);
	}
}

void ATurret::Die()
{
	if(HasAuthority())
	{
		OnTurretDestroyed.Broadcast(LineTag, TurretLevelTag, TeamName);
	}
	Super::Die();
}
