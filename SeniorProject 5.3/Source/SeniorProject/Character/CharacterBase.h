// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameplayTagContainer.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "SeniorProject/Interface/CombatInterface.h"
#include "SeniorProject/Interface/EnemyInterface.h"
#include "SeniorProject/Interface/GameRuleInterface.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidgetController.h"
#include "CharacterBase.generated.h"


class UAbilitySystemComponent;
class UAttributeSet;
class UGameplayEffect;
class UGameplayAbility;
class UAnimMontage;
class UDebuffParticleComponent;


UCLASS(abstract)
class SENIORPROJECT_API ACharacterBase : public ACharacter, public IAbilitySystemInterface, public IEnemyInterface, public ICombatInterface, public IGameRuleInterface
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
	/* end Enemy Interface */

	
	/* CombatInterface */
	virtual void ApplyDebuffEffect_Implementation(const FGameplayTag& DebuffTag, const float DebuffCoefficient, const float DebuffDuration, const float DebuffFrequency) override;
	virtual UAnimMontage* GetAttackMontage_Implementation() override;
	FORCEINLINE virtual void SetCurrentCombo(int32 NewCurrentCombo) override { CurrentCombo = NewCurrentCombo; }
	FORCEINLINE virtual int32 GetCurrentCombo() const override { return CurrentCombo; }
	FORCEINLINE virtual int32 GetMaxAttackCombo() const override { return MaxAttackCombo; }
	FORCEINLINE virtual int32 GetAttackRange() const override {return AttackRange;}
	FORCEINLINE virtual bool IsDead_Implementation() const override {return bDead;}
	FORCEINLINE virtual AActor* GetAvatar_Implementation() override {return this;}
	FORCEINLINE virtual bool IsInvincibility_Implementation() const override {return bIsInvincibility;}
	FORCEINLINE virtual void SetIsInvincibility_Implementation(const bool InIsInvincibility) override {bIsInvincibility = InIsInvincibility;}
	virtual UAnimMontage* GetHitReactMontage_Implementation() override;
	virtual void HitReactTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
	virtual FVector GetCombatSocketLocation_Implementation(const FGameplayTag& MontageTag) override;
	virtual void Die_Implementation() override;
	virtual ECharacterClass GetCharacterClass_Implementation() override;
	virtual FOnASCRegistered& GetOnASCRegisteredDelegate() override;
	virtual TArray<AActor*> GetAllAttackers_Implementation() override;
	FOnASCRegistered OnAscRegistered;
	
	UFUNCTION(NetMulticast, Reliable)
	virtual void MulticastHandleDeath();
	/* end CombatInterface*/
	

public:

	UFUNCTION(NetMulticast, Reliable)
	void MulticastEndGame(const FGameplayTag& DefeatedTeam);
	
public:
	
	UPROPERTY(EditAnywhere, Category = "Combat")
	FName WeaponTipSocketName;

	UPROPERTY(EditAnywhere, Category = "Combat")
	FName LeftHandSocketName;

	UPROPERTY(EditAnywhere, Category = "Combat")
	FName RightHandSocketName;

	UPROPERTY(EditAnywhere, Category = "Combat")
	FName TailSocketName;
	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	ECharacterClass CharacterClass;
	
	UPROPERTY(BlueprintAssignable)
	FOnAttributeChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable)
	FOnAttributeChangedSignature OnMaxHealthChanged;
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UDebuffParticleComponent> StunDebuffComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UDebuffParticleComponent> MovementSlowDebuffComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UDebuffParticleComponent> ArmorDecreaseDebuffComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UDebuffParticleComponent> MagicResistanceDecreaseDebuffComponent;

	

public:	

	UPROPERTY(BlueprintReadOnly, Category = "Combat")
	bool bHitReacting = false;
	UPROPERTY(BlueprintReadOnly, Replicated ,Category = "Combat")
	bool bIsStunned;
	UPROPERTY(BlueprintReadOnly, Replicated)
	bool bDead = false;
	UPROPERTY(BlueprintReadOnly, Replicated)
	bool bIsInvincibility = false;	// 포탑의 기본은 무적상태이되 첫번째 포탑은 무적이아님
	
	int32 AttackRange;
	
	
protected:
	
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo();
	virtual void InitializeDefaultAttributes() const;
	void ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const;
	void AddCharacterAbility();

	
	
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultVitalAttributes;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultAdditionalVitalAttributes;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultSecondaryAttributes;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DefaultAttributes")
	TSubclassOf<UGameplayEffect> DefaultGamePlayAttributes;

protected:
	void BindCallBackSaveAttacker();

	UFUNCTION()
	virtual void SaveAttacker(AActor* Attacker);	// 공격자를 저장하는 함수
	
	UFUNCTION()
	virtual void RemoveAttacker(AActor* Attacker);	// 공격자를 배열에서 제거하는 함수
	
	UPROPERTY()
	TArray<AActor*> RecentAttackers;	// 공격자를 저장할 배열
	
	UPROPERTY()
	TMap<AActor*, FTimerHandle> AttackerTimers;		// 공격자 타이머를 관리할 핸들

	UPROPERTY(EditDefaultsOnly, Category="Debuff")
	TMap<FGameplayTag, TSubclassOf<UGameplayEffect>> DebuffClassMap;

	// ***사망시에 반드시 호출해야함***//
	void ClearAttackers();
	const float DeleteRecentAttackerTime = 10.f;

	UPROPERTY(EditAnywhere, Category="Abilities")
	TArray<TSubclassOf<UGameplayAbility>> GameplayAbility;

	UPROPERTY(EditAnywhere, Category = "Abilities")
	TArray<TSubclassOf<UGameplayAbility>> StartupPassiveAbilities;
private:

	
	/*Combat Interface*/
	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<UAnimMontage> HitReactMontage;

	UPROPERTY(EditAnywhere,  Category="Combat")
	TArray<TObjectPtr<UAnimMontage>> AttackMontage;
	
	int32 MaxAttackCombo = 0;
	int32 CurrentCombo = 0;
	/*Combat Interface*/

	
};

