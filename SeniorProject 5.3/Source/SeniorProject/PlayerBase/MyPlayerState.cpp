// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerState.h"
#include "SeniorProject/GameSetting/MyGameInstance.h"
#include "MyCharacterStatComponent.h"
#include "SeniorProject/GameSetting/MySaveGame.h"


AMyPlayerState::AMyPlayerState()
{
	CharacterLevel = 1;
	Exp = 0;
	SaveSlotName = TEXT("Player1");

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UAttributeSet>("AttributeSet");

	NetUpdateFrequency = 100.0f;

}


void AMyPlayerState::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	OnPlayerStateChanged.Clear();
}


int32 AMyPlayerState::GetCharacterLevel() const
{
	return CharacterLevel;
}

void AMyPlayerState::InitPlayerData()
{
	auto MySaveGame = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, 0));
	if (nullptr == MySaveGame)
	{
		MySaveGame = GetMutableDefault<UMySaveGame>();
	}

	LevelUp(MySaveGame->Level);
	Exp = MySaveGame->Exp;

	
	SavePlayerData();
}

void AMyPlayerState::SavePlayerData()
{
	UMySaveGame* NewPlayerData = NewObject<UMySaveGame>();

	NewPlayerData->Level = CharacterLevel;
	NewPlayerData->Exp = Exp;


	if (!UGameplayStatics::SaveGameToSlot(NewPlayerData, SaveSlotName, 0))
	{
		UE_LOG(LogTemp, Warning, TEXT("SaveGame Error!"));
	}
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
		LevelUp(CharacterLevel + 1);
		DidLevelUp = true;
	}

	OnPlayerStateChanged.Broadcast();


	return DidLevelUp;
}



void AMyPlayerState::LevelUp(int32 NewCharacterLevel)
{
	auto MyGameInstance = Cast<UMyGameInstance>(GetGameInstance());

	if(MyGameInstance)
		CurrentStatData = MyGameInstance->GetMyCharacterData(NewCharacterLevel);

	CharacterLevel = NewCharacterLevel;

	OnPlayerStateChanged.Broadcast();

	UE_LOG(LogTemp, Warning, TEXT("LevelUp"));
}

UAbilitySystemComponent* AMyPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}