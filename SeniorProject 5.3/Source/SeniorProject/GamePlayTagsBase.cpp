// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayTagsBase.h"

#include "GameplayTagsManager.h"

FGameplayTagsBase FGameplayTagsBase::GameplayTags;

void FGameplayTagsBase::InitializeNativeGameplayTags()
{
	/* Vital Attribute Tags*/
	GameplayTags.Attributes_Vital_Health =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Vital.Health"),
		FString("Character Current Life Point"));
	GameplayTags.Attributes_Vital_Mana =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Vital.Mana"),
		FString("Character Current Mana"));
	GameplayTags.Attributes_Vital_Exp =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Vital.Exp"),
			FString("Character Current Exp"));

	/* end Vital Attribute Tags */



	/* SecondaryAttributes Tags */
	GameplayTags.Attributes_Secondary_AttackDamage =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.AttackDamage"),
		FString("Increase Physical Damage Value"));
	GameplayTags.Attributes_Secondary_AbilityPower =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.AbilityPower"),
		FString("Increase Magical Damage Value"));
	GameplayTags.Attributes_Secondary_Armor =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.Armor"),
		FString("Reduces Physical Damage"));
	GameplayTags.Attributes_Secondary_MagicResistance =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MagicResistance"),
		FString("Reduces Magical Damage"));
	GameplayTags.Attributes_Secondary_AttackSpeed =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.AttackSpeed"),
		FString("Increase Basic Attack Speed"));
	GameplayTags.Attributes_Secondary_AbilityHaste =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.AbilityHaste"),
		FString("Reduces Ability Cooldown"));
	GameplayTags.Attributes_Secondary_CriticalChance =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalChance"),
		FString("Chance to Basic Attack Double Damage Percentage"));
	GameplayTags.Attributes_Secondary_MovementSpeed =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MovementSpeed"),
		FString("Character Movement Speed"));
	/* end SecondaryAttributes Tags */


	
	/* Additional Vital Attribute Tags */
	GameplayTags.Attributes_AdditionalVital_MaxHealth =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.AdditionalVital.MaxHealth"),
		FString("Character Max Life Point"));
	GameplayTags.Attributes_AdditionalVital_MaxMana =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.AdditionalVital.MaxMana"),
		FString("Character Max Mana Point"));
	GameplayTags.Attributes_AdditionalVital_NextExp =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.AdditionalVital.NextExp"),
	FString("Required Exp until the next level up"));
	GameplayTags.Attributes_AdditionalVital_HealthRegeneration =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.AdditionalVital.HealthRegeneration"),
		FString("CharacterHealth Recovery Amount Per Second"));
	GameplayTags.Attributes_AdditionalVital_ManaRegeneration =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.AdditionalVital.ManaRegeneration"),
		FString("CharacterMana Recovery Amount Per Second"));
	GameplayTags.Attributes_AdditionalVital_Lethality =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.AdditionalVital.Lethality"),
		FString("Ignore The Defense as much as this Point "));
	GameplayTags.Attributes_AdditionalVital_MagicPenetration =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.AdditionalVital.MagicPenetration"),
		FString("Ignore The MagicResistance as much as this Point "));
	GameplayTags.Attributes_AdditionalVital_LifeSteal =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.AdditionalVital.LifeSteal"),
		FString("Character recover by multiplying this percentage of the basic attack damage"));
	/* end Additional Vital Attribute Tags */


	
	/* GamePlay Attribute Tags*/
	
	GameplayTags.Attributes_GamePlay_DropExp =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.GamePlay.DropExp"),
			FString("When you die, you raise your enemy's EXP by this point"));
	GameplayTags.Attributes_GamePlay_DropGold =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.GamePlay.DropGold"),
			FString("When you die, you raise your enemy's Gold by this point"));
	/* end GamePlay Attribute Tags*/
	

	/* Input Tag */
	GameplayTags.Input_LMB =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.LMB"),
			FString("Input Tag for Left Mouse Button"));
	GameplayTags.Input_RMB =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.RMB"),
			FString("Input Tag for Right Mouse Button"));
	GameplayTags.Input_Q =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.Q"),
			FString("Input Tag for Q Keyboard Button"));
	GameplayTags.Input_R =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.R"),
			FString("Input Tag for R Keyboard Button"));
	GameplayTags.Input_SHIFT =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.SHIFT"),
			FString("Input Tag for SHIFT Keyboard Button"));
	GameplayTags.Input_F =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.F"),
			FString("Input Tag for F Keyboard Button"));
	GameplayTags.Input_B =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.B"),
			FString("Input Tag for B Keyboard Button"));
	/* end Input Tag */


	/* Damage Tag */
	GameplayTags.PhysicalDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Damage.PhysicalDamage"),
		FString("PhysicalDamage"));
	GameplayTags.MagicalDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Damage.MagicalDamage"),
		FString("MagicalDamage"));
	GameplayTags.DamageTypes.Add(GameplayTags.PhysicalDamage);
	GameplayTags.DamageTypes.Add(GameplayTags.MagicalDamage);
	/* End Damage Tag */

	
	/* Abilities Tag */
	GameplayTags.Abilities_Combat_Attack = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.Combat.Attack"),
		FString("Attack Ability Tag"));
	GameplayTags.Abilities_Combat_MeleeAttack = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.Combat.MeleeAttack"),
		FString("Attack Ability Tag"));
	GameplayTags.Abilities_Combat_RangeAttack = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.Combat.RangeAttack"),
		FString("Attack Ability Tag"));
	GameplayTags.Abilities_Combat_SaveCombo = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.Combat.SaveCombo"),
		FString("Attack Ability Tag"));
	GameplayTags.Abilities_Combat_ResetCombo = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.Combat.ResetCombo"),
		FString("Attack Ability Tag"));


	GameplayTags.Abilities_AbilityQ = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.AbilityQ"),
		FString("AbilityQ Tag"));
	GameplayTags.Abilities_AbilityRMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.AbilityRMB"),
		FString("AbilityRMB Tag"));
	GameplayTags.Abilities_AbilityR = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.AbilityR"),
		FString("AbilityR Tag"));
	GameplayTags.Abilities_AbilitySHIFT = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.AbilitySHIFT"),
		FString("AbilitySHIFT Tag"));
	GameplayTags.Abilities_AbilityF = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.AbilityF"),
		FString("AbilityF Tag"));
	GameplayTags.Abilities_NONE = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.NONE"),
		FString("NONE Tag"));
	/* end Abilities Tag */



	
	/* Cool Down*/
	GameplayTags.Cooldown_AbilityQ = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Cooldown.AbilityQ"),
		FString("AbilityQ Cooldown Tag"));
	GameplayTags.Cooldown_AbilityRMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Cooldown.AbilityRMB"),
	FString("AbilityRMB Cooldown Tag"));
	GameplayTags.Cooldown_AbilityR = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Cooldown.AbilityR"),
	FString("AbilityR Cooldown Tag"));
	GameplayTags.Cooldown_AbilitySHIFT = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Cooldown.AbilitySHIFT"),
	FString("AbilitySHIFT Cooldown Tag"));
	GameplayTags.Cooldown_AbilityF = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Cooldown.AbilityF"),
	FString("AbilityF Cooldown Tag"));
	/* End Cool Down*/



	
	/* Combat Sockets */
	GameplayTags.CombatSocket_Weapon = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("CombatSocket.Weapon"),
		FString("Weapon"));

	GameplayTags.CombatSocket_RightHand = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("CombatSocket.RightHand"),
		FString("Right Hand"));
	
	GameplayTags.CombatSocket_LeftHand = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("CombatSocket.LeftHand"),
		FString("Left Hand"));

	GameplayTags.CombatSocket_Tail = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("CombatSocket.Tail"),
		FString("Tail"));
	/* end Combat Sockets */

	
	/* GameRuleTag */
	GameplayTags.GameRule_TeamName_BlueTeam = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("GameRule.TeamName.BlueTeam"),
			FString("BlueTeam"));
	GameplayTags.GameRule_TeamName_RedTeam = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("GameRule.TeamName.RedTeam"),
		FString("RedTeam"));
	GameplayTags.GameRule_TeamName_NeutralityTeam = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("GameRule.TeamName.NeutralityTeam"),
		FString("NeutralityTeam"));
		
	GameplayTags.GameRule_Line_Top = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("GameRule.Line.Top"),
		FString("TopLine"));
	GameplayTags.GameRule_Line_Mid = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("GameRule.Line.Mid"),
		FString("MidLine"));
	GameplayTags.GameRule_Line_Bottom = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("GameRule.Line.Bottom"),
		FString("BottomLine"));

	GameplayTags.GameRule_Turret_FirstTurret = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("GameRule.Turret.FirstTurret"),
		FString("FirstTurret"));
	GameplayTags.GameRule_Turret_SecondTurret = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("GameRule.Turret.SecondTurret"),
		FString("SecondTurret"));
	GameplayTags.GameRule_Turret_ThirdTurret = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("GameRule.Turret.ThirdTurret"),
		FString("ThirdTurret"));

	GameplayTags.GameRule_Turret_Inhibitor = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("GameRule.Turret.Inhibitor"),
		FString("Inhibitor"));
	GameplayTags.GameRule_Turret_Nexus = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("GameRule.Turret.Nexus"),
		FString("Nexus"));
	/* end GameRuleTag */

	

	
	GameplayTags.Effects_HitReact = UGameplayTagsManager::Get().AddNativeGameplayTag(
			FName("Effects.HitReact"),FString("Tag granted when Hit Reacting"));
	GameplayTags.Effects_DieReact = UGameplayTagsManager::Get().AddNativeGameplayTag(
			FName("Effects.DieReact"),FString("Tag granted when Die DieReact"));
}