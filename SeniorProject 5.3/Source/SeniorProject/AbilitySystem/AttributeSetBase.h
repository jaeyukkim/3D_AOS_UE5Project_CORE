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

	
	

	/*
	 * Meta Attributes
	 */

	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData IncomingDamage;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, IncomingDamage);

	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData IncomingXP;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, IncomingXP);

	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData IncomingGold;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, IncomingGold);
	
/* -------------------------OnRep---------------------------------*/

	
	/* Vital Attribute */
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth) const;
	
	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldMana) const;

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





	
private:

	void SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props) const;
	void ShowFloatingText(const FEffectProperties& Props, float Damage, bool bCriticalHit, bool bMagicalDamage) const;
	void ShowGoldAmountText(const FEffectProperties& Props, float GoldAmount) const;
	void NotifyMinionTarget(AActor* DamagedActor, AActor* Instigator); // 적 플레이어에 의해 플레이어 피격시 주변의 팀 미니언들에게 적 플레이어를 타겟팅 하도록 함
	void SendXPEvent(const FEffectProperties& Props);
	void SendGoldEvent(const FEffectProperties& Props);
	void HandleIncomingDamage(const FEffectProperties& Props);
	void HandleIncomingXP(const FEffectProperties& Props);
	void HandleIncomingGold(const FEffectProperties& Props);
	void Debuff(const FEffectProperties& Props);
	bool bIsNeedToUpdateAttribute(const FEffectProperties& Props);
	
};
