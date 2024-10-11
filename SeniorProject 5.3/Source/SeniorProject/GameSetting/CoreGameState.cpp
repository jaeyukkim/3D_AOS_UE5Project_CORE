// Fill out your copyright notice in the Description page of Project Settings.


#include "CoreGameState.h"
#include "SeniorProject/Character/Turret/Turret.h"
#include "GameplayTagContainer.h"
#include "SeniorProject/GamePlayTagsBase.h"

ACoreGameState::ACoreGameState()
{
	// 포탑은 모두 파괴된 상태로 초기화됨
	BlueTeamTurretStates = ~BlueTeamTurretStates;
	RedTeamTurretStates = ~RedTeamTurretStates;
}

void ACoreGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void ACoreGameState::UpdateTopScore(ABlasterPlayerState* ScoringPlayer)
{
}

void ACoreGameState::RedTeamScores()
{
}

void ACoreGameState::BlueTeamScores()
{
}

void ACoreGameState::OnRep_RedTeamScore()
{
}

void ACoreGameState::OnRep_BlueTeamScore()
{
}



void ACoreGameState::UpdateTurretStates(FGameplayTag LineTag, FGameplayTag TurretLevelTag, FGameplayTag TeamTag, bool bIsDestroy)
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
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_Inhibitor)
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
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_Inhibitor)
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
		else if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_Inhibitor)
		{
			Mask = 1 << 1;  // 바텀 억제기 타워
		}
	}

	if (TurretLevelTag == FGameplayTagsBase::Get().GameRule_Turret_Nexus)
	{
		Mask = 1 << 0;  // 넥서스
	}

	// 비트마스크 업데이트 (파괴 상태 여부에 따라)
	if (TeamTag == FGameplayTagsBase::Get().GameRule_TeamName_BlueTeam)
	{
		if (bIsDestroy)
		{
			BlueTeamTurretStates |= Mask;  // 포탑 파괴
		}
		else
		{
			BlueTeamTurretStates &= ~Mask;  // 포탑 복구 또는 새로 생성
		}
	}
	else if (TeamTag == FGameplayTagsBase::Get().GameRule_TeamName_RedTeam)
	{
		if (bIsDestroy)
		{
			RedTeamTurretStates |= Mask;  // 포탑 파괴
		}
		else
		{
			RedTeamTurretStates &= ~Mask;  // 포탑 복구 또는 새로 생성
		}
	}
}


FGameplayTag ACoreGameState::GetValidTargetTurret(FGameplayTag TeamTag, FGameplayTag LineTag)
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
    		return FGameplayTagsBase::Get().GameRule_Turret_Inhibitor;
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
    		return FGameplayTagsBase::Get().GameRule_Turret_Inhibitor;
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
    	else if (!(TurretStates & (1 << 1)))  // 바텀 억제기 타워가 파괴되지 않은 경우
    	{
    		return FGameplayTagsBase::Get().GameRule_Turret_Inhibitor;
    	}
    }

	if (!(TurretStates & (1 << 0)))  // 넥서스가 파괴되지 않은 경우
	{
		return FGameplayTagsBase::Get().GameRule_Turret_Nexus;
	}

    // 모든 타워가 파괴된 경우 nullptr 또는 비어 있는 태그 반환
    return FGameplayTag();
}

bool ACoreGameState::IsInhibitorDestroyed(FGameplayTag TeamTag, FGameplayTag LineTag) const
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
