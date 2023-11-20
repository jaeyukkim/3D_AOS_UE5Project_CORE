// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "Perception/AIPerceptionComponent.h"
#include "AIController.h"
#include "KwangAiController.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API AKwangAiController : public AAIController
{
	GENERATED_BODY()
	
public:
	AKwangAiController();

	//�� ��Ʈ�ѷ��� ������ ���� �����ϴ� �ڵ��Դϴ�.
	virtual void OnPossess(APawn* InPawn) override;



	static const FName HomePosKey;
	static const FName PatrolPosKey;
	static const FName TargetKey;
	static const FName IsOutOfRangeKey;

	FVector GetHomePosKey();

	UPROPERTY(VisibleAnywhere)
	class UAISenseConfig_Sight* Sight;


	UFUNCTION()
		void OnSensed(const TArray<AActor*>& UpdatedActors);

	UPROPERTY(VisibleAnywhere)
		UAIPerceptionComponent* AIPerceptionComponent;
private:
	UPROPERTY()
		class UBlackboardData* BBMonster;

	UPROPERTY()
		class UBehaviorTree* BTMonster;
	
	UPROPERTY(VisibleAnywhere)
		UBlackboardComponent* BlackboardComp;


protected:
	

public:
	void RunAI();
	void StopAI();
	
};
