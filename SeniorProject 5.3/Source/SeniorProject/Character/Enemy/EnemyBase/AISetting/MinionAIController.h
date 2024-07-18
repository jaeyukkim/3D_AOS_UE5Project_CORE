// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "Perception/AIPerceptionComponent.h"
#include "AIController.h"
#include "MinionAIController.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API AMinionAIController : public AAIController
{
	GENERATED_BODY()

public:
	AMinionAIController();

	//이 컨트롤러를 지정된 폰에 연결하는 핸들입니다.
	virtual void OnPossess(APawn* InPawn) override;



	static const FName HomePosKey;	//몬스터의 홈 위치
	static const FName PatrolPosKey;	//다음 무작위 이동 위치 정보
	static const FName TargetKey;		//몬스터의 타겟정보
	static const FName IsOutOfRangeKey;	//몬스터가 홈 범위 밖에 나갔는지

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
