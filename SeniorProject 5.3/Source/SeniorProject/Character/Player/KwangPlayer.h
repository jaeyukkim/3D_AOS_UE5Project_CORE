// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "SeniorProject/Character/Player/MyCharacter.h"
#include "KwangPlayer.generated.h"

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

	virtual void SetCharacterSetting() override;

	UFUNCTION(BlueprintCallable)
	void ShowMagicCircle();
	
	UFUNCTION(BlueprintCallable)
	void HideMagicCircle();

	UFUNCTION(BlueprintCallable)
	void SetSwordObject(AActor* Sword);

	UFUNCTION(BlueprintCallable)
	void DestroySwordObject();
	
	UFUNCTION(BlueprintCallable)
	bool GetbActiveWep();

	UFUNCTION(BlueprintCallable)
	void SetbActiveWep(bool nbActiveWep);

	
	
protected:

	virtual void Tick(float DeltaSeconds) override;
	
	UPROPERTY(EditDefaultsOnly, Category="Kwang")
	TSubclassOf<AAttackRangeDecal> MagicCircleClass;
	
	UPROPERTY()
	TObjectPtr<AAttackRangeDecal> MagicCircle;
	
	void UpdateMagicCircleLocation();

	FHitResult AbilityRangeTraceResult;

	UPROPERTY()
	TObjectPtr<AActor> KwangSword;
	
private:
	UPROPERTY(Replicated)
	bool bActiveWep = true;

	
};
