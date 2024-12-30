// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "SeniorProject/Actor/Default/EffectActorBase.h"
#include "Shop.generated.h"




/**
 * 
 */
UCLASS()
class SENIORPROJECT_API AShop : public AEffectActorBase
{
	GENERATED_BODY()

public:
	AShop();

	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, Category = "ShopArea")
	TObjectPtr<USphereComponent> ShopArea;

	UPROPERTY(VisibleAnywhere, Category = "VisibleWall")
	TObjectPtr<UParticleSystemComponent> StartWall;

	UFUNCTION()
	void IsPlayerShopBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void IsPlayerShopBeginEndOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	
};
