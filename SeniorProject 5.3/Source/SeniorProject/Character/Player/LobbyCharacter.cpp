// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyCharacter.h"

#include "Blueprint/UserWidget.h"
#include "SeniorProject/GameSetting/MyGameModeBase.h"
#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidget.h"


ALobbyCharacter::ALobbyCharacter()
{
 	
	PrimaryActorTick.bCanEverTick = false;

}

void ALobbyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	InitPlayerInfo();

}

void ALobbyCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	if(HasAuthority()) return;
	InitPlayerInfo();

	
}


void ALobbyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALobbyCharacter::InitPlayerInfo()
{
	PS = GetPlayerState<APlayerStateBase>();
	if(PS != nullptr)
	{
		PC = Cast<AMyPlayerController>(GetController());
		if(PC != nullptr)
		{
			InitLobbyWidget();
			
		}
	}
}

void ALobbyCharacter::BindCallbacksToDependencies()
{
	ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(GetWorld()));
	if(CoreGameState != nullptr)
	{
		CoreGameState->NewPlayerEntrancedDelegate.AddLambda([this](const FGameplayTag& Team_Name, const AMyPlayerController* PController, const FString& UserName, const UTexture* CharacterImg)
		{
			NewPlayerEntranced.Broadcast(Team_Name, PController, UserName, CharacterImg);
		});

		CoreGameState->PlayerCharacterChangedDelegate.AddLambda([this](const FGameplayTag& Team_Name, const AMyPlayerController* PController, const FString& UserName, const UTexture* CharacterImg)
		{
			PlayerCharacterChanged.Broadcast(Team_Name, PController, UserName, CharacterImg);
		});
	}
}

void ALobbyCharacter::BroadcastCharacterSelectWidget()
{
	ACoreGameState* CoreGameState = Cast<ACoreGameState>(GetWorld()->GetGameState());
	PC = Cast<AMyPlayerController>(GetController());
	PS = GetPlayerState<APlayerStateBase>();
	if(CoreGameState && PC && PS)
	{
		CoreGameState->NewPlayerEntranced(PC, PS->GetTeamName(), PS->GetPlayerName());
	}
}


void ALobbyCharacter::InitLobbyWidget()
{
	if(CharacterSelectWidgetClass != nullptr && CharacterSelectWidget == nullptr)
	{
		CharacterSelectWidget = NewObject<UOverlayWidget>(this, CharacterSelectWidgetClass);
		BindCallbacksToDependencies();
		CharacterSelectWidget->AddToViewport(0);
		CharacterSelectWidget->SetWidgetController(this);
		
	}
}



void ALobbyCharacter::SetPlayerCharacterClass(TSubclassOf<AMyCharacter> SelectedCharacter, const UTexture* CharacterImg)
{
	if(PC == nullptr || PS == nullptr) return;

	

	PS->PlayerCharacterClass = SelectedCharacter;
	if (ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this)))
	{
		CoreGameState->PlayerCharacterChanged(PS->GetTeamName(), PC, CharacterImg);
	}
	
}

