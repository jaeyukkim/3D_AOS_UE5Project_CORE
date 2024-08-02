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

	/* Vital Attribute Tags*/



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
	/* SecondaryAttributes Tags */


	
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
	/* Additional Vital Attribute Tags */


	
	/* GamePlay Attribute Tags*/
	
	GameplayTags.Attributes_GamePlay_DropExp =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.GamePlay.DropExp"),
			FString("When you die, you raise your enemy's EXP by this point"));
	GameplayTags.Attributes_GamePlay_DropGold =UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.GamePlay.DropGold"),
			FString("When you die, you raise your enemy's Gold by this point"));
	/* GamePlay Attribute Tags*/

}