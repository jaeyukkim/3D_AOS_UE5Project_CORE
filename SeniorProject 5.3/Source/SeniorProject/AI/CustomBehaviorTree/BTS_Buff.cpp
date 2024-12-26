// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/AI/CustomBehaviorTree/BTS_Buff.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTS_Buff::UBTS_Buff()
{
}

void UBTS_Buff::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
    
    auto Monster = OwnerComp.GetAIOwner()->GetPawn();
    FVector OriginPos = OwnerComp.GetBlackboardComponent()->GetValueAsVector("HomePos");
    
    // 홈 까지의 거리가 HomeArea을 벗어나면 범위 벗어남을 판단하는 블랙보드값 true 변경하고 타겟을 null로 세팅
    if (FVector::Distance(Monster->GetActorLocation(), OriginPos) >= HomeArea)
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsBool("bOutOfRange", true);
        OwnerComp.GetBlackboardComponent()->SetValueAsObject("Target", nullptr);
      
    }
    // 홈 까지의 거리가 300 이하면 범위 벗어남을 판단하는 블랙보드값 false로 변경
    if (FVector::Distance(Monster->GetActorLocation(), OriginPos) <= 100)
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsBool("bOutOfRange", false);
       
    }
}
