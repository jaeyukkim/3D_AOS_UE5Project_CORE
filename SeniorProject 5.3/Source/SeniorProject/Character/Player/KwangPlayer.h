// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "SeniorProject/Character/Player/MyCharacter.h"
#include "KwangPlayer.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSwordDestroyDelegate);
DECLARE_MULTICAST_DELEGATE(FRespawnedDelegate);

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
	void ShowMagicCircle();
	
	UFUNCTION(BlueprintCallable)
	void HideMagicCircle();
	

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
	virtual void ServerReCall() override;
	virtual void MulticastReSpawn() override;
	UPROPERTY(Replicated)
	bool bActiveWep = true;
	
	UPROPERTY(Replicated)
	FVector SwordLocation;
	
	FRespawnedDelegate Respawned;
	
protected:

	virtual void Tick(float DeltaSeconds) override;
	
	UPROPERTY(EditDefaultsOnly, Category="Kwang")
	TSubclassOf<AAttackRangeDecal> MagicCircleClass;
	
	UPROPERTY()
	TObjectPtr<AAttackRangeDecal> MagicCircle;
	
	void UpdateMagicCircleLocation();
	FHitResult AbilityRangeTraceResult;
	

	
};
