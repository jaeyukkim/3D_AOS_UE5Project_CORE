// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "Kallari.generated.h"


DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);


UCLASS()
class SENIORPROJECT_API AKallari : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AKallari();
	void SetCharacterState(ECharacterState NewState);


	enum class EControlMode
	{
		PLAYER,
		AI
	};


	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//virtual void PostInitializeComponents() override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,
		AController* EventInstigator, AActor* DamageCauser) override;
	//virtual void PossessedBy(AController* NewController) override;

	int32 GetExp() const;

	UPROPERTY(VisibleAnywhere, Category = Stat)
		class UMyCharacterStatComponent* CharacterStat;



	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* Camera;



	UPROPERTY(EditAnywhere, Category = UI)
		class UWidgetComponent* HpBarWidget;



	UPROPERTY(EditAnywhere, Category = Anim)
		TSubclassOf<UAnimInstance> CharacterAnimation;

	UPROPERTY(EditAnywhere, Category = Attacks)
		TArray<UAnimMontage*> AttackMontage;

	UPROPERTY(EditAnywhere, Category = Anim)
		UAnimMontage* StartGameAnim;



	UPROPERTY(EditAnywhere, Category = Mesh)
		USkeletalMesh* CharacterMesh;



	UPROPERTY()
		class AMyPlayerController* PlayerController;
	UPROPERTY()
		class AKwangAiController* AIController;






	UFUNCTION()
		void ComboAttackSave();

	UFUNCTION()
		void ResetCombo();

	UFUNCTION()
		void Hurt(AActor* DamageCauser);

	UFUNCTION()
		void TwoHandTrace();






	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = State, Meta = (AllowPrivateAccess = true))
		ECharacterState CurrentState;






private:
	void UpDown(float Value);
	void LeftRight(float Value);
	void LookUp(float Value);
	void Turn(float Value);
	void LSB();
	void SetControlMode(EControlMode option);
	void SetCharacterMode();






public:

	void ActiveHpBar();
	void DisabledHpBar();
	void ControlHpBarVisibility();

	const float Speed = 750.0f; //이동속도
	int32 AttackCount;	//현재 공격 카운트
	int32 AttackDamageCount;	//데미지를 적용 할 공격 카운트

	bool IsAttacking;	//공격중인가
	bool bIsCasting;	//캐스팅중인가
	
	bool IsRightAttack;	//오른손공격인가
	bool SaveAttack;
	bool CanTakeDamage = true;
	
	bool bIsPlayer;


	const float DeadTimer = 5.0f; //사망타이머
	const float AttackWidthArea = 15.0; //공격시 칼의 굵기 판정


	UPROPERTY()
		FVector WaeponBottomPoint;	//검의 칼날 시작위치

	UPROPERTY()
		FVector WaeponTopPoint;	//검의 칼끝 위치




		FOnAttackEndDelegate OnAttackEnd;

	

	UPROPERTY()
		FTimerHandle DeadTimerHandle = { };
	UPROPERTY()
		FTimerHandle DamagedTimerHandle = { };
	UPROPERTY()
		FTimerHandle LoadingTimer = { };
	UPROPERTY()
		FTimerHandle KallariUITimerHandle = { };


	FName RightSoketBottom;
	FName RightSoketTop;
	FName LeftSoketBottom;
	FName LeftSoketTop;
	



	void Attack();
	void CanMoves();
	void StopMoves();
	void AttackDirectionSetSoket(EAttackDirection AttackDirection);

};

