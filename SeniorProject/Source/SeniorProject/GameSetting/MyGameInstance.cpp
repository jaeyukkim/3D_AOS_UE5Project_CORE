// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

//������ ���̺� �ִ� �ɷ�ġ�� �ҷ��� ����
UMyGameInstance::UMyGameInstance()
{
	FString CharacterDataPath = TEXT("DataTable'/Game/GameData/ABCharacterData'");

	static ConstructorHelpers::FObjectFinder<UDataTable> DT_MYCHARACTER(*CharacterDataPath);

	MyCharacterTable = DT_MYCHARACTER.Object;


	FString MinionDataPath = TEXT("DataTable'/Game/GameData/MinionData'");

	static ConstructorHelpers::FObjectFinder<UDataTable> DT_MINION(*MinionDataPath);

	MinionDataTable = DT_MINION.Object;
}

void UMyGameInstance::Init()
{
	Super::Init();

	UE_LOG(LogTemp, Warning, TEXT("DropExp of Level 20 : %d"), GetMyCharacterData(20)->DropExp);

	
}


FMyCharacterData* UMyGameInstance::GetMyCharacterData(int32 Level)
{
	return MyCharacterTable->FindRow<FMyCharacterData>(*FString::FromInt(Level), TEXT(""));
}

FMyCharacterData* UMyGameInstance::GetMyMinionData(int32 Level)
{
	return MinionDataTable->FindRow<FMyCharacterData>(*FString::FromInt(Level), TEXT(""));
}