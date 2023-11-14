// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "SeniorProject/Player/MyCharacter.h"
#include "SeniorProject/Player/Kallari.h"
#include "SeniorProject/Player/MyPlayerController.h"
#include "Stage1Potal.h"
#include "SeniorProject/Player/MyPlayerState.h"

AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = AMyCharacter::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
	PlayerStateClass = AMyPlayerState::StaticClass();

	OnMobDeleted.AddLambda([this]() -> void
		{
			ResetNumberOfMob();
		});
	CurrentStage = EStage::STAGE1;

}
void AMyGameModeBase::StartPlay()
{
	Super::StartPlay();
	ResetNumberOfMob();
}

void AMyGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	auto MyPlayerState = Cast<AMyPlayerState>(NewPlayer->PlayerState);

	MyPlayerState->InitPlayerData();
}


void AMyGameModeBase::SetNumberOfMonster()
{
	

	MonsterCount = GetWorld()->GetNumPawns() - 1;
	UE_LOG(LogTemp, Warning, TEXT("MOB : %d"), MonsterCount);
}

void AMyGameModeBase::ResetNumberOfMob()
{
	MonsterCount--;

	UE_LOG(LogTemp, Warning, TEXT("MOB : %d"), MonsterCount);
	if (MonsterCount <= 0)
	{
		switch (CurrentStage)
		{
		case AMyGameModeBase::EStage::STAGE1:
			OpenPotal1();
			break;
		case AMyGameModeBase::EStage::STAGE2:
			OpenPotal2();
			break;
		case AMyGameModeBase::EStage::STAGE3:
			OpenPotal3();
			break;
		default:
			break;
		};
	}
}
void AMyGameModeBase::OpenPotal1()
{

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStage1Potal::StaticClass(), AllActors);
	for (AActor* Actor : AllActors)
	{
		AStage1Potal* Potal1 = Cast<AStage1Potal>(Actor);
		if (Potal1)
		{
			Potal1->ActivePotal1.Broadcast();
		}
	}

}
void AMyGameModeBase::OpenPotal2()
{
}
void AMyGameModeBase::OpenPotal3()
{
}