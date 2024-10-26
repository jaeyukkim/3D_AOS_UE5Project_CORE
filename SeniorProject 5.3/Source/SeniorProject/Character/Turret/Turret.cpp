// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"

#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/GameSetting/CoreGameState.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/Sound/CoreSoundInstance.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/Sound/CoreSoundManager.h"

ATurret::ATurret()
{
	Tags.Add(TEXT("Turret"));
	
}


/*
 *  서버에서만 실행됨.
 */

void ATurret::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	


}


void ATurret::BeginPlay()
{
	Super::BeginPlay();

	if(HasAuthority())
	{
		GetWorldTimerManager().SetTimer(TurretInitTimerHandle,this, &ATurret::ServerRegisterWithGameMode, InitLoopTime, true);
	}

}



void ATurret::ServerRegisterWithGameMode_Implementation()
{
	if(!HasAuthority()) return;

	ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this));
	if(!CoreGameState) return;
	
	
	bIsInvincibility = true;

	if (AMyGameModeBase* GameMode = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		// 게임 모드에 자신을 등록
		GameMode->OnTurretSpawned(this);
		GameMode->UpdateMinionTargets.AddDynamic(this, &ATurret::ServerUpdateTurretState);
		
		if(TurretLevelTag.MatchesTagExact(FGameplayTagsBase::Get().GameRule_Turret_FirstTurret))
			bIsInvincibility = false;
		GetWorldTimerManager().ClearTimer(TurretInitTimerHandle);

	}
	
}


/*
 * 포탑이 파괴되었을 때 실행되는 함수이고 다음 지정 포탑이면 무적 해제
 *  GetValidTargetTurret은 다음 상태 타워의 태그를 반환하는 함수이고
 *  파라미터로 상대팀 팀 네임을 전달하면 아군 타워의 다음 타워를 반환
 */
void ATurret::ServerUpdateTurretState_Implementation()
{
	if(!HasAuthority()) return;


	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	if (AMyGameModeBase* GameMode = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		FGameplayTag InTurretLevelTag = TagsBase.GameRule_TeamName_NONE;
		
		if(TeamName.MatchesTagExact(TagsBase.GameRule_TeamName_BlueTeam))
		{
			InTurretLevelTag = GameMode->GetValidTargetTurret(TagsBase.GameRule_TeamName_RedTeam, LineTag);
		}
		else if(TeamName.MatchesTagExact(TagsBase.GameRule_TeamName_RedTeam))
		{
			InTurretLevelTag = GameMode->GetValidTargetTurret(TagsBase.GameRule_TeamName_BlueTeam, LineTag);
		}
		
		if(TurretLevelTag.MatchesTagExact(InTurretLevelTag))
			bIsInvincibility = false;
	}
}


void ATurret::Die_Implementation()
{
	if(HasAuthority())
	{
		OnTurretDestroyed.Broadcast(LineTag, TurretLevelTag, TeamName);
	}
	MulticastPlayTowerDestroyedSound();
	
	Super::Die_Implementation();
}


/*
 *  각자 팀에 맞는 사운드 재생
 *  아군 타워면 아군 타워 파괴 사운드 재생
 *  적군 타워면 적군 타워 파괴 사운드 재생
 */

void ATurret::MulticastPlayTowerDestroyedSound_Implementation()
{
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	UCoreSoundInstance* GameInstance = Cast<UCoreSoundInstance>(GetGameInstance());
	if(GameInstance == nullptr) return;

	
	
	UCoreSoundManager* CoreSoundManager =  GameInstance->GetCoreSoundManager();
	FGameplayTag LocalPlayerTeam = FGameplayTag();
	
	if(CoreSoundManager == nullptr) return;

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
		if(TurretLevelTag == TagsBase.GameRule_Turret_Nexus) return;
		
		if(TurretLevelTag == TagsBase.GameRule_Turret_Inhibitor)
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::AllyInhibitorDestroyed);
		}
		else
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::AllyTowerDestroyed);
		}
	}

	else
	{
		if(TurretLevelTag == TagsBase.GameRule_Turret_Nexus) return;
		
		if(TurretLevelTag == TagsBase.GameRule_Turret_Inhibitor)
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::EnemyInhibitorDestroyed);

		}
		else
		{
			CoreSoundManager->PlayingAnnouncerSound.Broadcast(EGamePlaySoundType::EnemyTowerDestroyed);

		}
	}

	
}
