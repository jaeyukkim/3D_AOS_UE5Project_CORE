// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"

#include "SeniorProject/Interface/EnemyInterface.h"
#include "SeniorProject/Character/CharacterBase.h"
#include "SeniorProject/AbilitySystem/Data/CharacterClassInfo.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidgetController.h"
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
class UWidgetComponent;

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
	
	UFUNCTION(BlueprintCallable)
	void BroadcastInitialValues();
	
	


	UPROPERTY(VisibleAnywhere, Category = "Camera")
		TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
		TObjectPtr<UCameraComponent> Camera;
	
	UPROPERTY(EditAnywhere, Category="Input")
		TObjectPtr<AMyPlayerController> PlayerController;

	/* CombatInterface */
	virtual void GetAimHitResult(float AbilityDistance, FHitResult& HitResult) override;
	virtual void Die_Implementation() override;
	/* end CombatInterface */

	/* Enemy Interface */
	virtual void SetTeamNameByPlayerState_Implementation(APlayerState* PS) override;
	/* end Enemy Interface */


	/** Players Interface */
	virtual int32 GetSpellPoints_Implementation() const override;
	virtual int32 GetXP_Implementation() const override;
	virtual int32 GetGold_Implementation() const override;
	virtual int32 FindLevelForXP_Implementation(int32 InXP) const override;

	
	virtual void AddToPlayerLevel_Implementation(int32 InPlayerLevel) override;
	virtual void AddToSpellPoints_Implementation(int32 InSpellPoints) override;
	virtual void AddToGold_Implementation(int32 InGold) override;
	virtual void AddToXP_Implementation(int32 InXP) override;
	virtual void LevelUp_Implementation() override;
	/** end Player Interface */


	UPROPERTY(BlueprintAssignable)
	FOnAttributeChangedSignature OnManaChanged;

	UPROPERTY(BlueprintAssignable)
	FOnAttributeChangedSignature OnMaxManaChanged;

	UPROPERTY(BlueprintAssignable)
	FOnLevelChangedSignature OnLevelChanged;
	
protected:
	
	virtual void SetCharacterSetting() PURE_VIRTUAL(AMyCharacter::SetCharacterSetting, );
	virtual void InitAbilityActorInfo() override;
	void InitializeHealthBarWidget();
	virtual int32 GetPlayerLevel_Implementation() override;
	
	UFUNCTION(NetMulticast, Reliable)
	void MulticastLevelUpParticles() const;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UParticleSystemComponent> LevelUpParticleComponent;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "LevelUp")
	TSubclassOf<UGameplayEffect> LevelUpReward;

	UFUNCTION()
	void GetLevelUpReward();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="HealthBar")
	TObjectPtr<UWidgetComponent> HealthBarWidget;

	UFUNCTION()
	void Stunned(const FGameplayTag CallbackTag, int32 NewCount);
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
