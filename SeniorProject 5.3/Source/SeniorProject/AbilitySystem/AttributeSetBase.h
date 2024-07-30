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


	/* 기본 필수 스텟 */
	UPROPERTY(BlueprintReadOnly ,ReplicatedUsing = OnRep_Health, Category="Vital Attribute")
		FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Health);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Mana, Category="Vital Attribute")
		FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Mana);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_AttackDamage, Category="Vital Attribute")
		FGameplayAttributeData AttackDamage;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, AttackDamage);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Exp, Category="Vital Attribute")
	FGameplayAttributeData Exp;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Exp);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Armor, Category="Vital Attribute")
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Armor);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MovementSpeed, Category="Vital Attribute")
	FGameplayAttributeData MovementSpeed;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, MovementSpeed);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CriticalChance, Category="Vital Attribute")
	FGameplayAttributeData CriticalChance;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, CriticalChance);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_LifeSteal, Category="Vital Attribute")
	FGameplayAttributeData LifeSteal;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, LifeSteal);
	
	/* 기본 필수 스텟 */

	
	/* 기본 필수 스텟 추가 정보 */

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth, Category="Aditional Info Vital Attribute")
		FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, MaxHealth);
	
	UPROPERTY(BlueprintReadOnly ,ReplicatedUsing = OnRep_HealthRegeneration, Category="Aditional Info Vital Attribute")
		FGameplayAttributeData HealthRegeneration;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, HealthRegeneration);


	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMana, Category="Aditional Info Vital Attribute")
		FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, MaxMana);

	UPROPERTY(BlueprintReadOnly ,ReplicatedUsing = OnRep_ManaRegeneration, Category="Aditional Info Vital Attribute")
		FGameplayAttributeData ManaRegeneration;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, ManaRegeneration);
	
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_DropExp, Category="Aditional Info Vital Attribute")
		FGameplayAttributeData DropExp;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, DropExp);
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_NextExp, Category="Aditional Info Vital Attribute")
		FGameplayAttributeData NextExp;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, NextExp);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_DropGold, Category="Aditional Info Vital Attribute")
	FGameplayAttributeData DropGold;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, DropGold);
	/* 기본 필수 스텟 추가 정보 */
	
	
	
	
	
	
	
	
	/* 기본 필수 스텟 */
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth) const;
	
	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldMana) const;

	UFUNCTION()
	void OnRep_Armor(const FGameplayAttributeData& OldArmor) const;
	
	UFUNCTION()
	void OnRep_MovementSpeed(const FGameplayAttributeData& OldMovementSpeed) const;
	
	UFUNCTION()
	void OnRep_CriticalChance(const FGameplayAttributeData& OldCriticalChance) const;

	UFUNCTION()
	void OnRep_LifeSteal(const FGameplayAttributeData& OldLifeSteal) const;
	
	UFUNCTION()
	void OnRep_AttackDamage(const FGameplayAttributeData& OldAttackDamage) const;
	
	UFUNCTION()
	void OnRep_Exp(const FGameplayAttributeData& OldExp) const;

	UFUNCTION()
	void OnRep_DropGold(const FGameplayAttributeData& OldDropGold) const;
	/* 기본 필수 스텟 */



	
	/* 기본 필수 스텟 추가 정보 */
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const;

	UFUNCTION()
	void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const;

	UFUNCTION()
	void OnRep_DropExp(const FGameplayAttributeData& OldDropExp) const;
	
	UFUNCTION()
	void OnRep_NextExp(const FGameplayAttributeData& OldNextExp) const;

	UFUNCTION()
	void OnRep_HealthRegeneration(const FGameplayAttributeData& OldHealthRegeneration) const;

	UFUNCTION()
	void OnRep_ManaRegeneration(const FGameplayAttributeData& OldManaRegeneration) const;
	/* 기본 필수 스텟 추가 정보 */


	
private:

	void SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props) const;
};
