// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "SeniorProject/Interface/CombatInterface.h"
#include "SeniorProject/Interface/EnemyInterface.h"
#include "CharacterBase.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);

class UAbilitySystemComponent;
class UAttributeSet;
class UGameplayEffect;

UCLASS(abstract)
class SENIORPROJECT_API ACharacterBase : public ACharacter, public IAbilitySystemInterface, public IEnemyInterface, public ICombatInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet()	const { return AttributeSet; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

	virtual void InitAbilityActorInfo();
public:	

	virtual void Tick(float DeltaTime) override;
	

	UPROPERTY(Visibleanywhere, Category = Attacks)
		bool Damaged = true;


	virtual void AttackTrace() PURE_VIRTUAL(Minions::SetDefaultSetting, );
	virtual void Attack() PURE_VIRTUAL(Minions::SetDefaultSetting, );

	

	UFUNCTION()
		void ComboAttackSave();

	UFUNCTION()
		void ResetCombo();

public:


	UPROPERTY(EditAnywhere, Category = Attacks)
		TArray<UAnimMontage*> AttackMontage;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = State, Meta = (AllowPrivateAccess = true))
		ECharacterState CurrentState;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attacks, Meta = (AllowPrivateAccess = true))
		int32 AttackCount;

	
	void AttackDirectionSetSoket(EAttackDirection AttackDirection);
	int32 AttackRange;
	float AttackWidthArea;

	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;


protected:

	int32 AttackDamageCount;
	bool SaveAttack;
	

	float DeadTimer;
	FName RightSoketBottom;
	FName RightSoketTop;
	FName LeftSoketBottom;
	FName LeftSoketTop;
	FVector WaeponBottomPoint;
	FVector WaeponTopPoint;
	

	UPROPERTY()
		FTimerHandle DeadTimerHandle = { };
	UPROPERTY()
		FTimerHandle LoadingTimer = { };
	UPROPERTY()
		FTimerHandle DamagedTimerHandle = { };
	UPROPERTY()
		FTimerHandle UITimerHandle = { };

	


public:
	bool IsRightAttack = true;
	bool CanTakeDamage = true;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attacks, Meta = (AllowPrivateAccess = true))
		bool IsAttacking;

	FOnAttackEndDelegate OnAttackEnd;

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultVitalAttributes;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultAdditionalVitalAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultSecondaryAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultGamePlayAttributes;

	void ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const;
	void InitializeDefaultAttributes() const;

};
