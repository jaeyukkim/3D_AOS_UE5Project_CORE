// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"


#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/Actor/Gameplay/Spawner.h"
#include "SeniorProject/Character/Player/LobbyCharacter.h"
#include "SeniorProject/Character/Turret/Turret.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/GameSetting/CoreGameState.h"
#include "SeniorProject/Interface/GameRuleInterface.h"



AMyGameModeBase::AMyGameModeBase()
{
	bUseSeamlessTravel = false;

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
		APlayerStateBase* PS = NewPlayer->GetPlayerState<APlayerStateBase>();
		if (PS->GetTeamName().MatchesTagExact(TagsBase.GameRule_TeamName_NONE))
		{
			if (CoreGameState->BlueTeam.Num() >= CoreGameState->RedTeam.Num())
			{
				CoreGameState->RedTeam.AddUnique(PS);
				PS->SetTeamName(TagsBase.GameRule_TeamName_RedTeam);
			}
			else
			{
				CoreGameState->BlueTeam.AddUnique(PS);
				PS->SetTeamName(TagsBase.GameRule_TeamName_BlueTeam);
			}
			
		}
		
	}
	
	//setupPlayerCharacterClass(NewPlayer);
	
}



/*
 * 게임 시작 시 PlayerState에 저장된(캐릭터 선택창에서 선택한) 캐릭터로 스폰
 *  각 플레이어는 본인 진영에 맞는 PlayerStart에서 시작하게됨
 */

void AMyGameModeBase::SetupPlayerCharacterClass(APlayerController* NewPlayer)
{
	APlayerStateBase* PlayerStateBase = NewPlayer->GetPlayerState<APlayerStateBase>();
	if (PlayerStateBase && PlayerStateBase->PlayerCharacterClass)
	{
		
		AActor* OldPawn = NewPlayer->GetPawn();
		if(OldPawn != nullptr) OldPawn->Destroy();

		// 기존의 PlayerCharacterClass에서 스폰할 캐릭터 클래스를 설정
		TArray<AActor*> PlayerStarts;
		UGameplayStatics::GetAllActorsOfClass(this, ATeamPlayerStart::StaticClass(), PlayerStarts);
		TArray<ATeamPlayerStart*> TeamPlayerStarts;

		for (auto Start : PlayerStarts)
		{
			ATeamPlayerStart* TeamStart = Cast<ATeamPlayerStart>(Start);
			if (TeamStart && TeamStart->TeamName == PlayerStateBase->GetTeamName())
			{
				TeamPlayerStarts.Add(TeamStart);
			}
		}
		
		if (TeamPlayerStarts.Num() > 0)
		{
			ATeamPlayerStart* ChosenPlayerStart = TeamPlayerStarts[FMath::RandRange(0, TeamPlayerStarts.Num() - 1)];
			FTransform SpawnLocation = ChosenPlayerStart->GetActorTransform();
			
			AMyCharacter* NewCharacter = GetWorld()->SpawnActor<AMyCharacter>(PlayerStateBase->PlayerCharacterClass, SpawnLocation);
			if (NewCharacter)
			{
				// 새로 스폰한 캐릭터를 플레이어에게 할당
				NewPlayer->Possess(NewCharacter);
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

void AMyGameModeBase::StartMatch()
{
	Super::StartMatch();
	
}

void AMyGameModeBase::EndGame(const FGameplayTag& DefeatedTeamName)
{

	TArray<AActor*> Players;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyCharacter::StaticClass(), Players);

	for(AActor* Player : Players)
	{
		AMyCharacter* CorePlayer = Cast<AMyCharacter>(Player);
		CorePlayer->MulticastEndGame(DefeatedTeamName);
	}
}



void AMyGameModeBase::GenericPlayerInitialization(AController* C)
{
	Super::GenericPlayerInitialization(C);

/*
 *	패키징할 때 사용 에디터에서는 유효하지 않음
 */
	/*if(APlayerController* PC = Cast<APlayerController>(C))
	{
		SetupPlayerCharacterClass(PC);
	}*/
	
}


void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	
	if(CoreGameState == nullptr)
	{
		CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this));
	}
	
	// InitialSpawnTime 후 미니언 생성
	GetWorld()->GetTimerManager().SetTimer(InitialSpawnTimerHandle, this, &AMyGameModeBase::SpawnMinion, InitialSpawnTime, false);
	
	
}


//타워가 초기화 되면 실행하는 함수 
void AMyGameModeBase::OnTurretSpawned(ATurret* SpawnedTurret)
{
	if (SpawnedTurret)
	{
		FGameplayTag& TeamTag = SpawnedTurret->TeamName;
		FGameplayTag& LineTag = SpawnedTurret->LineTag;
		FGameplayTag& TurretLevelTag = SpawnedTurret->TurretLevelTag;
		
		// 포탑의 OnTurretDestroyed 델리게이트에 함수 연결
		SpawnedTurret->OnTurretDestroyed.AddDynamic(this, &AMyGameModeBase::OnTurretDestroyed);

		if(CoreGameState == nullptr)
		{
			CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this));
		}
	
		CoreGameState->ServerUpdateTurretStates(LineTag, TurretLevelTag, TeamTag, false);
		
	}
	
}


void AMyGameModeBase::OnTurretDestroyed(FGameplayTag& LineTag,  FGameplayTag& TurretLevelTag,  FGameplayTag& TeamTag)
{
	// 전달받은 태그에 기반하여 타워 상태 업데이트
	if(CoreGameState == nullptr) return;

	
	CoreGameState->ServerUpdateTurretStates(LineTag, TurretLevelTag, TeamTag, true);
	UpdateMinionTargets.Broadcast();


	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	if(TurretLevelTag == TagsBase.GameRule_Turret_Nexus)
	{
		EndGame(TeamTag);
	}
		
}



/*
 *  다음 적팀 타워의 타워 레벨을 반환하는 함수
 *  다음 아군 타워의 타워 레밸을 확인하려면 팀 태그를 반대로 전달하면 됨
 */
FGameplayTag AMyGameModeBase::GetValidTargetTurret(FGameplayTag TeamTag, FGameplayTag LineTag)
{
	if(CoreGameState == nullptr) return FGameplayTag();
	
	return CoreGameState->GetValidTargetTurret(TeamTag, LineTag);
}



void AMyGameModeBase::SpawnMinion()
{

	if(CoreGameState == nullptr) return;
	
	// 공성미니언 생성 주기 카운터 증가
	SiegeMinionSpawnCount++;
	
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
				else if ((SiegeMinionSpawnCount % SiegeMinionSpawnCycle) == 0)
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





