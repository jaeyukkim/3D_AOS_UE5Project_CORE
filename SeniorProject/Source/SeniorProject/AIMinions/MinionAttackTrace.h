// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DrawDebugHelpers.h"
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "MinionAttackTrace.generated.h"


/**
  ���Ͱ� ���ݽÿ� �� ������ �׸��� ������ ���� 
  ���������� �ϴ� �Լ��� ȣ���ϴ� ���������Լ�
  
 */
UCLASS()
class SENIORPROJECT_API UMinionAttackTrace : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	UPROPERTY()
		class AMinions* Minion;
};

