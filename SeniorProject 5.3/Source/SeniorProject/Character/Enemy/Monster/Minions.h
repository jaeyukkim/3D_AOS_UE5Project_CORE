// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/DefaultBase/CharacterBase.h"
#include "Minions.generated.h"







UCLASS(abstract)

class SENIORPROJECT_API AMinions : public ACharacterBase
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
	
	
	virtual void Attack() override;
	virtual void AttackTrace() override;

	


	UPROPERTY(EditAnywhere, Category = Attacks)
		float AttackRange;

	const int32  MaxAttackCombo = 4;
	UFUNCTION()
		void Hurt(AActor* DamageCauser);


	

	UPROPERTY()
		class AMinionAIController* AIController;

	
private:

	void SetMinionState(ECharacterState NewState);



protected:
	virtual void SetDefaultSetting() PURE_VIRTUAL(Minions::SetDefaultSetting, );
	virtual void InitAbilityActorInfo() override;
	
};
