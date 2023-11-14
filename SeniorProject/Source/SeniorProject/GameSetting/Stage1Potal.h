// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Stage1Potal.generated.h"

DECLARE_MULTICAST_DELEGATE(FActivePotal1);

UCLASS()
class SENIORPROJECT_API AStage1Potal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStage1Potal();

	UPROPERTY(VisibleAnywhere)
		UStaticMesh* doorMesh;
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* MeshComponent;

	FActivePotal1 ActivePotal1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* CollisionBox;

	UFUNCTION()
		void OnOverlapBegin(
			UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult
		);
	

	UFUNCTION()
		void ActivePotal();
	UFUNCTION()
		void DisablePotal();



};
