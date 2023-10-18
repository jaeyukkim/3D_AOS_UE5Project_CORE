// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"


DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);

UCLASS()
class SENIORPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();
	void SetCharacterState(ECharacterState NewState);
	ECharacterState GetCharacterState() const;

	enum class EControlMode
	{
		PLAYER,
		AI
	};



protected:
	// Called when the game starts or when spawned
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

	

	UPROPERTY(VisibleAnywhere, Category = Stat)
		class UMyCharacterStatComponent* CharacterStat;

	UPROPERTY(VisibleAnywhere, Category = Abillity)
		class UAbilityComponent* AbilityComponent;


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





		USoundCue* FootStepAudioCue;

		UAudioComponent* AudioComponent;


	UFUNCTION()
		void PlayFootSound();




	UFUNCTION()
		void ComboAttackSave();

	UFUNCTION()
		void ResetCombo();

	UFUNCTION()
		void Hurt(AActor* DamageCauser);

	UFUNCTION()
		void SwordTrace();



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
	void Ability_RMB();
	void Ability_R();
	void Ability_Q();



		

public:
	void Attack();
	void CanMoves();
	void StopMoves();
	bool GetBool_IsNoWep();

	

	int32 AttackCount;
	int32 AttackDamageCount;

	bool bIsNoWep;
	bool IsAttacking;
	bool bIsCasting;
	bool bIsActive_Q_Ability;
	bool IsRightAttack;
	bool SaveAttack;
	bool CanTakeDamage = true;
	bool bIsPlayer;



	float DeadTimer;
	float AttackWidthArea;


	UPROPERTY()
		FVector WaeponBottomPoint;

	UPROPERTY()
		FVector WaeponTopPoint;





		FOnAttackEndDelegate OnAttackEnd;



	UPROPERTY()
		FTimerHandle DeadTimerHandle = { };
	UPROPERTY()
		FTimerHandle DamagedTimerHandle = { };
	UPROPERTY()
		FTimerHandle LoadingTimer = { };



	FName RightSoketBottom;
	FName RightSoketTop;


};
