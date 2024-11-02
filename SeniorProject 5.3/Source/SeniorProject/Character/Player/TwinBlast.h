// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/Character/Player/MyCharacter.h"
#include "TwinBlast.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ATwinBlast : public AMyCharacter
{
	GENERATED_BODY()
public:
	ATwinBlast();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	virtual void SetCharacterSetting() override;
	virtual void Die_Implementation() override;
	virtual void ServerReSpawn() override;
	virtual void MulticastReSpawn() override;

	
	UPROPERTY(Replicated, BlueprintReadWrite)
	bool bUltimateActivate = false;

	UPROPERTY(BlueprintReadWrite)
	bool bIsLeftAttack = false;

	void SetbIsLeftAttack(bool InbIsLeftAttack);
	void SetbUltimateActivate(bool InbUltimateActivate);

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float Ability_Q_Distance = 1500.f;
	
	void UpdateMagicCircleLocation();
	FHitResult AbilityRangeTraceResult;
protected:
	virtual void Tick(float DeltaSeconds) override;

};
