// Fill out your copyright notice in the Description page of Project Settings.


#include "BTS_FindNextWayPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "SeniorProject/Actor/Gameplay/WayPoint.h"
#include "SeniorProject/Character/Enemy/Minions.h"

void UBTS_FindNextWayPoint::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);


	AAIController* AIController = OwnerComp.GetAIOwner();
	if (AIController == nullptr) return;
	
	AMinions* Minion = Cast<AMinions>(AIController->GetPawn());
	UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
	if(Minion == nullptr || BlackboardComp == nullptr) return;

	
	FVector TargetTurret = BlackboardComp->GetValueAsVector("TargetTurret");
	AActor* CurrentWayPoint = Cast<AActor>(BlackboardComp->GetValueAsObject("CurrentWayPoint"));
	
	AActor* NearestWayPoint = nullptr;
	
	float DistanceToTurret = FVector::Distance(TargetTurret, Minion->GetActorLocation());
	float MinDistance = INFINITY;


	// 가장 가까운 웨이포인트를 반환하되 그 거리가 포탑까지와의 거리보다 멀다면 취소
	
	for(AWayPoint* EachWayPoint : Minion->WayPoints)
	{
		if(CurrentWayPoint && EachWayPoint == CurrentWayPoint)
		{
			continue; // 현재 웨이포인트는 제외
		}

		//현재 위치에서 포탑까지의 거리보다 먼 웨이포인트는 제외
		float DistanceToWayPoint = FVector::Distance(EachWayPoint->GetActorLocation(), TargetTurret);
		if(DistanceToWayPoint > DistanceToTurret) continue;

		if(MinDistance > DistanceToWayPoint)
		{
			MinDistance = DistanceToWayPoint;
			NearestWayPoint = EachWayPoint;
		}
			
	}

	// 가장 가까운 웨이포인트가 유효하다면 Blackboard에 설정
	if (NearestWayPoint != nullptr)
	{
		BlackboardComp->SetValueAsObject("WayPoint", NearestWayPoint);
	}
	
	
	
}
