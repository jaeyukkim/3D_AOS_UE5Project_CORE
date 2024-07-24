// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "AttributeSetBase.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UAttributeSetBase();

	virtual void GetLifetimeReplicatedProps(TArray< class FLifetimeProperty >& OutLifetimeProps) const override;

	UPROPERTY(ReplicatedUsing = OnRep_Health)
		FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Health);


	UPROPERTY(ReplicatedUsing = OnRep_MaxHealth)
		FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, MaxHealth);


	UPROPERTY(ReplicatedUsing = OnRep_Mana)
		FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Mana);


	UPROPERTY(ReplicatedUsing = OnRep_MaxMana)
		FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, MaxMana);

	UPROPERTY(ReplicatedUsing = OnRep_Level)
		FGameplayAttributeData Level;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Level);


	UPROPERTY(ReplicatedUsing = OnRep_AttackRating)
		FGameplayAttributeData AttackRating;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, AttackRating);


	UPROPERTY(ReplicatedUsing = OnRep_DropExp)
		FGameplayAttributeData DropExp;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, DropExp);


	UPROPERTY(ReplicatedUsing = OnRep_NextExp)
		FGameplayAttributeData NextExp;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, NextExp);




	UFUNCTION()
		void OnRep_Health(const FGameplayAttributeData& OldHealth);
	UFUNCTION()
		void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
	UFUNCTION()
		void OnRep_Mana(const FGameplayAttributeData& OldMana);
	UFUNCTION()
		void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);
	UFUNCTION()
		void OnRep_Level(const FGameplayAttributeData& OldLevel);
	UFUNCTION()
		void OnRep_AttackRating(const FGameplayAttributeData& OldAttackRating);
	UFUNCTION()
		void OnRep_DropExp(const FGameplayAttributeData& OldDropExp);
	UFUNCTION()
		void OnRep_NextExp(const FGameplayAttributeData& OldNextExp);


};
