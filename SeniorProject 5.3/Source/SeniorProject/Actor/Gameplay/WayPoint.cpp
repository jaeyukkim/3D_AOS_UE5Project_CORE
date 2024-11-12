// Fill out your copyright notice in the Description page of Project Settings.


#include "WayPoint.h"

#include "AllWayPoint.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "SeniorProject/AI/AIControllerBase.h"


AWayPoint::AWayPoint()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	SphereCollision = CreateDefaultSubobject<USphereComponent>("SphereCollision");
	SphereCollision->SetSphereRadius(150.f);
	//SphereCollision->SetCollisionProfileName("OverlapOnlyPawn");
	SetRootComponent(SphereCollision);
	FlagParticle = CreateDefaultSubobject<UParticleSystemComponent>("FlagParticle");
	FlagParticle->SetupAttachment(SphereCollision);
}

// Called when the game starts or when spawned
void AWayPoint::BeginPlay()
{
	Super::BeginPlay();

	if(HasAuthority())
		SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AWayPoint::UpdateWayPoint);

}

void AWayPoint::UpdateWayPoint(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 미니언만 WayPoint 업데이트
	if(OtherActor == nullptr && OtherActor->ActorHasTag("Turret") && !OtherActor->ActorHasTag("Minion"))
	{
		return;
	}
	
	if(AMinions* Minion = Cast<AMinions>(OtherActor))
	{
		AAIControllerBase* AIControllerBase = Minion->AIControllerBase;
		if(AIControllerBase == nullptr) return;
		UBlackboardComponent* BlackboardComp = AIControllerBase->GetBlackboardComponent();
		if(BlackboardComp == nullptr) return;
		
		// 미니언이 도착했을 때 CurrentWayPoint를 이 액터로 설정
		BlackboardComp->SetValueAsObject("CurrentWayPoint", this);
		FVector TargetTurret = BlackboardComp->GetValueAsVector("TargetTurret");
	
		AActor* NearestWayPoint = nullptr;
		float DistanceToTurret = FVector::Distance(TargetTurret, GetActorLocation());
		float MinDistance = INFINITY;
		
		/*
		 * Overlap된 미니언의 Line에 맞는 WayPoint를 가져와서 다음 WayPoint를 업데이트
		 * 가장 가까운 웨이포인트를 반환하되 그 거리가 포탑까지와의 거리보다 멀다면 취소
		*/
		
		for(AWayPoint* EachWayPoint : UAllWayPoint::GetWayPoint(Minion->LineTag))
		{
			if(EachWayPoint == nullptr || EachWayPoint == this)
			{
				continue; // 현재 웨이포인트는 제외
			}

			//현재 위치에서 포탑까지의 거리보다 먼 웨이포인트는 제외
			float WayPointToTurret = FVector::Distance(EachWayPoint->GetActorLocation(), TargetTurret);
			float MinionToWayPoint = FVector::Distance(GetActorLocation(), EachWayPoint->GetActorLocation());
		
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
	
	
}







