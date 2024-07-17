// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "Engine/DataTable.h"
#include "Engine/GameInstance.h"
#include "Engine/StreamableManager.h"
#include "MyGameInstance.generated.h"

/**
	½ºÅÝ Àû¿ë
 */

USTRUCT(BlueprintType)
struct FMyCharacterData : public FTableRowBase
{
	GENERATED_BODY()

public:
	FMyCharacterData() : Level(1), MaxHp(100.0f), Attack(10.0f), DropExp(10), NextExp(30) { }

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		float MaxHp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		float Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 DropExp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 NextExp;
};



UCLASS()
class SENIORPROJECT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	

public:
	UMyGameInstance();
	virtual void Shutdown() override;
	virtual void Init() override;


	FMyCharacterData* GetMyCharacterData(int32 Level);
	FMyCharacterData* GetMyMinionData(int32 Level);
	
	UPROPERTY(VisibleAnywhere, Category = Basic)
		FString SavedCharacterData;

	FStreamableManager StreamableManager;
	// Function to clear the data


private:
	UPROPERTY()
		class UDataTable* MyCharacterTable;
	
	UPROPERTY()
		class UDataTable* MinionDataTable;



	

};
