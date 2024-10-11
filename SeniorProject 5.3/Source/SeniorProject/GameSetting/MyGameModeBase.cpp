// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"


#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/Actor/Gameplay/Spawner.h"
#include "SeniorProject/Character/Turret/Turret.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/GameSetting/CoreGameState.h"
#include "SeniorProject/Interface/GameRuleInterface.h"


AMyGameModeBase::AMyGameModeBase()
{
	bUseSeamlessTravel = true;
}

void AMyGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if(CoreGameState == nullptr)
	{
		CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this));
	}
	if(CoreGameState)
	{
		FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
		APlayerStateBase* PlayerStateBase = NewPlayer->GetPlayerState<APlayerStateBase>();
		if (PlayerStateBase && PlayerStateBase->GetTeamName() == TagsBase.GameRule_TeamName_NONE)
		{
			if (CoreGameState->BlueTeam.Num() >= CoreGameState->RedTeam.Num())
			{
				CoreGameState->RedTeam.AddUnique(PlayerStateBase);
				PlayerStateBase->SetTeamName(TagsBase.GameRule_TeamName_RedTeam);
			}
			else
			{
				CoreGameState->BlueTeam.AddUnique(PlayerStateBase);
				PlayerStateBase->SetTeamName(TagsBase.GameRule_TeamName_BlueTeam);
			}
		}
	}
	
}

void AMyGameModeBase::Logout(AController* Exiting)
{
	
	APlayerStateBase* PlayerStateBase = Exiting->GetPlayerState<APlayerStateBase>();
	if (CoreGameState && PlayerStateBase)
	{
		if (CoreGameState->RedTeam.Contains(PlayerStateBase))
		{
			CoreGameState->RedTeam.Remove(PlayerStateBase);
		}
		if (CoreGameState->BlueTeam.Contains(PlayerStateBase))
		{
			CoreGameState->BlueTeam.Remove(PlayerStateBase);
		}
	}
	
	Super::Logout(Exiting);
}

void AMyGameModeBase::StartPlay()
{
	Super::StartPlay();
}

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	
	// InitialSpawnTime 후 미니언 생성
//	GetWorld()->GetTimerManager().SetTimer(InitialSpawnTimerHandle, this, &AMyGameModeBase::SpawnMinion, InitialSpawnTime, false);
	
	
}


//타워가 초기화 되면 실행하는 함수 
void AMyGameModeBase::OnTurretSpawned(ATurret* SpawnedTurret)
{
	if (SpawnedTurret)
	{
		FGameplayTag TeamTag = SpawnedTurret->TeamName;
		FGameplayTag LineTag = SpawnedTurret->LineTag;
		FGameplayTag TurretLevelTag = SpawnedTurret->TurretLevelTag;
		
		// 포탑의 OnTurretDestroyed 델리게이트에 함수 연결
		SpawnedTurret->OnTurretDestroyed.AddDynamic(this, &AMyGameModeBase::OnTurretDestroyed);
		
		// 타워를 파괴 상태에서 alive 상태로 변경
		CoreGameState->UpdateTurretStates(LineTag, TurretLevelTag, TeamTag, false);
	}
	
}


void AMyGameModeBase::OnTurretDestroyed(const FGameplayTag LineTag, const FGameplayTag TurretLevelTag, const FGameplayTag TeamTag)
{
	// 전달받은 태그에 기반하여 타워 상태 업데이트
	if(CoreGameState == nullptr) return;
		
	CoreGameState->UpdateTurretStates(LineTag, TurretLevelTag, TeamTag, true);
	UpdateMinionTargets.Broadcast();
}



FGameplayTag AMyGameModeBase::GetValidTargetTurret(FGameplayTag TeamTag, FGameplayTag LineTag)
{
	if(CoreGameState == nullptr) return FGameplayTag();
	
	return CoreGameState->GetValidTargetTurret(TeamTag, LineTag);
}




void AMyGameModeBase::SpawnMinion()
{

	if(CoreGameState == nullptr) return;
	
	// 공성미니언 생성 주기 카운터 증가
	SiegeMinionSpawnCycle++;
	
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
				FGameplayTag SpawnerTeam = EachSpawnerInterface->Execute_GetTeamName(EachSpawner);
				FGameplayTag SpawnerLine = EachSpawnerInterface->Execute_GetLineTag(EachSpawner);

				
				
				// 억제기가 파괴되었는지 확인합니다.
				if (CoreGameState->IsInhibitorDestroyed(SpawnerTeam, SpawnerLine))
				{
					// 억제기가 파괴되었다면, 해당 스포너에 슈퍼 미니언을 생성하도록 지시합니다.
					EachSpawner->SetIsSpawnSuperMinion(true);
				}
				else if ((SiegeMinionSpawnCycle % 3) == 0)
				{
					// SiegeMinionSpawnCycle 주기에 따라 공성 미니언을 생성합니다.
					EachSpawner->SetIsSpawnSiegeMinion(true);
				}
				
				// 기본 미니언 생성 델리게이트를 호출합니다.
				EachSpawner->OnMinionSpawn.Broadcast();
				
			}
		}
	}

	// RecurringSpawnTime 초 후에 다시 호출되도록 타이머를 설정합니다.
	GetWorld()->GetTimerManager().SetTimer(RecurringSpawnTimerHandle, this, &AMyGameModeBase::SpawnMinion, RecurringSpawnTime, false);
}





