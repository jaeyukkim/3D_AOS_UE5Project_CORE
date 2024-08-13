// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "GameFramework/Character.h"
#include "GameplayEffectExtension.h"
#include "AttributeSetBase.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)


//	typedef is specific to the FGameplayAttribute() signature, but TStaticFunPtr is generic to any signature chosen
//	typedef TBaseStaticDelegateInstance<FGameplayAttribute(), FDefaultDelegateUserPolicy>::FFuncPtr FAttributeFuncPtr;
// StaticFunction 함수 포인터와 델리게이트 지정
template<class T>
using TStaticFuncPtr = typename TBaseStaticDelegateInstance<T, FDefaultDelegateUserPolicy>::FFuncPtr;

USTRUCT()
struct FEffectProperties
{
	GENERATED_BODY()

		FEffectProperties() {}
	
	FGameplayEffectContextHandle EffectContextHandle;

	UPROPERTY()
		UAbilitySystemComponent* SourceASC = nullptr;

	UPROPERTY()
		AActor* SourceAvatarActor = nullptr;

	UPROPERTY()
		AController* SourceController = nullptr;

	UPROPERTY()
		ACharacter* SourceCharacter = nullptr;

	UPROPERTY()
		UAbilitySystemComponent* TargetASC = nullptr;

	UPROPERTY()
		AActor* TargetAvatarActor = nullptr;

	UPROPERTY()
		AController* TargetController = nullptr;

	UPROPERTY()
		ACharacter* TargetCharacter = nullptr;
};
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
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;


	TMap<FGameplayTag, TStaticFuncPtr<FGameplayAttribute()>> TagsToAttributes;



	
	/* Vital Attribute */
	UPROPERTY(BlueprintReadOnly ,ReplicatedUsing = OnRep_Health, Category="Vital Attribute")
		FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Health);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Mana, Category="Vital Attribute")
		FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Mana);
		
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Exp, Category="Vital Attribute")
	FGameplayAttributeData Exp;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Exp);
	/* Vital Attribute */

	
	
	/* SecondaryAttributes */
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_AttackDamage, Category="SecondaryAttributes")
		FGameplayAttributeData AttackDamage;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, AttackDamage);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_AbilityPower, Category="SecondaryAttributes")
		FGameplayAttributeData AbilityPower;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, AbilityPower);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Armor, Category="SecondaryAttributes")
		FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Armor);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MagicResistance, Category="SecondaryAttributes")
		FGameplayAttributeData	MagicResistance;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, MagicResistance);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_AttackSpeed, Category="SecondaryAttributes")
		FGameplayAttributeData AttackSpeed;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, AttackSpeed);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_AbilityHaste, Category="SecondaryAttributes")
		FGameplayAttributeData AbilityHaste;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, AbilityHaste);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CriticalChance, Category="SecondaryAttributes")
		FGameplayAttributeData CriticalChance;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, CriticalChance);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MovementSpeed, Category="SecondaryAttributes")
	FGameplayAttributeData MovementSpeed;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, MovementSpeed);
	/* SecondaryAttributes */


	
	/* Additional Vital Attribute */
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth, Category="Additional Vital Attribute")
		FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, MaxHealth);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMana, Category="Additional Vital Attribute")
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, MaxMana);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_NextExp, Category="Additional Vital Attribute")
	FGameplayAttributeData NextExp;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, NextExp);
	
	UPROPERTY(BlueprintReadOnly ,ReplicatedUsing = OnRep_HealthRegeneration, Category="Additional Vital Attribute")
		FGameplayAttributeData HealthRegeneration;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, HealthRegeneration);

	UPROPERTY(BlueprintReadOnly ,ReplicatedUsing = OnRep_ManaRegeneration, Category="Additional Vital Attribute")
		FGameplayAttributeData ManaRegeneration;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, ManaRegeneration);
	
	UPROPERTY(BlueprintReadOnly ,ReplicatedUsing = OnRep_Lethality, Category="Additional Vital Attribute")
	FGameplayAttributeData Lethality;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Lethality);

	UPROPERTY(BlueprintReadOnly ,ReplicatedUsing = OnRep_MagicPenetration, Category="Additional Vital Attribute")
	FGameplayAttributeData MagicPenetration;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, MagicPenetration);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_LifeSteal, Category="Additional Vital Attribute")
		FGameplayAttributeData LifeSteal;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, LifeSteal);
	/* Additional Vital Attribute */

	

	/* GamePlay Attribute */
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_DropExp, Category="GamePlay Attribute")
	FGameplayAttributeData DropExp;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, DropExp);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_DropGold, Category="GamePlay Attribute")
	FGameplayAttributeData DropGold;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, DropGold);
	/* GamePlay Attribute */


	/*
	 * Meta Attributes
	 */

	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData IncomingDamage;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, IncomingDamage);
	
/* -------------------------OnRep---------------------------------*/

	
	/* Vital Attribute */
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth) const;
	
	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldMana) const;
	
	UFUNCTION()
	void OnRep_NextExp(const FGameplayAttributeData& OldNextExp) const;
	/* Vital Attribute */

	
	
	/* SecondaryAttributes */
	UFUNCTION()
	void OnRep_AttackDamage(const FGameplayAttributeData& OldAttackDamage) const;

	UFUNCTION()
	void OnRep_AbilityPower(const FGameplayAttributeData& OldAbilityPower) const;

	UFUNCTION()
	void OnRep_Armor(const FGameplayAttributeData& OldArmor) const;

	UFUNCTION()
	void OnRep_MagicResistance(const FGameplayAttributeData& OldMagicResistance) const;
	
	UFUNCTION()
	void OnRep_MovementSpeed(const FGameplayAttributeData& OldMovementSpeed) const;
	
	UFUNCTION()
	void OnRep_CriticalChance(const FGameplayAttributeData& OldCriticalChance) const;

	UFUNCTION()
	void OnRep_AbilityHaste(const FGameplayAttributeData& OldAbilityHaste) const;

	UFUNCTION()
	void OnRep_AttackSpeed(const FGameplayAttributeData& OldAttackSpeed) const;
	/* SecondaryAttributes */


	
	/* Additional Vital Attribute */
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const;

	UFUNCTION()
	void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const;

	UFUNCTION()
	void OnRep_HealthRegeneration(const FGameplayAttributeData& OldHealthRegeneration) const;

	UFUNCTION()
	void OnRep_ManaRegeneration(const FGameplayAttributeData& OldManaRegeneration) const;
	
	UFUNCTION()
	void OnRep_LifeSteal(const FGameplayAttributeData& OldLifeSteal) const;
	
	UFUNCTION()
	void OnRep_Lethality(const FGameplayAttributeData& OldLethality) const;
	
	UFUNCTION()
	void OnRep_MagicPenetration(const FGameplayAttributeData& OldMagicPenetration) const;
	/* Additional Vital Attribute */


	
	/* GamePlay Attribute */
	UFUNCTION()
	void OnRep_Exp(const FGameplayAttributeData& OldExp) const;
	
	UFUNCTION()
	void OnRep_DropGold(const FGameplayAttributeData& OldDropGold) const;
	
	UFUNCTION()
	void OnRep_DropExp(const FGameplayAttributeData& OldDropExp) const;
	/* GamePlay Attribute */


	
private:

	void SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props) const;
};
