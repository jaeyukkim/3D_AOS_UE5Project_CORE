// Fill out your copyright notice in the Description page of Project Settings.


#include "BTS_FindNextWayPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "SeniorProject/Actor/Gameplay/AllWayPoint.h"
#include "SeniorProject/Actor/Gameplay/WayPoint.h"
#include "SeniorProject/AI/AIControllerBase.h"
#include "SeniorProject/Character/Enemy/Minions.h"

void UBTS_FindNextWayPoint::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIControllerBase* AIControllerBase = Cast<AAIControllerBase>(OwnerComp.GetAIOwner());
	if (AIControllerBase == nullptr) return;
	
	AMinions* Minion = Cast<AMinions>(AIControllerBase->GetPawn());
	UBlackboardComponent* BlackboardComp = AIControllerBase->GetBlackboardComponent();
	if(Minion == nullptr || BlackboardComp == nullptr) return;

	
	AActor* NearestWayPoint = nullptr;
	float MinDistance = INFINITY;


	
	// 가장 가까운 웨이포인트를 반환하되 그 거리가 포탑까지와의 거리보다 멀다면 취소
	
	for(AWayPoint* EachWayPoint : UAllWayPoint::Get()->GetWayPoint(Minion->LineTag))
	{
		if(EachWayPoint == nullptr ||  Minion->IgnoreWayPoint.Contains(EachWayPoint))
		{
			continue; // 현재 웨이포인트와 이미 도착했던 웨이 포인트는 무시
		}
		
		float MinionToWayPoint = FVector::Distance(Minion->GetActorLocation(), EachWayPoint->GetActorLocation());
		
		if(MinDistance > MinionToWayPoint)
		{
			MinDistance = MinionToWayPoint;
			NearestWayPoint = EachWayPoint;
		}
			
	}

	// 가장 가까운 웨이포인트가 유효하다면 Blackboard에 설정
	if (NearestWayPoint != nullptr)
	{
		BlackboardComp->SetValueAsObject("WayPoint", NearestWayPoint);
	}
		
}
