// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"

#include "SeniorProject/Interface/EnemyInterface.h"
#include "SeniorProject/DefaultBase/CharacterBase.h"

#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "InputActionValue.h"
#include "MyCharacter.generated.h"




UCLASS(abstract)
class SENIORPROJECT_API AMyCharacter : public ACharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();
	void SetCharacterState(ECharacterState NewState);

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;


	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, 
		AController* EventInstigator, AActor* DamageCauser) override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	UPROPERTY(VisibleAnywhere, Category = Abillity)
		class UAbilityComponent* AbilityComponent;


	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* Camera;


	UPROPERTY(EditAnywhere, Category = Anim)
		UAnimMontage* StartGameAnim;



	UPROPERTY()
		class AMyPlayerController* PlayerController;





	UPROPERTY()
		USoundCue* FootStepAudioCue;
	UPROPERTY()
		UAudioComponent* AudioComponent;


	UFUNCTION()
		void PlayFootSound();




	UFUNCTION()
		void Hurt(AActor* DamageCauser);

	virtual void AttackTrace() override;
	virtual void Attack() override;

	void UpdateCharacterStat();



protected:

	virtual void LSB() PURE_VIRTUAL(Minions::SetDefaultSetting, );
	virtual void SetCharacterSetting() PURE_VIRTUAL(Minions::SetDefaultSetting, );
	virtual void Ability_RMB() PURE_VIRTUAL(Minions::SetDefaultSetting, );
	virtual void Ability_R() PURE_VIRTUAL(Minions::SetDefaultSetting, );;
	virtual void Ability_Q() PURE_VIRTUAL(Minions::SetDefaultSetting, );


private:
	FSoftObjectPath CharacterAssetToLoad = FSoftObjectPath(nullptr);
	TSharedPtr<struct FStreamableHandle> AssetStreamingHandle;
	void OnAssetLoadCompleted();


	void InitAbilityActorInfo();

private:

		
	UPROPERTY(EditAnywhere, Category = "Input")
		class UInputMappingContext* PlayerContext;

	UPROPERTY(EditAnywhere, Category = "Input")
		class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category = "Input")
		class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
		class UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category = "Input")
		class UInputAction* LSB_Action;

	UPROPERTY(EditAnywhere, Category = "Input")
		class UInputAction* Q_Action;

	UPROPERTY(EditAnywhere, Category = "Input")
		class UInputAction* RMB_Ability;

	UPROPERTY(EditAnywhere, Category = "Input")
		class UInputAction* R_Ability;

	


	void Move(const FInputActionValue& InputActionValue);
	void Look(const FInputActionValue& InputActionValue);

public:
	
	void CanMoves();
	void StopMoves();
	bool GetBool_IsNoWep();


	
	int32 AttackDamageCount;
	

	bool bIsNoWep;
	bool bIsCasting;
	bool bIsActive_Q_Ability;



	



private:
		TScriptInterface<IEnemyInterface> LastActor;
		TScriptInterface<IEnemyInterface> ThisActor;
		void AimTrace();

};
