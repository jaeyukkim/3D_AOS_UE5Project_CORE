// Fill out your copyright notice in the Description page of Project Settings.


#include "CoreGameState.h"
#include "SeniorProject/Character/Turret/Turret.h"
#include "GameplayTagContainer.h"
#include "MyGameModeBase.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/Sound/CoreSoundInstance.h"
#include "SeniorProject/Sound/CoreSoundManager.h"

ACoreGameState::ACoreGameState()
{
	// 포탑은 모두 파괴된 상태로 초기화되나 억제기는 기본으로 생성됨
	BlueTeamTurretStates = ~BlueTeamTurretStates;
	RedTeamTurretStates = ~RedTeamTurretStates;

	uint16 Mask = 0;
	Mask += 1 << 5; // 미드 억제기
	Mask += 1 << 9; // 탑 억제기
	Mask += 1 << 1; //바텀 억제기
	RedTeamTurretStates &= ~Mask;
	BlueTeamTurretStates &= ~Mask;
}

void ACoreGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACoreGameState, PlayerInfos);
	DOREPLIFETIME(ACoreGameState, RedTeam);
	DOREPLIFETIME(ACoreGameState, BlueTeam);
	DOREPLIFETIME(ACoreGameState, ReadyUsers);
	DOREPLIFETIME(ACoreGameState, RedTeamTurretStates);
	DOREPLIFETIME(ACoreGameState, BlueTeamTurretStates);
	DOREPLIFETIME(ACoreGameState, GameProcess);
	DOREPLIFETIME(ACoreGameState, BlueTeamScore);
	DOREPLIFETIME(ACoreGameState, RedTeamScore);
	DOREPLIFETIME(ACoreGameState, TotalTeamScore);

}




void ACoreGameState::MulticastPlayerCharacterChanged_Implementation(APlayerState* InPS, UClass* SelectedCharacter, UTexture* CharacterImg)
{
	for (FPlayerInfo& PlayerInfo : PlayerInfos)
	{
		// 일치하는 PlayerInfo를 찾으면 반환
		if (PlayerInfo.PS == InPS)
		{
			PlayerInfo.CharacterImg = CharacterImg;
			PlayerInfo.SelectedCharacter = SelectedCharacter;
			PlayerCharacterChangedDelegate.Broadcast(PlayerInfo);
		}
	}
}



void ACoreGameState::ServerPlayerReady_Implementation(APlayerState* ReadyUser)
{
	ReadyUsers.AddUnique(ReadyUser);


	if(PlayerInfos.Num() == ReadyUsers.Num())
	{
		AllPlayerReadyCompletedDelegate.Broadcast();
	}
}


void ACoreGameState::MulticastPlayerReady_Implementation(APlayerState* InPS)
{
	for (FPlayerInfo& PlayerInfo : PlayerInfos)
	{
		// 일치하는 PlayerInfo를 찾으면 반환
		if (PlayerInfo.PS == InPS)
		{
			PlayerReadyCompletedDelegate.Broadcast(PlayerInfo);
		}
	}
}

void ACoreGameState::ServerRegisterPlayerToGameState_Implementation(APlayerStateBase* InPS,
	ECharacterClass CharacterClass)
{

	if(InPS == nullptr) return;
	
	FPlayerInfo PlayerInformation;
	
	PlayerInformation.PC = InPS->GetPlayerController();
	PlayerInformation.PS = InPS;
	PlayerInformation.PlayerTeamName = InPS->GetTeamName();
	PlayerInformation.PlayerName = InPS->GetPlayerName();


	if (AMyGameModeBase* MyGameModeBase = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		UCharacterClassInfo* CharacterClassInfo = MyGameModeBase->CharacterClassInfo;
		FCharacterClassDefaultInfo Info = CharacterClassInfo->GetClassDefaultInfo(CharacterClass);
		PlayerInformation.CharacterImg = Info.CharacterImg;
	}
	
	
	// 중복된 PS가 없다면 추가
	PlayerInfos.Add(PlayerInformation);
	
}

void ACoreGameState::MulticastNewPlayerEntranced_Implementation()
{
	for(FPlayerInfo& PlayerInfo : PlayerInfos)
	{
		NewPlayerEntrancedDelegate.Broadcast(PlayerInfo);
	}
}

TMap<UClass*, FGameplayTag> ACoreGameState::GetSelectedPlayerClass(FGameplayTag TeamName)
{
	TMap<UClass*, FGameplayTag> RedTeamSeletedPlayerClass;
	TMap<UClass*, FGameplayTag> BlueTeamSeletedPlayerClass;
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	for (FPlayerInfo& PlayerInfo : PlayerInfos)
	{
		if(PlayerInfo.PlayerTeamName == TagsBase.GameRule_TeamName_RedTeam)
			RedTeamSeletedPlayerClass.Add(PlayerInfo.SelectedCharacter, PlayerInfo.PlayerTeamName);
		else if(PlayerInfo.PlayerTeamName == TagsBase.GameRule_TeamName_BlueTeam)
			BlueTeamSeletedPlayerClass.Add(PlayerInfo.SelectedCharacter, PlayerInfo.PlayerTeamName);
	}

	if(TeamName.MatchesTagExact(TagsBase.GameRule_TeamName_RedTeam))
		return RedTeamSeletedPlayerClass;
	
	return BlueTeamSeletedPlayerClass;
}

void ACoreGameState::AddPlayerInfo(FPlayerInfo& Info)
{
	
	FPlayerInfo PlayerInformation;
	
	PlayerInformation.PC = Info.PC;
	PlayerInformation.PS = Info.PS;
	PlayerInformation.PlayerTeamName = Info.PlayerTeamName;
	PlayerInformation.PlayerName = Info.PlayerName;
	
	// 중복된 PS가 없다면 추가
	PlayerInfos.Add(PlayerInformation);

}

bool ACoreGameState::SetPlayerTeam(APlayerStateBase* PS)
{
	if(PS == nullptr) return false;
		
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	if(PS->GetTeamName() != TagsBase.GameRule_TeamName_NONE)
	{
		if(RedTeam.Contains(PS))
		{
			PS->SetTeamName(TagsBase.GameRule_TeamName_RedTeam);
			return true;
		}
		else if (BlueTeam.Contains(PS))
		{
			PS->SetTeamName(TagsBase.GameRule_TeamName_BlueTeam);
			return true;
		}
	}
	
	return false;

}



void ACoreGameState::ServerUpdateTurretStates_Implementation(const FGameplayTag& LineTag, const FGameplayTag& TurretLevelTag, const FGameplayTag& TeamTag, bool bIsDestroy)
{
	uint16 Mask = 0;

	if (LineTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Line_Top))
	{
		if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_FirstTurret))
		{
			Mask = 1 << 12;  // 탑 1차 타워
		}
		else if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_SecondTurret))
		{
			Mask = 1 << 11;  // 탑 2차 타워
		}
		else if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_ThirdTurret))
		{
			Mask = 1 << 10;  // 탑 3차 타워
		}
		else if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_Inhibitor))
		{
			Mask = 1 << 9;  // 탑 억제기 타워
		}
	}
	else if (LineTag == FGameplayTagsBase::Get().GameRule_Line_Mid)
	{
		if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_FirstTurret))
		{
			Mask = 1 << 8;  // 미드 1차 타워
		}
		else if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_SecondTurret))
		{
			Mask = 1 << 7;  // 미드 2차 타워
		}
		else if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_ThirdTurret))
		{
			Mask = 1 << 6;  // 미드 3차 타워
		}
		else if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_Inhibitor))
		{
			Mask = 1 << 5;  // 미드 억제기 타워
		}
	}
	else if (LineTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Line_Bottom))
	{
		if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_FirstTurret))
		{
			Mask = 1 << 4;  // 바텀 1차 타워
		}
		else if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_SecondTurret))
		{
			Mask = 1 << 3;  // 바텀 2차 타워
		}
		else if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_ThirdTurret))
		{
			Mask = 1 << 2;  // 바텀 3차 타워
		}
		else if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_Inhibitor))
		{
			Mask = 1 << 1;  // 바텀 억제기 타워
		}
	}

	if (TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_Nexus))
	{
		Mask++;  // 넥서스
	}

	// 비트마스크 업데이트 (파괴 상태 여부에 따라)
	if (TeamTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_TeamName_BlueTeam))
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
	else if (TeamTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_TeamName_RedTeam))
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


FGameplayTag ACoreGameState::GetValidTargetTurret(FGameplayTag& TeamTag, FGameplayTag& LineTag)
{
	 const uint16 TurretStates = (TeamTag == FGameplayTagsBase::Get().GameRule_TeamName_BlueTeam) ? RedTeamTurretStates : BlueTeamTurretStates;
	
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	
    // 라인에 따른 비트 위치 및 TowerLevelTag 반환
    if (LineTag.MatchesTagExact(TagsBase.GameRule_Line_Top))
    {
        // 탑 라인
        if (!(TurretStates & (1 << 12)))  // 탑 1차 타워가 파괴되지 않은 경우
        {
            return TagsBase.GameRule_Turret_FirstTurret;
        }
        else if (!(TurretStates & (1 << 11)))  // 탑 2차 타워가 파괴되지 않은 경우
        {
            return TagsBase.GameRule_Turret_SecondTurret;
        }
        else if (!(TurretStates & (1 << 10)))  // 탑 3차 타워가 파괴되지 않은 경우
        {
            return TagsBase.GameRule_Turret_ThirdTurret;
        }
    	else if (!(TurretStates & (1 << 9)))  // 탑 억제기 타워가 파괴되지 않은 경우
    	{
    		return TagsBase.GameRule_Turret_Inhibitor;
    	}
    }
    else if (LineTag.MatchesTagExact(TagsBase.GameRule_Line_Mid))
    {
        // 미드 라인
        if (!(TurretStates & (1 << 8)))  // 미드 1차 타워가 파괴되지 않은 경우
        {
        	return TagsBase.GameRule_Turret_FirstTurret;
        }
        else if (!(TurretStates & (1 << 7)))  // 미드 2차 타워가 파괴되지 않은 경우
        {
            return TagsBase.GameRule_Turret_SecondTurret;
        }
        else if (!(TurretStates & (1 << 6)))  // 미드 3차 타워가 파괴되지 않은 경우
        {
            return TagsBase.GameRule_Turret_ThirdTurret;
        }
    	else if (!(TurretStates & (1 << 5)))  // 미드 억제기 타워가 파괴되지 않은 경우
    	{
    		return TagsBase.GameRule_Turret_Inhibitor;
    	}
    }
    else if (LineTag.MatchesTagExact(TagsBase.GameRule_Line_Bottom))
    {
        // 바텀 라인
        if (!(TurretStates & (1 << 4)))  // 바텀 1차 타워가 파괴되지 않은 경우
        {
        	return TagsBase.GameRule_Turret_FirstTurret;
        }
        else if (!(TurretStates & (1 << 3)))  // 바텀 2차 타워가 파괴되지 않은 경우
        {
            return TagsBase.GameRule_Turret_SecondTurret;
        }
        else if (!(TurretStates & (1 << 2)))  // 바텀 3차 타워가 파괴되지 않은 경우
        {
            return TagsBase.GameRule_Turret_ThirdTurret;
        }
    	else if (!(TurretStates & (1 << 1)))  // 바텀 억제기 타워가 파괴되지 않은 경우
    	{
    		return TagsBase.GameRule_Turret_Inhibitor;
    	}
    }
	else
	{
		bool bTopInhibitorDestroyed = IsInhibitorDestroyed(TeamTag, TagsBase.GameRule_Line_Top);
		bool bMidInhibitorDestroyed = IsInhibitorDestroyed(TeamTag, TagsBase.GameRule_Line_Mid);
		bool bBottomInhibitorDestroyed = IsInhibitorDestroyed(TeamTag, TagsBase.GameRule_Line_Bottom);

		if(bTopInhibitorDestroyed || bMidInhibitorDestroyed || bBottomInhibitorDestroyed)
		{
			return TagsBase.GameRule_Turret_Nexus;
		}
	}

    // 모든 타워가 파괴된 경우 nullptr 또는 비어 있는 태그 반환
    return FGameplayTag();
}

bool ACoreGameState::IsInhibitorDestroyed(FGameplayTag& TeamTag, FGameplayTag& LineTag) const
{
	const uint16 TurretStates = (TeamTag == FGameplayTagsBase::Get().GameRule_TeamName_BlueTeam) ? RedTeamTurretStates : BlueTeamTurretStates;

	if (LineTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Line_Top))
	{
		return (TurretStates & (1 << 9)) != 0;  // 탑 억제기 타워 상태 확인
	}
	else if (LineTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Line_Mid))
	{
		return (TurretStates & (1 << 5)) != 0;  // 미드 억제기 타워 상태 확인
	}
	else if (LineTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Line_Bottom))
	{
		return (TurretStates & (1 << 1)) != 0;  // 바텀 억제기 타워 상태 확인
	}

	return false;
}

void ACoreGameState::OnRep_PlayerInfos()
{
	for(FPlayerInfo& PlayerInfo : PlayerInfos)
	{
		NewPlayerEntrancedDelegate.Broadcast(PlayerInfo);
	}
}




/*
 * 상대 플레이어를 죽였을 때 그 스코어가 파라미터로 전달됨.
 */

void ACoreGameState::ServerAddTeamScore_Implementation(const FGameplayTag& TeamName)
{
	//킬 대상이 플레이어끼리 였을 때만 점수를 더함 사망 사운드는 재생
	

	
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	
	
	if(TeamName.MatchesTagExact(TagsBase.GameRule_TeamName_RedTeam))
	{
		RedTeamScore++;
	}

	else
	{
		BlueTeamScore++;
	}

	TotalTeamScore = RedTeamScore + BlueTeamScore;
	MulticastPlayTeamScoreSound(TeamName);
}

void ACoreGameState::MulticastPlayTeamScoreSound_Implementation(const FGameplayTag& TeamName)
{
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	
	
	UCoreSoundInstance* GameInstance = Cast<UCoreSoundInstance>(GetGameInstance());
	if(GameInstance == nullptr) return;
	
	UCoreSoundManager* CoreSoundManager =  GameInstance->GetCoreSoundManager();
	if(CoreSoundManager == nullptr) return;

	FGameplayTag LocalPlayerTeam = TagsBase.GameRule_TeamName_NONE;
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if(PlayerController != nullptr)
	{
		if(APlayerStateBase* PlayerStateBase = PlayerController->GetPlayerState<APlayerStateBase>())
		{
			LocalPlayerTeam = PlayerStateBase->GetTeamName();
		}
	}
	
	
	if(TeamName.MatchesTagExact(LocalPlayerTeam))
	{
		if(TotalTeamScore == 1)
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::FirstBloodAlly);
		}
		else
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::EnemyDie);
		}
		
	}

	else
	{
		if(TotalTeamScore == 1)
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::FirstBloodEnemy);
		}
		else
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::AllyDie);
		}
	}
}
