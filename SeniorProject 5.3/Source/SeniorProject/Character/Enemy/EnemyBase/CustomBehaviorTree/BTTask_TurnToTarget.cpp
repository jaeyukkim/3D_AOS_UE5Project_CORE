// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BTTask_TurnToTarget.h"
#include "SeniorProject/Character/Enemy/EnemyBase/AISetting/MinionAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_TurnToTarget::UBTTask_TurnToTarget()
{
	NodeName = TEXT("TurnToTarget");
}

EBTNodeResult::Type UBTTask_TurnToTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto MyCharacter = OwnerComp.GetAIOwner()->GetPawn();
	if (MyCharacter == nullptr) return EBTNodeResult::Failed;

	

	auto Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AMinionAIController::TargetKey));

	Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AMinionAIController::TargetKey));

	if (Target == nullptr) return EBTNodeResult::Failed;

	FVector LookVector = Target->GetActorLocation() - MyCharacter->GetActorLocation();
	LookVector.Z = 0.0f;

	FRotator TargetRot = FRotationMatrix::MakeFromX(LookVector).Rotator();
	MyCharacter->SetActorRotation(FMath::RInterpTo(MyCharacter->GetActorRotation(), TargetRot, GetWorld()->GetDeltaSeconds(), 2.0f));

	return EBTNodeResult::Succeeded;

	


}