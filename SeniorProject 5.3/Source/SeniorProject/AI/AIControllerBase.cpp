// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllerBase.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Navigation/CrowdFollowingComponent.h"



AAIControllerBase::AAIControllerBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
	
	UCrowdFollowingComponent* CrowdFollowingComponent = FindComponentByClass<UCrowdFollowingComponent>();

	if(CrowdFollowingComponent)
	{
		CrowdFollowingComponent->SetCrowdSeparation(true);
		CrowdFollowingComponent->SetCrowdSeparationWeight(800.f);
		CrowdFollowingComponent->SetCrowdAvoidanceRangeMultiplier(1.1f);
		CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Good);
		CrowdFollowingComponent->SetCrowdAnticipateTurns(true);
	}

	
	Blackboard = CreateDefaultSubobject<UBlackboardComponent>("BlackboardComponent");
	check(Blackboard);
	
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>("BehaviorTreeComponent");
	check(BehaviorTreeComponent);
}

void AAIControllerBase::StopAI()
{
	if(BehaviorTreeComponent != nullptr)
		BehaviorTreeComponent->StopTree(EBTStopMode::Safe);
}
