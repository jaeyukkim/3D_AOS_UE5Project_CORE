// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/Character/CharacterBase.h"
#include "SeniorProject/UI/OverlayWidget/OverlayWidgetController.h"
#include "SeniorProject/AbilitySystem/Data/CharacterClassInfo.h"
#include "Minions.generated.h"



class UWidgetComponent;
class AAIControllerBase;
class UBehaviorTree;


UCLASS(abstract, Blueprintable)

class SENIORPROJECT_API AMinions : public ACharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMinions();
	
	virtual void PossessedBy(AController* NewController) override;
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	
	UPROPERTY(BlueprintAssignable)
	FOnAttributeChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable)
	FOnAttributeChangedSignature OnMaxHealthChanged;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	float LifeSpan = 5.f;
	virtual void Die_Implementation() override;


	
	FORCEINLINE virtual int32 GetPlayerLevel_Implementation() override {return Level;};

	

	/* Enemy Interface */
	virtual void SetCombatTarget_Implementation(AActor* InCombatTarget) override;
	virtual AActor* GetCombatTarget_Implementation() const override;
	virtual void SetTargetPlayer_Implementation(AActor* Target) override;
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	TObjectPtr<AActor> CombatTarget;
	/* end Enemy Interface */


	/* GameplayInterface */
	virtual void SetTeamNameByTag_Implementation(FGameplayTag NewTeamName) override;

	/* end GameplayInterface */

	
	

	
protected:
	virtual void SetDefaultSetting() {};
	virtual void InitAbilityActorInfo() override;
	virtual void InitializeDefaultAttributes() const override;
	virtual void HitReactTagChanged(const FGameplayTag CallbackTag, int32 NewCount) override;

	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Defalut Character Setting")
	int32 Level = 1;

	
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="UI")
	TObjectPtr<UWidgetComponent> HealthBar;

	UPROPERTY()
	TObjectPtr<AAIControllerBase> AIControllerBase;

	UPROPERTY(EditAnywhere, Category = "AI")
	TObjectPtr<UBehaviorTree> BehaviorTree;


	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	TObjectPtr<USkeletalMesh> RedTeamMesh;
	
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	TObjectPtr<USkeletalMesh> BlueTeamMesh;

	UFUNCTION(BlueprintCallable)
	void SetIsMeshChanged(bool IsMeshChanged) {bIsMeshChanged = IsMeshChanged;}
	
	UFUNCTION()
	void OnRep_Mesh();

private:
	UPROPERTY(ReplicatedUsing = OnRep_Mesh)
	bool bIsMeshChanged = false;
	
};
