// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

struct FGameplayTagsBase
{
public:
	static const FGameplayTagsBase& Get() { return GameplayTags;}
	static void InitializeNativeGameplayTags();

	static FGameplayTagsBase GameplayTags;

	
	/* Vital Attribute Tags*/
	FGameplayTag Attributes_Vital_Health;
	FGameplayTag Attributes_Vital_Mana;
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
	FGameplayTag Attributes_AdditionalVital_Lethality;
	FGameplayTag Attributes_AdditionalVital_MagicPenetration;
	FGameplayTag Attributes_AdditionalVital_LifeSteal;
	/* Additional Vital Attribute Tags */


	/* GamePlay Attribute Tags*/
	FGameplayTag Attributes_GamePlay_DropExp;
	FGameplayTag Attributes_GamePlay_DropGold;
	/* GamePlay Attribute Tags*/

	

	FGameplayTag Attributes_Meta_IncomingXP;
	

	/* Input Tag */
	FGameplayTag Input_LMB;
	FGameplayTag Input_RMB;
	FGameplayTag Input_Q;
	FGameplayTag Input_R;
	FGameplayTag Input_SHIFT;
	FGameplayTag Input_F;
	FGameplayTag Input_B;
	/* Input Tag */

	FGameplayTag PhysicalDamage;
	FGameplayTag MagicalDamage;
	TArray<FGameplayTag> DamageTypes;


	/*Debuff Tag*/
	FGameplayTag Debuff_Duration;
	FGameplayTag Debuff_Frequency;
	FGameplayTag Debuff_DebuffCoefficient;

	FGameplayTag Debuff_Type_Stun;
	FGameplayTag Debuff_Type_MovementSlow;
	FGameplayTag Debuff_Type_AttackSpeedSlow;
	FGameplayTag Debuff_Type_Physical;
	FGameplayTag Debuff_Type_ArmorDecrease;
	FGameplayTag Debuff_Type_MagicResistanceDecrease;
	FGameplayTag Debuff_Type_DebuffDamage;
	TArray<FGameplayTag> DebuffTypes;
	/*Debuff Tag*/

	

	/*CombatSocket Tag*/
	FGameplayTag CombatSocket_Weapon;
	FGameplayTag CombatSocket_RightHand;
	FGameplayTag CombatSocket_LeftHand;
	FGameplayTag CombatSocket_Tail;
	/*CombatSocket Tag*/


	
	/* GameRuleTag */
	FGameplayTag GameRule_TeamName_BlueTeam;
	FGameplayTag GameRule_TeamName_RedTeam;
	FGameplayTag GameRule_TeamName_NeutralityTeam;

	FGameplayTag GameRule_Line_Top;
	FGameplayTag GameRule_Line_Mid;
	FGameplayTag GameRule_Line_Bottom;

	FGameplayTag GameRule_Turret_FirstTurret;
	FGameplayTag GameRule_Turret_SecondTurret;
	FGameplayTag GameRule_Turret_ThirdTurret;
	
	FGameplayTag GameRule_Turret_Inhibitor;
	FGameplayTag GameRule_Turret_Nexus;
	/* End GameRuleTag */

	

	/* Abilities */
	FGameplayTag Abilities_Combat_Attack;
	FGameplayTag Abilities_Combat_MeleeAttack;
	FGameplayTag Abilities_Combat_RangeAttack;
	FGameplayTag Abilities_Combat_ResetCombo;
	FGameplayTag Abilities_Combat_SaveCombo;
	FGameplayTag Abilities_Combat_CastingOn;



	FGameplayTag Abilities_AbilityQ;
	FGameplayTag Abilities_AbilityRMB;
	FGameplayTag Abilities_AbilityR;
	FGameplayTag Abilities_AbilityF;
	FGameplayTag Abilities_AbilitySHIFT;
	FGameplayTag Abilities_NONE;
	
	FGameplayTag Abilities_Status_Locked;
	/* End Abilities */


	/* Cool Down*/
	FGameplayTag Cooldown_AbilityQ;
	FGameplayTag Cooldown_AbilityRMB;
	FGameplayTag Cooldown_AbilityR;
	FGameplayTag Cooldown_AbilityF;
	FGameplayTag Cooldown_AbilitySHIFT;
	/* End Cool Down*/


	/* Effect */
	FGameplayTag Effects_HitReact;
	FGameplayTag Effects_DieReact;
	/* End Effect */


	
	
};

