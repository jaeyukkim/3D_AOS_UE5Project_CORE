// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

struct FGameplayTagsBase
{
public:
	static const FGameplayTagsBase& Get() { return GameplayTags;}
	static void InitializeNativeGameplayTags();

	/* Vital Attribute Tags*/
	FGameplayTag Attributes_Vital_Health;
	FGameplayTag Attributes_Vital_Mana;
	FGameplayTag Attributes_Vital_Exp;

	/* Vital Attribute Tags*/

	/* SecondaryAttributes Tags */
	FGameplayTag Attributes_Secondary_AttackDamage;
	FGameplayTag Attributes_Secondary_AbilityPower;
	FGameplayTag Attributes_Secondary_Armor;
	FGameplayTag Attributes_Secondary_MagicResistance;
	FGameplayTag Attributes_Secondary_AttackSpeed;
	FGameplayTag Attributes_Secondary_AbilityHaste;
	FGameplayTag Attributes_Secondary_CriticalChance;
	FGameplayTag Attributes_Secondary_MovementSpeed;
	/* SecondaryAttributes Tags */


	/* Additional Vital Attribute Tags */
	FGameplayTag Attributes_AdditionalVital_MaxHealth;
	FGameplayTag Attributes_AdditionalVital_HealthRegeneration;
	FGameplayTag Attributes_AdditionalVital_MaxMana;
	FGameplayTag Attributes_AdditionalVital_ManaRegeneration;
	FGameplayTag Attributes_AdditionalVital_NextExp;
	FGameplayTag Attributes_AdditionalVital_Lethality;
	FGameplayTag Attributes_AdditionalVital_MagicPenetration;
	FGameplayTag Attributes_AdditionalVital_LifeSteal;
	/* Additional Vital Attribute Tags */


	/* GamePlay Attribute Tags*/
	FGameplayTag Attributes_GamePlay_DropExp;
	FGameplayTag Attributes_GamePlay_DropGold;
	/* GamePlay Attribute Tags*/


	/* Input Tag */
	FGameplayTag Input_LMB;
	FGameplayTag Input_RMB;
	FGameplayTag Input_Q;
	FGameplayTag Input_R;
	/* Input Tag */



protected:
private:
	static FGameplayTagsBase GameplayTags;
};

