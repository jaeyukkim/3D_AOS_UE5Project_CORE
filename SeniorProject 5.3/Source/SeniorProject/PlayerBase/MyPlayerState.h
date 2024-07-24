// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "MyPlayerState.generated.h"

/**
 * 
 */


DECLARE_MULTICAST_DELEGATE(FOnPlayerStateChangedDelegate);
UCLASS()
class SENIORPROJECT_API AMyPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()


public:
	AMyPlayerState();
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	int32 GetCharacterLevel() const;
	float GetExpRatio() const;
	FString SaveSlotName;

	UFUNCTION()
	bool AddExp(int32 IncomeExp);
	

	void InitPlayerData();
	void SavePlayerData();

	FOnPlayerStateChangedDelegate OnPlayerStateChanged;
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet()	const { return AttributeSet; }


	

protected:

	int32 CharacterLevel;
	int32 Exp;
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	TObjectPtr<UAttributeSet> AttributeSet;


private:
	void LevelUp(int32 NewCharacterLevel);
	struct FMyCharacterData* CurrentStatData;
};
