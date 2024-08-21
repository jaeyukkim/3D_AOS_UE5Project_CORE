// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DamageActorBase.h"
#include "ProjectileBase.generated.h"


class UCapsuleComponent;
class UProjectileMovementComponent;

UCLASS(BlueprintType)
class SENIORPROJECT_API AProjectileBase : public ADamageActorBase
{
	GENERATED_BODY()
	
public:	
	
	AProjectileBase();
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnCapsuleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UCapsuleComponent> Capsule;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> Mesh;

};
