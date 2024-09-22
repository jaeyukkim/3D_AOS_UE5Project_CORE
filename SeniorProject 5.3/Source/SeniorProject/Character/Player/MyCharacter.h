// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"

#include "SeniorProject/Interface/EnemyInterface.h"
#include "SeniorProject/Character/CharacterBase.h"
#include "SeniorProject/AbilitySystem/Data/CharacterClassInfo.h"

#include "InputActionValue.h"
#include "SeniorProject/Interface/PlayerInterface.h"
#include "MyCharacter.generated.h"


class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class USoundCue;
class UAudioComponent;
class AMyPlayerController;

UCLASS(abstract)
class SENIORPROJECT_API AMyCharacter : public ACharacterBase, public IPlayerInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();
	

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	
	
	


	UPROPERTY(VisibleAnywhere, Category = "Camera")
		TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
		TObjectPtr<UCameraComponent> Camera;
	
	UPROPERTY(EditAnywhere, Category="Input")
		TObjectPtr<AMyPlayerController> PlayerController;

	/* CombatInterface */
	virtual void GetAimHitResult(float AbilityDistance, FHitResult& HitResult) override;
	virtual void Die() override;
	/* end CombatInterface */

	/* Enemy Interface */
	virtual void SetTeamNameByPlayerState_Implementation(APlayerState* PS) override;
	/* end Enemy Interface */


	/** Players Interface */
	virtual void AddToXP_Implementation(int32 InXP) override;
	/** end Player Interface */
protected:
	
	virtual void SetCharacterSetting() PURE_VIRTUAL(AMyCharacter::SetCharacterSetting, );
	virtual void InitAbilityActorInfo() override;
	virtual int32 GetPlayerLevel() override;

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
	

	UPROPERTY()
		TScriptInterface<IEnemyInterface> LastActor;

	UPROPERTY()
		TScriptInterface<IEnemyInterface> ThisActor;

		void AimTrace();

};
