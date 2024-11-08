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
	
	APawn* Minion = Cast<APawn>(AIControllerBase->GetPawn());
	UBlackboardComponent* BlackboardComp = AIControllerBase->GetBlackboardComponent();
	if(Minion == nullptr || BlackboardComp == nullptr) return;

	
	FVector TargetTurret = BlackboardComp->GetValueAsVector("TargetTurret");
	AActor* CurrentWayPoint = Cast<AActor>(BlackboardComp->GetValueAsObject("CurrentWayPoint"));
	
	AActor* NearestWayPoint = nullptr;
	
	float DistanceToTurret = FVector::Distance(TargetTurret, Minion->GetActorLocation());
	float MinDistance = INFINITY;


	
	// 가장 가까운 웨이포인트를 반환하되 그 거리가 포탑까지와의 거리보다 멀다면 취소
	
	for(AWayPoint* EachWayPoint : UAllWayPoint::GetWayPoint(AIControllerBase->LineTag))
	{
		if(EachWayPoint == nullptr) continue;
		if(CurrentWayPoint != nullptr && EachWayPoint == CurrentWayPoint)
		{
			continue; // 현재 웨이포인트는 제외
		}

		//현재 위치에서 포탑까지의 거리보다 먼 웨이포인트는 제외
		float WayPointToTurret = FVector::Distance(EachWayPoint->GetActorLocation(), TargetTurret);
		float MinionToWayPoint = FVector::Distance(Minion->GetActorLocation(), EachWayPoint->GetActorLocation());
		
		if(WayPointToTurret > DistanceToTurret) continue;

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
