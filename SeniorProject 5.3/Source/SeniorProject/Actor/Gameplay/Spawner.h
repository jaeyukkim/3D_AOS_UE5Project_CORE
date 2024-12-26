// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"
#include "SeniorProject/Interface/GameRuleInterface.h"
#include "Spawner.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMinionSpawnSignature);



enum class ECharacterClass : uint8;

class UBoxComponent;
class UParticleSystemComponent;
class USpawnerDataAsset;

UCLASS(Blueprintable)
class SENIORPROJECT_API ASpawner : public AActor, public IGameRuleInterface
{
	GENERATED_BODY()
	
public:	
	ASpawner();
	
	UFUNCTION(BlueprintCallable, Category = "Spawn")
	void Spawn(TSubclassOf<AMinions> Minions);
	UFUNCTION(BlueprintCallable, Category = "Spawn")
	void SpawnBuff();
	UFUNCTION(BlueprintCallable, Category = "Spawn")
	void SpawnMinion();
public:
	
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	TObjectPtr<UStaticMeshComponent> StaticMesh;
	
	UPROPERTY(EditDefaultsOnly, Category = "Box")
	TObjectPtr<UBoxComponent> BoxComponent;
	
	UPROPERTY(BlueprintAssignable, Category = "Spawn")
	FOnMinionSpawnSignature OnMinionSpawn;
	
	//반드시 블루프린트에서 설정해줘야함
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	ECharacterClass SpawnerType;

	TSubclassOf<AMinions> MonsterClass;

protected:

	virtual void BeginPlay() override;
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void MulticastSpawnParticles() const;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UParticleSystemComponent> ParticleComponent;
	
	UPROPERTY()
	TObjectPtr<UParticleSystem> SpawnParticle;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly , Category = "GameRule")
	FGameplayTag TeamName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GameRule")
	FGameplayTag LineTag;
	
	UPROPERTY(BlueprintReadWrite, Category = "Spawn")
	bool bSpawnSuperMinion = false;

	UPROPERTY(BlueprintReadWrite, Category = "Spawn")
	bool bSpawnSiegeMinion = false;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float MobEnforceTimeInterval = 100.f;
private:
	//첫 미니언 스폰 타임
	float InitialSpawnTime;
	
	// 스폰 타임 주기
	float SpawnTimeInterval;
	
	//공성 미니언 스폰 카운터
	const int32 SiegeMinionSpawnCycle = 3;
	int32 SiegeMinionSpawnCount = 0;
	
	FTimerHandle SpawnTimerHandle;
	
};

