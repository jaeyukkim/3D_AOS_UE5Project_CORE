// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameplayTagContainer.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "SeniorProject/Interface/CombatInterface.h"
#include "SeniorProject/Interface/EnemyInterface.h"
#include "CharacterBase.generated.h"


class UAbilitySystemComponent;
class UAttributeSet;
class UGameplayEffect;
class UGameplayAbility;
class UAnimMontage;



UCLASS(abstract)
class SENIORPROJECT_API ACharacterBase : public ACharacter, public IAbilitySystemInterface, public IEnemyInterface, public ICombatInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet()	const { return AttributeSet; }

	
	/* Enemy Interface */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	virtual FGameplayTag GetTeamName_Implementation() const override;
	/* end Enemy Interface */

	
	/*CombatInterface*/
	virtual UAnimMontage* GetAttackMontage_Implementation() override;

	FORCEINLINE virtual void SetCurrentCombo(int32 NewCurrentCombo) override { CurrentCombo = NewCurrentCombo; }
	FORCEINLINE virtual int32 GetCurrentCombo() const override { return CurrentCombo; }
	FORCEINLINE virtual int32 GetMaxAttackCombo() const override { return MaxAttackCombo; }
	FORCEINLINE virtual int32 GetAttackRange() const override {return AttackRange;}
	FORCEINLINE virtual bool IsDead_Implementation() const override {return bDead;}
	FORCEINLINE virtual AActor* GetAvatar_Implementation() override {return this;};



	
	
	virtual UAnimMontage* GetHitReactMontage_Implementation() override;
	virtual void HitReactTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
	virtual FVector GetCombatSocketLocation_Implementation(const FGameplayTag& MontageTag) override;
	
	virtual void Die() override;
	
	UFUNCTION(BlueprintImplementableEvent)
	void DieAction();
	
	UFUNCTION(NetMulticast, Reliable)
	virtual void MulticastHandleDeath();
	/* end CombatInterface*/


	UPROPERTY(EditAnywhere, Category = "Combat")
	FName WeaponTipSocketName;

	UPROPERTY(EditAnywhere, Category = "Combat")
	FName LeftHandSocketName;

	UPROPERTY(EditAnywhere, Category = "Combat")
	FName RightHandSocketName;

	UPROPERTY(EditAnywhere, Category = "Combat")
	FName TailSocketName;

	UPROPERTY(EditAnywhere, Replicated, Category = "Combat")
	FGameplayTag TeamName;

	
protected:
	
	virtual void BeginPlay() override;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

	virtual void InitAbilityActorInfo();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultVitalAttributes;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultAdditionalVitalAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultSecondaryAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultGamePlayAttributes;

	void ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const;
	virtual void InitializeDefaultAttributes() const;
	void AddCharacterAbility();
	
	UPROPERTY(BlueprintReadOnly)
	bool bDead = false;
	
public:	
	
	
	int32 AttackRange;
	UPROPERTY(BlueprintReadOnly, Category = "Combat")
	bool bHitReacting = false;
	
	
private:
	UPROPERTY(EditAnywhere, Category="Abilities")
	TArray<TSubclassOf<UGameplayAbility>> GameplayAbility;

	/*Combat Interface*/
	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<UAnimMontage> HitReactMontage;

	UPROPERTY(EditAnywhere,  Category="Combat")
	TArray<TObjectPtr<UAnimMontage>> AttackMontage;

	int32 MaxAttackCombo = 0;
	int32 CurrentCombo = 0;

	/*Combat Interface*/

	
};
