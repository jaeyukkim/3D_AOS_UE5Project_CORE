// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "GameFramework/Character.h"
#include "Minions.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);




UCLASS(abstract)

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


	int32 GetExp() const;

	UPROPERTY(VisibleAnywhere, Category = Stat)
		class UMyCharacterStatComponent* MinionStat;


	UPROPERTY(EditAnywhere, Category = UI)
		class UWidgetComponent* HpBarWidget;




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
		TSubclassOf<UAnimInstance> MinionAnimation;	//미니언의 애니메이션들을 저장

	UPROPERTY(EditAnywhere, Category = Attacks)
		TArray<UAnimMontage*> AttackMontage;


private:


	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attacks, Meta = (AllowPrivateAccess = true))
		int32 AttackCount;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = State, Meta = (AllowPrivateAccess = true))
		EMinionState CurrentState;


	UPROPERTY()
		class AMinionAIController* AIController;

	


	

	FTimerHandle LoadingTimer = {  };

private:

	void SetMinionState(EMinionState NewState);


public:

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attacks, Meta = (AllowPrivateAccess = true))
		bool IsAttacking;


	void ActiveHpBar();
	void DisabledHpBar();
	void ControlHpBarVisibility();

	void Attack();
	void AttackDirectionSetSoket(EAttackDirection AttackDirection);


	int32 AttackDamageCount;
	bool SaveAttack;
	FOnAttackEndDelegate OnAttackEnd;
	float DeadTimer;

	UPROPERTY()
	FTimerHandle DeadTimerHandle = { };
	UPROPERTY()
	FTimerHandle MonsterUITimerHandle = { };

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
	FTimerHandle DamagedTimerHandle = { };


	protected:
		virtual void SetDefaultSetting() PURE_VIRTUAL(Minions::SetDefaultSetting, );
	
	
};
