// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "GameplayTagContainer.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/Character/Turret/Turret.h"


AMyGameModeBase::AMyGameModeBase()
{
	
	
}

void AMyGameModeBase::OnTowerDestroyed(const FGameplayTag LineTag, const FGameplayTag TowerLevelTag, const FGameplayTag TeamTag)
{
	uint16 Mask = 0;

	if (LineTag == FGameplayTagsBase::Get().Line_Top)
	{
		if (TowerLevelTag == FGameplayTagsBase::Get().Turret_FirstTurret)
		{
			Mask = 1 << 8;  // 탑 1차 타워
		}
		else if (TowerLevelTag == FGameplayTagsBase::Get().Turret_SecondTurret)
		{
			Mask = 1 << 7;  // 탑 2차 타워
		}
		else if (TowerLevelTag == FGameplayTagsBase::Get().Turret_ThirdTurret)
		{
			Mask = 1 << 6;  // 탑 3차 타워
		}
	}
	else if (LineTag == FGameplayTagsBase::Get().Line_Mid)
	{
		if (TowerLevelTag == FGameplayTagsBase::Get().Turret_FirstTurret)
		{
			Mask = 1 << 5;  // 미드 1차 타워
		}
		else if (TowerLevelTag == FGameplayTagsBase::Get().Turret_SecondTurret)
		{
			Mask = 1 << 4;  // 미드 2차 타워
		}
		else if (TowerLevelTag == FGameplayTagsBase::Get().Turret_ThirdTurret)
		{
			Mask = 1 << 3;  // 미드 3차 타워
		}
	}
	else if (LineTag == FGameplayTagsBase::Get().Line_Bottom)
	{
		if (TowerLevelTag == FGameplayTagsBase::Get().Turret_FirstTurret)
		{
			Mask = 1 << 2;  // 바텀 1차 타워
		}
		else if (TowerLevelTag == FGameplayTagsBase::Get().Turret_SecondTurret)
		{
			Mask = 1 << 1;  // 바텀 2차 타워
		}
		else if (TowerLevelTag == FGameplayTagsBase::Get().Turret_ThirdTurret)
		{
			Mask = 1 << 0;  // 바텀 3차 타워
		}
	}

	// 비트마스크 업데이트
	if (TeamTag == FGameplayTagsBase::Get().TeamName_BlueTeam)
	{
		BlueTeamTowerStates |= Mask;
	}
	else if (TeamTag == FGameplayTagsBase::Get().TeamName_BlueTeam)
	{
		RedTeamTowerStates |= Mask;
	}
	
}

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> Turret;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurret::StaticClass(), Turret);

	for (AActor* TowerActor : Turret)
	{
		if (ATurret* EachTurret = Cast<ATurret>(TowerActor))
		{
			// 타워의 OnTowerDestroyed 델리게이트에 함수 연결
			EachTurret->OnTowerDestroyed.AddDynamic(this, &AMyGameModeBase::OnTowerDestroyed);
		}
	}
}


