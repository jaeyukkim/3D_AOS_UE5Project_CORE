// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyCharacter.h"


#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"
#include "SeniorProject/UI/HUD/DefaultHUD.h"
#include "GameplayTagContainer.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/GameSetting/CoreGameState.h"
#include "SeniorProject/GameSetting/LobbyGameMode.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"
#include "SeniorProject/UI/HUD/ReturnToMainMenu.h"

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

void ALobbyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
}

void ALobbyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	EnhancedInputComponent->BindAction(QuitMenuButton, ETriggerEvent::Triggered, this, &ALobbyCharacter::ShowReturnToMainMenu);
}


void ALobbyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	
	if (AMyPlayerController* PlayerController = Cast<AMyPlayerController>(GetController()))
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		
		if(Subsystem)
			Subsystem->AddMappingContext(PlayerContext, 0);
	}
	
}

void ALobbyCharacter::ShowReturnToMainMenu()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if(PlayerController == nullptr) return;

	
	if (ReturnToMainMenuClass == nullptr) return;
	if (ReturnToMainMenu == nullptr)
	{
		ReturnToMainMenu = CreateWidget<UReturnToMainMenu>(PlayerController, ReturnToMainMenuClass);
		ReturnToMainMenu->AddToViewport();
		bReturnToMainMenuOpen = true;
	}
	if (ReturnToMainMenu)
	{
		bReturnToMainMenuOpen = !bReturnToMainMenuOpen;
		if (bReturnToMainMenuOpen)
		{
			ReturnToMainMenu->MenuSetup();
			
		}
		else
		{
			ReturnToMainMenu->MenuTearDown();
		}

		
		FInputModeGameAndUI InputModeData;
		PlayerController->SetInputMode(InputModeData);
		PlayerController->SetShowMouseCursor(true);
		
	}
}

/*
 * 클라이언트의 경우 서버에서 팀 배치를 하기 전에 이미 InitPlayerInfo가 실행됨.
 *  따라서 클라이언트는 서버에서 팀 배치 이후 팀 정보가 다시 initialize되도록 설정함.
 */
void ALobbyCharacter::InitPlayerInfo()
{
	ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this));
	APlayerStateBase* PS = GetPlayerState<APlayerStateBase>();
	APlayerController* PC = Cast<APlayerController>(GetController());

	if(PS == nullptr || PC == nullptr || CoreGameState == nullptr)
	{
	
		GetWorldTimerManager().ClearTimer(InitPlayerInfoRetryTimerHandle);
		GetWorld()->GetTimerManager().SetTimer(InitPlayerInfoRetryTimerHandle, this, &ALobbyCharacter::InitPlayerInfo, 0.3f, true);
		return;
	}

	
	if(CoreGameState->SetPlayerTeam(PS))
	{
		GetWorldTimerManager().ClearTimer(InitPlayerInfoRetryTimerHandle);
		FPlayerInfo Info;
		Info.PC = PC;
		Info.PS = PS;
		Info.PlayerTeamName = PS->GetTeamName();
		Info.PlayerName = PS->GetPlayerName();
		PlayerInformation = Info;
		CoreGameState->AddPlayerInfo(Info);
		InitLobbyWidget();
		
	}
	
	
}

void ALobbyCharacter::BindCallbacksToDependencies()
{
	ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(GetWorld()));
	if(CoreGameState != nullptr)
	{
		CoreGameState->NewPlayerEntrancedDelegate.AddLambda([this](const FPlayerInfo& Info)
		{
			NewPlayerEntranced.Broadcast(Info);
		});

		CoreGameState->PlayerCharacterChangedDelegate.AddLambda([this](const FPlayerInfo& Info)
		{
			PlayerCharacterChanged.Broadcast(Info);
		});
		CoreGameState->PlayerReadyCompletedDelegate.AddLambda([this](const FPlayerInfo& Info)
		{
			PlayerReadyCompleted.Broadcast(Info);
		});
		CoreGameState->AllPlayerReadyCompletedDelegate.AddLambda([this]()
		{
			AllPlayerReadyCompleted.Broadcast();
		});
		
	}
}

void ALobbyCharacter::GameStart_Implementation()
{
	if(!HasAuthority()) return;

	if(ALobbyGameMode* GameModeBase = Cast<ALobbyGameMode>(UGameplayStatics::GetGameMode(this)))
	{
		if(ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this)))
		{
			CoreGameState->SetGameProcess(EGameProcess::GameStartSession);
			GameModeBase->ServerTravelToBattlefield();

		}
	}
	
}



TMap<UClass*, FGameplayTag> ALobbyCharacter::GetSelectedPlayerClass()
{
	TMap<UClass*, FGameplayTag> SeletedPlayerClass;

	if (ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this)))
	{
		SeletedPlayerClass = CoreGameState->GetSelectedPlayerClass(GetPlayerTeamName());
		return SeletedPlayerClass;
	}
	return SeletedPlayerClass;
}

void ALobbyCharacter::ServerReady_Implementation()
{
	if(PlayerInformation.PS == nullptr) return;
	
	PlayerInformation.PS->PlayerCharacterClass = PlayerInformation.SelectedCharacter;

	if (ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this)))
	{
		CoreGameState->ServerPlayerReady(PlayerInformation.PS);
		CoreGameState->MulticastPlayerReady(PlayerInformation.PS);
	}
}


void ALobbyCharacter::ServerSetPlayerCharacterClass_Implementation(UClass* SelectedCharacter,
                                                             UTexture* CharacterImg)
{
	if(PlayerInformation.PC == nullptr && PlayerInformation.PS == nullptr) return;
	
	PlayerInformation.SelectedCharacter = SelectedCharacter;
	
	
	if (ACoreGameState* CoreGameState = Cast<ACoreGameState>(UGameplayStatics::GetGameState(this)))
	{
		CoreGameState->MulticastPlayerCharacterChanged(PlayerInformation.PS, SelectedCharacter, CharacterImg);
	}
}

void ALobbyCharacter::ServerBroadcastCharacterSelectWidget_Implementation()
{
	if(ACoreGameState* CoreGameState = Cast<ACoreGameState>(GetWorld()->GetGameState()))
	{
		CoreGameState->MulticastNewPlayerEntranced();

	};
}


void ALobbyCharacter::InitLobbyWidget()
{
	if (AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(GetController()))
	{
		if (ADefaultHUD* DefaultHUD = Cast<ADefaultHUD>(MyPlayerController->GetHUD()))
		{
			ServerBroadcastCharacterSelectWidget();
			DefaultHUD->InitCharacterSelectWidget(this);
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Failed InitLobbyWidget")));
	}
}

FGameplayTag ALobbyCharacter::GetPlayerTeamName()
{
	if(PlayerInformation.PS != nullptr)
	{
		return PlayerInformation.PS->GetTeamName();
	}
	return FGameplayTag();
}

