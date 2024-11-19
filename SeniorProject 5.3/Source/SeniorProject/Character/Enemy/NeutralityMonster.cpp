// Fill out your copyright notice in the Description page of Project Settings.


#include "NeutralityMonster.h"

#include "SeniorProject/GamePlayTagsBase.h"

ANeutralityMonster::ANeutralityMonster()
{
	TeamName = FGameplayTagsBase::Get().GameRule_TeamName_NeutralityTeam;
}
