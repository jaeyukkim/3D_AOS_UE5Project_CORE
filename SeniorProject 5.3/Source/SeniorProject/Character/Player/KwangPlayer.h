// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "SeniorProject/Character/Player/MyCharacter.h"
#include "KwangPlayer.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSwordDestroyDelegate);


class AAttackRangeDecal;
/**
 * 
 */
UCLASS()
class SENIORPROJECT_API AKwangPlayer : public AMyCharacter
{
	GENERATED_BODY()

public:
	AKwangPlayer();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	virtual void SetCharacterSetting() override;

	
	

	UFUNCTION(BlueprintCallable)
	FVector GetSwordLocation();

	UFUNCTION(BlueprintCallable)
	void SetSwordLocation(FVector NewSwordLocation);

	UFUNCTION(BlueprintCallable)
	void DestroySword();
	
	UFUNCTION(BlueprintCallable)
	bool GetbActiveWep();

	UFUNCTION(BlueprintCallable)
	void SetbActiveWep(bool nbActiveWep);

	UPROPERTY(BlueprintAssignable, Category="Kwang")
	FSwordDestroyDelegate SwordDestroyDelegate;
	
	virtual void Die_Implementation() override;
	virtual void ServerReSpawn() override;
	virtual void MulticastReSpawn() override;
	UPROPERTY(Replicated)
	bool bActiveWep = true;
	
	UPROPERTY(Replicated)
	FVector SwordLocation;
	
	
	
protected:

	virtual void Tick(float DeltaSeconds) override;
	
	
	
	virtual void UpdateMagicCircleLocation_Implementation() override;
	FHitResult AbilityRangeTraceResult;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float Ability_Q_Distance = 1500.f;
};
