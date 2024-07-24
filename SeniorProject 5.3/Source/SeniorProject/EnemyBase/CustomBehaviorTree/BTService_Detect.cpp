// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_Detect.h"

#include "SeniorProject/EnemyBase/AISetting/MinionAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"


UBTService_Detect::UBTService_Detect()
{
	NodeName = TEXT("Detect");
	Interval = 1.0f;
	
}

//홈 범위에서 벗어나면 다시 원래위치로 돌아가고 타겟설정을 초기화
void UBTService_Detect::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);


	auto Monster = OwnerComp.GetAIOwner()->GetPawn();

	if (!IsValid(Monster))
		return;

	FVector OriginPos = OwnerComp.GetBlackboardComponent()->GetValueAsVector(AMinionAIController::HomePosKey);

	if (FVector::Distance(Monster->GetActorLocation(), OriginPos) >= 3500)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(AMinionAIController::IsOutOfRangeKey, true);

		Monster->GetController()->GetCharacter()->GetCharacterMovement()->MaxWalkSpeed = 800.0f;
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(AMinionAIController::TargetKey, NULL);
		OwnerComp.RestartTree();
		SetNextTickTime(NodeMemory, 1.0f);


	}


	if (FVector::Distance(Monster->GetActorLocation(), OriginPos) <= 600)
	{
		Monster->GetController()->GetCharacter()->GetCharacterMovement()->MaxWalkSpeed = 300.0f;
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(AMinionAIController::IsOutOfRangeKey, false);

	}
	




}
	

