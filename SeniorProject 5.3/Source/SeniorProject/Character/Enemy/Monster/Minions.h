// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/DefaultBase/CharacterBase.h"
#include "SeniorProject/UI/OverlayWidgetController.h"
#include "SeniorProject/AbilitySystem/Data/CharacterClassInfo.h"
#include "Minions.generated.h"



class UWidgetComponent;
class AAIControllerBase;
class UBehaviorTree;


UCLASS(abstract, Blueprintable)

class SENIORPROJECT_API AMinions : public ACharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMinions();


	
	virtual void PossessedBy(AController* NewController) override;
	virtual void BeginPlay() override;

public:
	// Called every frame
	


	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,
		AController* EventInstigator, AActor* DamageCauser) override;
	
	
	virtual void Attack() override;
	virtual void AttackTrace() override;

	UPROPERTY(BlueprintAssignable)
	FOnAttributeChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable)
	FOnAttributeChangedSignature OnMaxHealthChanged;


	UPROPERTY(EditAnywhere, Category = Attacks)
		float AttackRange;

	const int32  MaxAttackCombo = 4;
	
	UFUNCTION()
		void Hurt(AActor* DamageCauser);
	

	FORCEINLINE virtual int32 GetPlayerLevel() override {return Level;};

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	float LifeSpan = 5.f;
	virtual void Die() override;

protected:
	virtual void SetDefaultSetting() PURE_VIRTUAL(Minions::SetDefaultSetting, );
	virtual void InitAbilityActorInfo() override;
	virtual void InitializeDefaultAttributes() const override;
	virtual void HitReactTagChanged(const FGameplayTag CallbackTag, int32 NewCount) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defalut Character Setting")
	int32 Level = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	ECharacterClass CharacterClass = ECharacterClass::Minion_Melee;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="UI")
	TObjectPtr<UWidgetComponent> HealthBar;

	UPROPERTY()
	TObjectPtr<AAIControllerBase> AIControllerBase;

	UPROPERTY(EditAnywhere, Category = "AI")
	TObjectPtr<UBehaviorTree> BehaviorTree;
	
};
