// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"
#include "WayPoint.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArriveWayPointDelegate, AActor*, WayPointActor);
class USphereComponent;

UCLASS()
class SENIORPROJECT_API AWayPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWayPoint();

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<USphereComponent> SphereCollision;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<UParticleSystemComponent> FlagParticle;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FGameplayTag LineTag;
	
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable)
	FArriveWayPointDelegate ArriveWayPointDelegate;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void UpdateWayPoint(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	

};


