// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"

#include "GameFramework/PlayerStart.h"
#include "SeniorProject/GamePlayTagsBase.h"
#include "SeniorProject/Character/Player/LobbyCharacter.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/GameSetting/CoreGameState.h"
#include "SeniorProject/Interface/GameRuleInterface.h"

ALobbyGameMode::ALobbyGameMode()
{
	bUseSeamlessTravel = true;
}

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
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
			SetUpPlayerTeam(NewPlayer);
		}
	}
}


void ALobbyGameMode::Logout(AController* Exiting)
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

void ALobbyGameMode::SetUpPlayerTeam(APlayerController* NewPlayer)
{
	APlayerStateBase* PlayerStateBase = NewPlayer->GetPlayerState<APlayerStateBase>();
	if (PlayerStateBase && PlayerStateBase->PlayerCharacterClass)
	{
		
		AActor* OldPawn = NewPlayer->GetPawn();
		
		// 기존의 PlayerCharacterClass에서 스폰할 캐릭터 클래스를 설정
		TArray<AActor*> PlayerStarts;
		UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStarts);
		TArray<APlayerStart*> NewPlayerStarts;

		for (auto Start : PlayerStarts)
		{
			APlayerStart* TeamStart = Cast<APlayerStart>(Start);
			NewPlayerStarts.Add(TeamStart);
		}
		
		if (NewPlayerStarts.Num() > 0)
		{
			APlayerStart* ChosenPlayerStart = NewPlayerStarts[FMath::RandRange(0, NewPlayerStarts.Num() - 1)];
			FTransform SpawnLocation = ChosenPlayerStart->GetActorTransform();
			
			ALobbyCharacter* NewCharacter = GetWorld()->SpawnActor<ALobbyCharacter>(PlayerStateBase->LobbyCharacterClass, SpawnLocation);
			if (NewCharacter)
			{
				// 새로 스폰한 캐릭터를 플레이어에게 할당
				NewPlayer->Possess(NewCharacter);
				if(OldPawn != nullptr) OldPawn->Destroy();
			}
		}
	}
}


void ALobbyGameMode::ServerTravelToBattlefield()
{
	UWorld* World = GetWorld();
	if(World)
	{
		if(CoreGameState)
		{
			FString GameProcessString = FString::Printf(TEXT("Current GameProcess: %d"), static_cast<int32>(CoreGameState->GameProcess));
			
			CoreGameState->GameProcess = EGameProcess::GameStartSession;
			bUseSeamlessTravel = true;
			World->ServerTravel(FString("/Game/BP/Maps/EQSTestMap?listen"));
			
		}
	}
}
