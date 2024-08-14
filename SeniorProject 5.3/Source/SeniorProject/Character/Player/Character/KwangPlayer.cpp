// Fill out your copyright notice in the Description page of Project Settings.


#include "KwangPlayer.h"
#include "SeniorProject/PlayerBase/AbilityComponent.h"

AKwangPlayer::AKwangPlayer()
{
	SetCharacterSetting();
}

/*
void AKwangPlayer::Ability_Q()
{


	if (bIsCasting)
		return;

	if (::IsValid(AbilityComponent))
	{

		if (GetBool_IsNoWep())
			AbilityComponent->Q_Ability_NoWep();
		else
			AbilityComponent->AbilityRangeTrace();
	}

}


void AKwangPlayer::Ability_RMB()
{

	if (bIsCasting)
		return;

	if (::IsValid(AbilityComponent))
	{

		if (GetBool_IsNoWep())
			AbilityComponent->RMB_NoWep_Ability();

		else
			AbilityComponent->RMB_Ability();
	}
}

void AKwangPlayer::Ability_R()
{


	if (bIsCasting)
		return;

	if (::IsValid(AbilityComponent))
	{

		if (GetBool_IsNoWep())
			AbilityComponent->R_Ability_NoWep();

		else
			AbilityComponent->R_Ability();
	}

}
*/
void AKwangPlayer::LSB()
{
	if (bIsCasting)
		return;


	if (!GetBool_IsNoWep() && AbilityComponent->GetIsActiveRangeTrace())
	{

		AbilityComponent->Q_Ability();
		return;

	}



	if (IsAttacking)
		SaveAttack = true;

	else if (IsAttacking == false)
	{
		IsAttacking = true;

		if(HasAuthority())
			Attack();
		else
		{
			Attack();
		}
	}

}

void AKwangPlayer::SetCharacterSetting()
{

	

	AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("Ability"));




	


	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;


	AttackWidthArea = 15.0f;
	AttackRange = 300.0f;
	IsRightAttack = true;
	RightSoketBottom = FName(TEXT("FX_weapon_base"));
	RightSoketTop = FName(TEXT("FX_weapon_tip"));
	LeftSoketBottom = FName(TEXT("FX_weapon_base"));
	LeftSoketTop = FName(TEXT("FX_weapon_tip"));


	DeadTimer = 5.0f;
	bIsCasting = false;
	IsAttacking = false;
	SaveAttack = true;
	AttackCount = 0;

	
}