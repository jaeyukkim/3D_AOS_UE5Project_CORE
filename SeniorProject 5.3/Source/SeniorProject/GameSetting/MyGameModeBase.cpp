// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"


#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/Actor/Gameplay/AllWayPoint.h"
#include "SeniorProject/Actor/Gameplay/Spawner.h"
#include "SeniorProject/Character/Player/LobbyCharacter.h"
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
	
	SetupPlayerCharacterClass(NewPlayer);
	
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

void AMyGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	

}

void AMyGameModeBase::EndGame(const FGameplayTag& DefeatedTeamName)
{

	TArray<AActor*> AllCharacters;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacterBase::StaticClass(), AllCharacters);

	for(AActor* Character : AllCharacters)
	{
		ACharacterBase* CoreCharacter = Cast<ACharacterBase>(Character);
		CoreCharacter->MulticastEndGame(DefeatedTeamName);
	
	}
}



void AMyGameModeBase::GenericPlayerInitialization(AController* C)
{
	Super::GenericPlayerInitialization(C);

/*
 *	패키징할 때 사용 에디터에서는 유효하지 않음
 */
	if(APlayerController* PC = Cast<APlayerController>(C))
	{
		SetupPlayerCharacterClass(PC);
	}
	
}


void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	
	if(CoreGameState == nullptr)
	{
		CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this));
	}
	
	// InitialSpawnTime 후 미니언 생성
	//GetWorld()->GetTimerManager().SetTimer(InitialSpawnTimerHandle, this, &AMyGameModeBase::SpawnMinion, InitialSpawnTime, false);
	GetWorld()->GetTimerManager().SetTimer(InitWayPointTimerHandle, this, &AMyGameModeBase::InitWayPoint, InitWayPointTime, false);
	
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


	GetWorldTimerManager().SetTimer(UpdateMinionTargetTimerHandle, FTimerDelegate::CreateLambda([this]()
	{
		UpdateMinionTargets.Broadcast();

	}), UpdateMinionTargetDelay, false);


	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
	if(TurretLevelTag == TagsBase.GameRule_Turret_Nexus)
	{
		EndGame(TeamTag);
	}
		
}


// WayPoint 싱글톤 클래스 생성
void AMyGameModeBase::InitWayPoint()
{
	UAllWayPoint::InitializeWayPoint(GetWorld());
}





