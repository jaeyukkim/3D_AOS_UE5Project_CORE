// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "SeniorProject/Interface/CombatInterface.h"
#include "PlayerStateBase.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API APlayerStateBase : public APlayerState, public IAbilitySystemInterface, public ICombatInterface
{
	GENERATED_BODY()
public:

	APlayerStateBase();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet()	const { return AttributeSet; }
	FORCEINLINE virtual int32 GetPlayerLevel() override {return Level;};

protected:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Level ,Category="Defalut Character Setting")
	int32 Level = 1;
	
	UFUNCTION()
	void OnRep_Level(int32 OldLevel);

};
