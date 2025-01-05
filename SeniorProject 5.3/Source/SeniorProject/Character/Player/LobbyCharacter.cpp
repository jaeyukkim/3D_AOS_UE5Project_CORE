// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyCharacter.h"


#include "SeniorProject/PlayerBase/PlayerStateBase.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"
#include "SeniorProject/UI/HUD/DefaultHUD.h"
#include "GameplayTagContainer.h"
#include "Net/UnrealNetwork.h"
#include "SeniorProject/GameSetting/CoreGameState.h"
#include "SeniorProject/GameSetting/LobbyGameMode.h"


ALobbyCharacter::ALobbyCharacter()
{
 	
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	
	//생성되어도 기본적으로 ai 컨트롤러에 빙의되지 않으며 명시적으로 설정해줘야함
	AutoPossessAI = EAutoPossessAI::Disabled;
}

void ALobbyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	InitPlayerInfo();
	if(!bIsMenuWidgetInitialized)
		GetWorld()->GetTimerManager().SetTimer(InitPlayerInfoRetryTimerHandle, this, &ALobbyCharacter::InitPlayerInfo, 0.3f, true);
}

void ALobbyCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	if(HasAuthority()) return;
	InitPlayerInfo();
	if(!bIsMenuWidgetInitialized)
		GetWorld()->GetTimerManager().SetTimer(InitPlayerInfoRetryTimerHandle, this, &ALobbyCharacter::InitPlayerInfo, 0.3f, true);
	
}

void ALobbyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALobbyCharacter, PlayerInformation);
	
}



void ALobbyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	
	
	
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
		return;
	}

	
	if(CoreGameState->SetPlayerTeam(PS) && !bIsMenuWidgetInitialized)
	{
		
		// GameState에 플레이어 정보 저장
		if(HasAuthority())
		{
			FPlayerInfo Info;
			Info.PC = PC;
			Info.PS = PS;
			Info.PlayerTeamName = PS->GetTeamName();
			Info.PlayerName = PS->GetPlayerName();
			PlayerInformation = Info;
			CoreGameState->AddPlayerInfo(Info);
		}
		
		if(IsLocallyControlled())
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
			
			if(DefaultHUD->InitCharacterSelectWidget(this) && !bIsMenuWidgetInitialized)
			{
				bIsMenuWidgetInitialized = true;
				GetWorldTimerManager().ClearTimer(InitPlayerInfoRetryTimerHandle);
				ServerBroadcastCharacterSelectWidget();
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("Failed InitLobbyWidget")));

			}
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

