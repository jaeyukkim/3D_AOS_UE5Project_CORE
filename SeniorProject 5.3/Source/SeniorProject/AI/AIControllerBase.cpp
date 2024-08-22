// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllerBase.h"

#include "BehaviorTree/BlackboardComponent.h"

AAIControllerBase::AAIControllerBase()
{
	Blackboard = CreateDefaultSubobject<UBlackboardComponent>("BlackboardComponent");
	check(Blackboard);
	
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>("BehaviorTreeComponent");
	check(BehaviorTreeComponent);
	
}
