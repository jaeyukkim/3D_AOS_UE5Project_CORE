// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"

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
