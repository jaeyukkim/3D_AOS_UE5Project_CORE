// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"

#include "SeniorProject/Interface/EnemyInterface.h"
#include "SeniorProject/DefaultBase/CharacterBase.h"
#include "InputActionValue.h"
#include "MyCharacter.generated.h"


class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class USoundCue;
class UAudioComponent;

UCLASS(abstract)
class SENIORPROJECT_API AMyCharacter : public ACharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();
	

	virtual void BeginPlay() override;
	


	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, 
		AController* EventInstigator, AActor* DamageCauser) override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	UPROPERTY(VisibleAnywhere, Category = Abillity)
		class UAbilityComponent* AbilityComponent;


	UPROPERTY(VisibleAnywhere, Category = "Camera")
		TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
		TObjectPtr<UCameraComponent> Camera;


	UPROPERTY(EditAnywhere, Category = Anim)
		TObjectPtr<UAnimMontage> StartGameAnim;
	

	UPROPERTY()
		class AMyPlayerController* PlayerController;
	
	


	UFUNCTION()
		void PlayFootSound();
	
	virtual void GetAimHitResult(float AbilityDistance, FHitResult& HitResult) override;



	UFUNCTION()
		void Hurt(AActor* DamageCauser);

	virtual void AttackTrace() override;
	virtual void Attack() override;





protected:

	virtual void LSB() PURE_VIRTUAL(AMyCharacter::LSB, );
	virtual void SetCharacterSetting() PURE_VIRTUAL(AMyCharacter::SetCharacterSetting, );
//	virtual void Ability_RMB() PURE_VIRTUAL(AMyCharacter::Ability_RMB, );
//	virtual void Ability_R() PURE_VIRTUAL(AMyCharacter::Ability_R, );;
//	virtual void Ability_Q() PURE_VIRTUAL(AMyCharacter::Ability_Q, );
	virtual void InitAbilityActorInfo() override;
	int32 GetPlayerLevel();

private:

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputMappingContext> PlayerContext;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> JumpAction;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> LSB_Action;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> Q_Action;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> RMB_Ability;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> R_Ability;
	
	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> ShowAdditionalAttribute;

	


	void Move(const FInputActionValue& InputActionValue);
	void Look(const FInputActionValue& InputActionValue);

	void ShowAdditionalAttributeMenu(const FInputActionValue& InputActionValue);
	

public:
	

	bool GetBool_IsNoWep();
	int32 AttackDamageCount;
	
	bool bIsNoWep;
	bool bIsCasting;
	bool bIsActive_Q_Ability;


private:
	UPROPERTY()
		TScriptInterface<IEnemyInterface> LastActor;

	UPROPERTY()
		TScriptInterface<IEnemyInterface> ThisActor;

		void AimTrace();

};
