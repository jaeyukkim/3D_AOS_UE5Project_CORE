// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"


//데이터 테이블에 있는 능력치를 불러와 적용
UMyGameInstance::UMyGameInstance()
{
	FString CharacterDataPath = TEXT("DataTable'/Game/GameData/ABCharacterData'");

	static ConstructorHelpers::FObjectFinder<UDataTable> DT_MYCHARACTER(*CharacterDataPath);

	MyCharacterTable = DT_MYCHARACTER.Object;


	FString MinionDataPath = TEXT("DataTable'/Game/GameData/MinionData'");

	static ConstructorHelpers::FObjectFinder<UDataTable> DT_MINION(*MinionDataPath);

	MinionDataTable = DT_MINION.Object;
}

void UMyGameInstance::Shutdown()
{
	Super::Shutdown();
	FString SaveSlotName = TEXT("Player1");


	FString SavePath = FPaths::Combine(FPaths::ProjectSavedDir(), 
		TEXT("SaveGames"), FString::Printf(TEXT("%s.sav"), *SaveSlotName));
	

	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SavePath))
	{
		FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*SavePath);
	}
}

void UMyGameInstance::Init()
{
	Super::Init();



}


FMyCharacterData* UMyGameInstance::GetMyCharacterData(int32 Level)
{
	return MyCharacterTable->FindRow<FMyCharacterData>(*FString::FromInt(Level), TEXT(""));
}

FMyCharacterData* UMyGameInstance::GetMyMinionData(int32 Level)
{
	return MinionDataTable->FindRow<FMyCharacterData>(*FString::FromInt(Level), TEXT(""));
}

