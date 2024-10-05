// Fill out your copyright notice in the Description page of Project Settings.


#include "BTS_Detect.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "SeniorProject/Character/Enemy/Minions.h"
#include "SeniorProject/Character/Player/MyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "SeniorProject/AbilitySystem/Global/BlueprintFunctionLibraryBase.h"


void UBTS_Detect::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);


	 AAIController* AIController = OwnerComp.GetAIOwner();
    if (AIController == nullptr)
    {
        return;
    }

    UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
    AActor* ControlledPawn = AIController->GetPawn();

    /*
     * 1. 타겟 1순위는 같은 팀 플레이어를 공격 한 상대 팀 플레이어임
     * 2. 상대 팀 플레이어가 같은 팀 플레이어를 공격하면 주변 미니언에 TargetPlayer 블랙보드 값이 저장됨
     * 3. 거리가 일정거리 이상 벗어나면 타겟팅 해제
     */ 
    
    AActor* TargetPlayer = Cast<AActor>(BlackboardComp->GetValueAsObject("TargetPlayer"));
    if (TargetPlayer != nullptr)
    {
        float DistanceToTargetCharacter = (ControlledPawn->GetActorLocation() - TargetPlayer->GetActorLocation()).Size();
        if (DistanceToTargetCharacter <= DetectRange)
        {
            BlackboardComp->SetValueAsObject("Target", TargetPlayer);
            return;
        }
        else
        {
            BlackboardComp->SetValueAsObject("TargetPlayer", nullptr);
            BlackboardComp->SetValueAsObject("Target", nullptr);
        }
    }

    /*
     * 1. 타겟 2순위는 주변에 있는 타워임
     * 2. 미니언은 기본적으로 현재 공격 목표 타워가 블랙보드에 저장되어있고 타워에 일정거리 이하로 접근 시 Target은 타워가됨
     * 3. 거리가 일정거리 이상 벗어나면 타겟팅 해제
     */
    
    AActor* TargetTower = Cast<AActor>(BlackboardComp->GetValueAsObject("TargetTurret"));
    
    if (TargetTower && !ControlledPawn->ActorHasTag("Turret"))
    {
        float DistanceToTargetTower = (ControlledPawn->GetActorLocation() - TargetTower->GetActorLocation()).Size();
        if (DistanceToTargetTower <= DetectRange)
        {
            BlackboardComp->SetValueAsObject("Target", TargetTower);
            return;
        }
    
    }

    /*
     * 1. 타겟 3순위는 가장 가까운 상대 팀 미니언임
     * 
     * 2. 거리가 일정거리 이상 벗어나면 타겟팅 해제
     */

    
    TArray<AActor*> Minions;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMinions::StaticClass(), Minions);
    AActor* ClosestMinion = nullptr;
    float MinDistance = FLT_MAX;

    
    for (AActor* Minion : Minions)
    {
        if (Minion != ControlledPawn)
        {
           if (!UBlueprintFunctionLibraryBase::IsFriends(ControlledPawn,Minion))
           {
               if(Minion->Implements<UCombatInterface>() && !ICombatInterface::Execute_IsDead(Minion))
               {
                   float DistanceToMinion = (ControlledPawn->GetActorLocation() - Minion->GetActorLocation()).Size();
                   if (DistanceToMinion < MinDistance && DistanceToMinion <= losingTargetRange)
                   {
                       MinDistance = DistanceToMinion;
                       ClosestMinion = Minion;
                   }
                   
               }
               
           }
            
        }
    }
    

    if (ClosestMinion)
    {
        BlackboardComp->SetValueAsObject("Target", ClosestMinion);
        return;
    }
    

    // 4. 마지막은 가장 가까운 적팀 Players 탐색
    // 거리가 일정거리 이상 벗어나면 타겟팅 해제
    
    TArray<AActor*> Players;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyCharacter::StaticClass(), Players);
    AActor* ClosestPlayer = nullptr;
    MinDistance = FLT_MAX;

    for (AActor* Player : Players)
    {
        if (!UBlueprintFunctionLibraryBase::IsFriends(ControlledPawn,Player))
        {
            if(Player->Implements<UCombatInterface>() && !ICombatInterface::Execute_IsDead(Player))
            {
                float DistanceToMinion = (ControlledPawn->GetActorLocation() - Player->GetActorLocation()).Size();
                if (DistanceToMinion < MinDistance && DistanceToMinion <= losingTargetRange)
                {
                    MinDistance = DistanceToMinion;
                    ClosestPlayer = Player;
                }
                   
            }
               
        }
    }

    if (ClosestPlayer)
    {
        BlackboardComp->SetValueAsObject("Target", ClosestPlayer);
        return;
    }

    // 모든 조건을 만족하지 못하면 TargetActor를 null로 설정
    BlackboardComp->SetValueAsObject("Target", nullptr);
}
