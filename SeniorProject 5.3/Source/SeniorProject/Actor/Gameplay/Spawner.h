// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Spawner.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMinionSpawnSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuperMinionSpawnSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNeutralityMonsterSignature);

class UBoxComponent;

UCLASS()
class SENIORPROJECT_API ASpawner : public AActor
{
	GENERATED_BODY()
	
public:	

	ASpawner();

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	TObjectPtr<USkeletalMeshComponent> Mesh;
	
	UPROPERTY(EditDefaultsOnly, Category = "Box")
	TObjectPtr<UBoxComponent> BoxComponent;
	

	UPROPERTY(EditDefaultsOnly, Category = "Minion")
	TSubclassOf<AActor> RangeClass;
	UPROPERTY(EditDefaultsOnly, Category = "Minion")
	TSubclassOf<AActor> MeleeClass;
	UPROPERTY(EditDefaultsOnly, Category = "Minion")
	TSubclassOf<AActor> SuperMinionClass;

	UPROPERTY(EditDefaultsOnly, Category = "Minion")
	TSubclassOf<AActor> NeutralityMonsterClass;

	UPROPERTY(BlueprintAssignable, Category = "Spawn")
	FOnMinionSpawnSignature OnMinionSpawnSignature;

	UPROPERTY(BlueprintAssignable, Category = "Spawn")
	FOnSuperMinionSpawnSignature OnSuperMinionSpawnSignature;

	UPROPERTY(BlueprintAssignable, Category = "Spawn")
	FOnNeutralityMonsterSignature OnNeutralityMonsterSignature;

	
protected:

	virtual void BeginPlay() override;
	
};
