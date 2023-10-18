// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "Components/ActorComponent.h"

#include "MyCharacterStatComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnHpIsZeroDelegate);
DECLARE_MULTICAST_DELEGATE(FOnHpChangedDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SENIORPROJECT_API UMyCharacterStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyCharacterStatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void InitializeComponent() override;


public:
	void SetLevel(int32 NewLevel);
	void SetMinionLevel(int32 NewLevel);
	void SetDamage(float Damage);
	void SetHP(float Hp);
	float GetAttackDMG();
	float GetCurrentHp();
	float GetHpRatio();

	FOnHpIsZeroDelegate OnHPIsZero;
	FOnHpChangedDelegate OnHpChanged;

private:
	struct FMyCharacterData* CurrentStatData = nullptr;

	UPROPERTY(EditInstanceOnly, Category = Stat, Meta = (AllowPriveteAccess = true))
		int32 Level;
	
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPriveteAccess = true))
		float CurrentHp;
	
public:

	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPriveteAccess = true))
		bool IsPlayerDead = false;
};
