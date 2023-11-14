// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "GameFramework/Character.h"
#include "Minions.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);


enum MinionType
{
	Melee = 0,
	RaneSuper = 1,
	Chrunch = 2
};


UCLASS()

class SENIORPROJECT_API AMinions : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMinions();



	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,
		AController* EventInstigator, AActor* DamageCauser) override;
	//virtual void PossessedBy(AController* NewController) override;



	UPROPERTY(VisibleAnywhere, Category = Stat)
		class UMyCharacterStatComponent* MinionStat;


	UPROPERTY(EditAnywhere, Category = UI)
		class UWidgetComponent* HpBarWidget;


	UPROPERTY(EditAnywhere, Category = Type)
		int32 RandomMinionType;


	UFUNCTION()
		void ComboAttackSave();

	UFUNCTION()
		void ResetCombo();

	UFUNCTION()
		void Hurt(AActor* DamageCauser);


	UFUNCTION()
		void MinionSwordTrace();



	UPROPERTY(Visibleanywhere, Category = Attacks)
		bool CanTakeDamage = true;

	UPROPERTY(Visibleanywhere, Category = Attacks)
		bool Damaged = true;

	UPROPERTY(EditAnywhere, Category = Anim)
		TArray<TSubclassOf<UAnimInstance>> MinionAnimation;	//미니언의 애니메이션들을 저장

	UPROPERTY(EditAnywhere, Category = Attacks)
		TArray<UAnimMontage*> MeleeAttackMontageSet;

	UPROPERTY(EditAnywhere, Category = Attacks)
		TArray<UAnimMontage*> RaneSuperAttackMontageSet;

	UPROPERTY(EditAnywhere, Category = Attacks)
		TArray<UAnimMontage*> ChrunchAttackMontageSet;



	UPROPERTY(EditAnywhere, Category = Attacks)
		TArray<UAnimMontage*> AttackMontage;



	UPROPERTY(EditAnywhere, Category = Mesh)
		TArray<USkeletalMesh*> MinionMesh;


private:


	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attacks, Meta = (AllowPrivateAccess = true))
		int32 AttackCount;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = State, Meta = (AllowPrivateAccess = true))
		EMinionState CurrentState;


	UPROPERTY()
		class AMinionAIController* AIController;

	


	

	FTimerHandle LoadingTimer = {  };

private:

	void SetControlMode();
	void SetMinionMode(int32 RandomMinionType);
	void SetMinionState(EMinionState NewState);


public:

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attacks, Meta = (AllowPrivateAccess = true))
		bool IsAttacking;



	void Attack();
	void AttackDirectionSetSoket(EAttackDirection AttackDirection);


	int32 AttackDamageCount;
	bool SaveAttack;
	FOnAttackEndDelegate OnAttackEnd;
	float DeadTimer;
	FTimerHandle DeadTimerHandle = { };

	FName RightSoketBottom;
	FName RightSoketTop;
	FName LeftSoketBottom;
	FName LeftSoketTop;



	UPROPERTY()
		FVector WaeponBottomPoint;

	UPROPERTY()
		FVector WaeponTopPoint;

	bool IsRightAttack = true;

	UPROPERTY(EditAnywhere, Category = Attacks)
		float AttackRange;


	const int32  MaxAttackCombo = 4;
	const int32 Num_Of_Kind_Minion = 3;
	FTimerHandle DamagedTimerHandle = { };
};
