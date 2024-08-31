// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeniorProject/Actor/Default/DamageActorBase.h"
#include "HomingProjectile.generated.h"

/**
 * 
 */
class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class SENIORPROJECT_API AHomingProjectile : public ADamageActorBase
{
	GENERATED_BODY()
public:
	AHomingProjectile();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Homing")
	AActor* TargetActor;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Homing")
	float HomingAccelerationMagnitude;

	void InitializeProjectile(const FGameplayEffectSpecHandle& SpecHandle, AActor* Target);
	
protected:
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<USphereComponent> SphereComponent;

	
private:
	UFUNCTION(NetMulticast, Reliable)
	void MulticastUpdateProjectileTransform();
	
	UPROPERTY(Replicated)
	FVector TargetLocation;

	UPROPERTY(Replicated)
	FVector TargetDirection;

	UPROPERTY(Replicated)
	FRotator TargetRotator;
};
