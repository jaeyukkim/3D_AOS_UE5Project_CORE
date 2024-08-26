// Fill out your copyright notice in the Description page of Project Settings.


#include "KwangPlayer.h"

#include "SeniorProject/PlayerBase/AbilityComponent.h"

AKwangPlayer::AKwangPlayer()
{
	CharacterClass = ECharacterClass::Kwang;
	SetCharacterSetting();
}


void AKwangPlayer::SetCharacterSetting()
{

	AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("Ability"));
	

	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;

	
	AttackRange = 300.0f;
	
}