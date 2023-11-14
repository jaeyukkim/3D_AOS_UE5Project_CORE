// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/Player/MyPlayerState.h"
#include "SeniorProject/GameSetting/MyGameInstance.h"


AMyPlayerState::AMyPlayerState()
{
	CharacterLevel = 1;
	Exp = 0;
}


int32 AMyPlayerState::GetCharacterLevel() const
{
	return CharacterLevel;
}

void AMyPlayerState::InitPlayerData()
{
	SetPlayerName(TEXT("JaeYuk"));
	SetLevel(10);

	Exp = 0;
}

float AMyPlayerState::GetExpRatio() const
{
	if (CurrentStatData->NextExp <= KINDA_SMALL_NUMBER)
		return 0.0f;

	float Result = (float)Exp / (float)CurrentStatData->NextExp;
	return Result;
}

bool AMyPlayerState::AddExp(int32 IncomeExp)
{
	if (CurrentStatData->NextExp == -1)
		return false;

	bool DidLevelUp = false;
	Exp = Exp + IncomeExp;
	if (Exp >= CurrentStatData->NextExp)
	{
		Exp -= CurrentStatData->NextExp;
		SetLevel(CharacterLevel + 1);
		DidLevelUp = true;
	}

	OnPlayerStateChanged.Broadcast();
	return DidLevelUp;
}



void AMyPlayerState::SetLevel(int32 NewCharacterLevel)
{
	auto MyGameInstance = Cast<UMyGameInstance>(GetGameInstance());


	CurrentStatData = MyGameInstance->GetMyCharacterData(NewCharacterLevel);

	CharacterLevel = NewCharacterLevel;
}