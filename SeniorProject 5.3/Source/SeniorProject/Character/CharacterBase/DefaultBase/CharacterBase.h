// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "GameFramework/Character.h"
#include "CharacterBase.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);


UCLASS(abstract)
class SENIORPROJECT_API ACharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;



	UPROPERTY(EditAnywhere, Category = UI)
		class UWidgetComponent* HpBarWidget;

	UPROPERTY(VisibleAnywhere, Category = Stat)
		class UMyCharacterStatComponent* Stat;

	void ControlHpBarVisibility();
	void DisabledHpBar();
	void ActiveHpBar();
	int32 GetExp() const;

	

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
};
