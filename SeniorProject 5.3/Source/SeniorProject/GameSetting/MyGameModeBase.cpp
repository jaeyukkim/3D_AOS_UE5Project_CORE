// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"


#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/Actor/Gameplay/Spawner.h"
#include "SeniorProject/Character/Turret/Turret.h"
#include "SeniorProject/Interface/GameRuleInterface.h"


AMyGameModeBase::AMyGameModeBase()
{
	
	
}

void AMyGameModeBase::StartPlay()
{
	Super::StartPlay();
}


void AMyGameModeBase::OnTurretDestroyed(const FGameplayTag LineTag, const FGameplayTag TurretLevelTag, const FGameplayTag TeamTag)
{
	// 전달받은 태그에 기반하여 타워 상태 업데이트
	UpdateTurretStates(LineTag, TurretLevelTag, TeamTag);

	UpdateMinionTargets.Broadcast();
}

void AMyGameModeBase::UpdateTurretStates(FGameplayTag LineTag, FGameplayTag TurretLevelTag, FGameplayTag TeamTag)
{
	uint16 Mask = 0;

	if (LineTag == FGameplayTagsBase::Get().GameRule_Line_Top)
	{
		if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_FirstTurret)
		{
			Mask = 1 << 12;  // 탑 1차 타워
		}
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_SecondTurret)
		{
			Mask = 1 << 11;  // 탑 2차 타워
		}
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_ThirdTurret)
		{
			Mask = 1 << 10;  // 탑 3차 타워
		}
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_TopInhibitor)
		{
			Mask = 1 << 9;  // 탑 억제기 타워
		}
	}
	else if (LineTag == FGameplayTagsBase::Get().GameRule_Line_Mid)
	{
		if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_FirstTurret)
		{
			Mask = 1 << 8;  // 미드 1차 타워
		}
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_SecondTurret)
		{
			Mask = 1 << 7;  // 미드 2차 타워
		}
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_ThirdTurret)
		{
			Mask = 1 << 6;  // 미드 3차 타워
		}
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_MidInhibitor)
		{
			Mask = 1 << 5;  // 미드 억제기 타워
		}
	}
	else if (LineTag == FGameplayTagsBase::Get().GameRule_Line_Bottom)
	{
		if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_FirstTurret)
		{
			Mask = 1 << 4;  // 바텀 1차 타워
		}
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_SecondTurret)
		{
			Mask = 1 << 3;  // 바텀 2차 타워
		}
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_ThirdTurret)
		{
			Mask = 1 << 2;  // 바텀 3차 타워
		}
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_BottomInhibitor)
		{
			Mask = 1 << 1;  // 바텀 억제기 타워
		}
	}

	// 비트마스크 업데이트
	if (TeamTag == FGameplayTagsBase::Get().GameRule_TeamName_BlueTeam)
	{
		BlueTeamTurretStates |= Mask;
	}
	else if (TeamTag == FGameplayTagsBase::Get().GameRule_TeamName_RedTeam)
	{
		RedTeamTurretStates |= Mask;
	}
}

FGameplayTag AMyGameModeBase::GetValidTargetTurret(FGameplayTag TeamTag, FGameplayTag LineTag)
{
	 const uint16 TurretStates = (TeamTag == FGameplayTagsBase::Get().GameRule_TeamName_BlueTeam) ? RedTeamTurretStates : BlueTeamTurretStates;

    // 라인에 따른 비트 위치 및 TowerLevelTag 반환
    if (LineTag == FGameplayTagsBase::Get().GameRule_Line_Top)
    {
        // 탑 라인
        if (!(TurretStates & (1 << 12)))  // 탑 1차 타워가 파괴되지 않은 경우
        {
            return FGameplayTagsBase::Get().GameRule_Turret_FirstTurret;
        }
        else if (!(TurretStates & (1 << 11)))  // 탑 2차 타워가 파괴되지 않은 경우
        {
            return FGameplayTagsBase::Get().GameRule_Turret_SecondTurret;
        }
        else if (!(TurretStates & (1 << 10)))  // 탑 3차 타워가 파괴되지 않은 경우
        {
            return FGameplayTagsBase::Get().GameRule_Turret_ThirdTurret;
        }
    	else if (!(TurretStates & (1 << 9)))  // 탑 억제기 타워가 파괴되지 않은 경우
    	{
    		return FGameplayTagsBase::Get().GameRule_Turret_TopInhibitor;
    	}
    }
    else if (LineTag == FGameplayTagsBase::Get().GameRule_Line_Mid)
    {
        // 미드 라인
        if (!(TurretStates & (1 << 8)))  // 미드 1차 타워가 파괴되지 않은 경우
        {
        	return FGameplayTagsBase::Get().GameRule_Turret_FirstTurret;
        }
        else if (!(TurretStates & (1 << 7)))  // 미드 2차 타워가 파괴되지 않은 경우
        {
            return FGameplayTagsBase::Get().GameRule_Turret_SecondTurret;
        }
        else if (!(TurretStates & (1 << 6)))  // 미드 3차 타워가 파괴되지 않은 경우
        {
            return FGameplayTagsBase::Get().GameRule_Turret_ThirdTurret;
        }
    	else if (!(TurretStates & (1 << 5)))  // 미드 억제기 타워가 파괴되지 않은 경우
    	{
    		return FGameplayTagsBase::Get().GameRule_Turret_MidInhibitor;
    	}
    }
    else if (LineTag == FGameplayTagsBase::Get().GameRule_Line_Bottom)
    {
        // 바텀 라인
        if (!(TurretStates & (1 << 4)))  // 바텀 1차 타워가 파괴되지 않은 경우
        {
        	return FGameplayTagsBase::Get().GameRule_Turret_FirstTurret;
        }
        else if (!(TurretStates & (1 << 3)))  // 바텀 2차 타워가 파괴되지 않은 경우
        {
            return FGameplayTagsBase::Get().GameRule_Turret_SecondTurret;
        }
        else if (!(TurretStates & (1 << 2)))  // 바텀 3차 타워가 파괴되지 않은 경우
        {
            return FGameplayTagsBase::Get().GameRule_Turret_ThirdTurret;
        }
    	else if (!(TurretStates & (1 << 1)))  // 미드 억제기 타워가 파괴되지 않은 경우
    	{
    		return FGameplayTagsBase::Get().GameRule_Turret_BottomInhibitor;
    	}
    }

    // 모든 타워가 파괴된 경우 nullptr 또는 비어 있는 태그 반환
    return FGameplayTag();
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
			EachTurret->OnTurretDestroyed.AddDynamic(this, &AMyGameModeBase::OnTurretDestroyed);
		}
	}

	GetWorld()->GetTimerManager().SetTimer(InitialSpawnTimerHandle, this, &AMyGameModeBase::SpawnMinion, InitialSpawnTime, false);
	
	
}

void AMyGameModeBase::SpawnMinion()
{
	
	// 모든 스포너를 찾습니다.
	TArray<AActor*> Spawners;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawner::StaticClass(), Spawners);

	for (AActor* Spawner : Spawners)
	{
		if (ASpawner* EachSpawner = Cast<ASpawner>(Spawner))
		{
			// 스포너가 구현한 인터페이스를 통해 팀과 라인을 가져옵니다.
			if (IGameRuleInterface* EachSpawnerInterface = Cast<IGameRuleInterface>(EachSpawner))
			{
				FGameplayTag SpawnerTeam = EachSpawnerInterface->GetTeamName();
				FGameplayTag SpawnerLine = EachSpawnerInterface->GetLineTag();

				// 억제기가 파괴되었는지 확인합니다.
				if (IsInhibitorDestroyed(SpawnerTeam, SpawnerLine))
				{
					// 억제기가 파괴되었다면, 해당 스포너에 슈퍼 미니언을 생성하도록 지시합니다.
					EachSpawner->OnSuperMinionSpawn.Broadcast();
				}
				else if (SiegeMinionSpawnCycle % 3 == 0)
				{
					// SiegeMinionSpawnCycle 주기에 따라 공성 미니언을 생성합니다.
					EachSpawner->OnSiegeMinionSpawn.Broadcast();
				}
				else
				{
					// 기본 미니언 생성 델리게이트를 호출합니다.
					EachSpawner->OnMinionSpawn.Broadcast();
				}
			}
		}
	}

	// 30초 후에 다시 호출되도록 타이머를 설정합니다.
	GetWorld()->GetTimerManager().SetTimer(RecurringSpawnTimerHandle, this, &AMyGameModeBase::SpawnMinion, RecurringSpawnTime, false);

	// 공성미니언 생성 주기 카운터 증가
	SiegeMinionSpawnCycle++;
	
}

bool AMyGameModeBase::IsInhibitorDestroyed(FGameplayTag TeamTag, FGameplayTag LineTag) const
{
	const uint16 TurretStates = (TeamTag == FGameplayTagsBase::Get().GameRule_TeamName_BlueTeam) ? RedTeamTurretStates : BlueTeamTurretStates;

	if (LineTag == FGameplayTagsBase::Get().GameRule_Line_Top)
	{
		return (TurretStates & (1 << 9)) != 0;  // 탑 억제기 타워 상태 확인
	}
	else if (LineTag == FGameplayTagsBase::Get().GameRule_Line_Mid)
	{
		return (TurretStates & (1 << 5)) != 0;  // 미드 억제기 타워 상태 확인
	}
	else if (LineTag == FGameplayTagsBase::Get().GameRule_Line_Bottom)
	{
		return (TurretStates & (1 << 1)) != 0;  // 바텀 억제기 타워 상태 확인
	}

	return false;
}




