// Fill out your copyright notice in the Description page of Project Settings.


#include "AllWayPoint.h"
#include "WayPoint.h"
#include "EngineUtils.h"
#include "SeniorProject/GamePlayTagsBase.h"

TObjectPtr<UAllWayPoint> UAllWayPoint::GAllWayPoint;

const UAllWayPoint* UAllWayPoint::Get()
{
	if (!GAllWayPoint)
	{
		GAllWayPoint = NewObject<UAllWayPoint>();
		GAllWayPoint->AddToRoot(); // GC로부터 보호
	}
	return GAllWayPoint;
}

// 월드상의 모든 WayPoint 저장
void UAllWayPoint::InitializeWayPoint(UWorld* WorldContext)
{
	if (!WorldContext) return;
	
	if (!GAllWayPoint)
	{
		GAllWayPoint = NewObject<UAllWayPoint>();
		GAllWayPoint->AddToRoot(); // GC로부터 보호
	}
	
	for (TActorIterator<AWayPoint> It(WorldContext); It; ++It)
	{
		AWayPoint* Way = *It;
		FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();
		if (Way->LineTag == TagsBase.GameRule_Line_Top)
		{
			GAllWayPoint->TopWayPoint.AddUnique(Way);
		}
		else if (Way->LineTag == TagsBase.GameRule_Line_Mid)
		{
			GAllWayPoint->MidWayPoint.AddUnique(Way);
		}
		else if (Way->LineTag == TagsBase.GameRule_Line_Bottom)
		{
			GAllWayPoint->BottomWayPoint.AddUnique(Way);
		}
	}
	
}


// 인자로 받은 라인에 대한 WayPoint Array 반환
TArray<TObjectPtr<AWayPoint>> UAllWayPoint::GetWayPoint(FGameplayTag& LineTag)
{
	FGameplayTagsBase TagsBase = FGameplayTagsBase::Get();

	if(LineTag == TagsBase.GameRule_Line_Top)
	{
		return GAllWayPoint->TopWayPoint;
	}
	if(LineTag == TagsBase.GameRule_Line_Mid)
	{
		return GAllWayPoint->MidWayPoint;

	}
	if(LineTag == TagsBase.GameRule_Line_Bottom)
	{
		return GAllWayPoint->BottomWayPoint;
	}

	return GAllWayPoint->MidWayPoint;
}
