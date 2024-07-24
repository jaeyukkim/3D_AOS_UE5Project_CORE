// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "SeniorProject/PlayerBase/MyCharacter.h"
#include "KwangPlayer.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API AKwangPlayer : public AMyCharacter
{
	GENERATED_BODY()

public:
	AKwangPlayer();

	virtual void SetCharacterSetting() override;
	virtual void Ability_RMB() override;
	virtual void Ability_R() override;
	virtual void Ability_Q() override;
	virtual void LSB() override;
	

};
