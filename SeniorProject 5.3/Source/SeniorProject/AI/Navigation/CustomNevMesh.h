// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "CustomNevMesh.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API ACustomNevMesh : public ANavMeshBoundsVolume
{
	GENERATED_BODY()
public:
	ACustomNevMesh();
	virtual void BeginPlay() override;
};
