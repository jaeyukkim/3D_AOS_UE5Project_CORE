// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

#include "SeniorProject/Character/Player/Character/MyCharacter.h"
#include "SeniorProject/Character/Player/PlayerBase/MyPlayerState.h"
#include"SeniorProject/Character/Player/PlayerBase/MyPlayerController.h"

#include "Stage1Potal.h"

AMyGameModeBase::AMyGameModeBase()
{
	

	OnMobDeleted.AddLambda([this]() -> void
		{
			ResetNumberOfMob();
		});
	CurrentStage = EStage::STAGE1;
	MonsterCount = 2;
}
void AMyGameModeBase::StartPlay()
{
	Super::StartPlay();
	SetNumberOfMonster();
}

void AMyGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	MyPlayerState = Cast<AMyPlayerState>(NewPlayer->PlayerState);

	if(MyPlayerState	!= nullptr)
		MyPlayerState->InitPlayerData();
}

void AMyGameModeBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	OnMobDeleted.Clear();
}


void AMyGameModeBase::SetNumberOfMonster()
{
	

	MonsterCount = 0;
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
			if (MyPlayerState)
				MyPlayerState->SavePlayerData();
		}
	}

}
void AMyGameModeBase::OpenPotal2()
{
}
void AMyGameModeBase::OpenPotal3()
{
}