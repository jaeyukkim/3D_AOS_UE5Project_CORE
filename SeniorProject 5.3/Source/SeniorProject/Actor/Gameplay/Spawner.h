// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "SeniorProject/Interface/GameRuleInterface.h"
#include "Spawner.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMinionSpawnSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSiegeMinionSpawnSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuperMinionSpawnSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNeutralityMonsterSignature);

class UBoxComponent;

UCLASS()
class SENIORPROJECT_API ASpawner : public AActor, public IGameRuleInterface
{
	GENERATED_BODY()
	
public:	

	ASpawner();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	FORCEINLINE virtual FGameplayTag GetLineTag_Implementation() const override {return LineTag;}
	FORCEINLINE virtual FGameplayTag GetTeamName_Implementation() const override {return TeamName;}



	
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	TObjectPtr<USkeletalMeshComponent> Mesh;
	
	UPROPERTY(EditDefaultsOnly, Category = "Box")
	TObjectPtr<UBoxComponent> BoxComponent;
	

	
	UPROPERTY(EditDefaultsOnly, Category = "Minion")
	TSubclassOf<AActor> RangeClass;
	
	UPROPERTY(EditDefaultsOnly, Category = "Minion")
	TSubclassOf<AActor> MeleeClass;

	UPROPERTY(EditDefaultsOnly, Category = "Minion")
	TSubclassOf<AActor> SiegeClass;
	
	UPROPERTY(EditDefaultsOnly, Category = "Minion")
	TSubclassOf<AActor> SuperMinionClass;

	UPROPERTY(EditDefaultsOnly, Category = "Minion")
	TSubclassOf<AActor> NeutralityMonsterClass;

	
	
	UPROPERTY(BlueprintAssignable, Category = "Spawn")
	FOnMinionSpawnSignature OnMinionSpawn;

	UPROPERTY(BlueprintAssignable, Category = "Spawn")
	FOnSiegeMinionSpawnSignature OnSiegeMinionSpawn;
	
	UPROPERTY(BlueprintAssignable, Category = "Spawn")
	FOnSuperMinionSpawnSignature OnSuperMinionSpawn;

	UPROPERTY(BlueprintAssignable, Category = "Spawn")
	FOnNeutralityMonsterSignature OnNeutralityMonsterSpawn;

	
	
protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere, Replicated, Category = "GameRule")
	FGameplayTag TeamName;

	UPROPERTY(EditAnywhere, Replicated, Category = "GameRule")
	FGameplayTag LineTag;

	
	
};
