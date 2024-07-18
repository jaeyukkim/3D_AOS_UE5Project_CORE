// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "EngineMinimal.h"
#include "SeniorProject/Character/CharacterBase/DefaultBase/CharacterBase.h"
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
	

public:	

	virtual void Tick(float DeltaTime) override;
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, 
		AController* EventInstigator, AActor* DamageCauser) override;
	


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
		

public:
	
	void CanMoves();
	void StopMoves();
	bool GetBool_IsNoWep();


	int32 AttackCount;
	int32 AttackDamageCount;

	bool bIsNoWep;
	bool bIsCasting;
	bool bIsActive_Q_Ability;



	float AttackWidthArea;






};
