// Fill out your copyright notice in the Description page of Project Settings.


#include "OverlayWidget.h"
#include "Components/WidgetComponent.h"


void UOverlayWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}

bool UOverlayWidget::IsNearLocalController()
{
	APlayerController* PlayerController = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
	AActor* MonsterOwner = Cast<AActor>(WidgetController);

	if (PlayerController != nullptr && MonsterOwner != nullptr)
	{
		
		
		// 위젯을 소유한 액터 가져오기
		
		float Distance = FVector::Dist(PlayerController->PlayerCameraManager->GetCameraLocation() ,MonsterOwner->GetActorLocation());
			
		
		return Distance < 3000.f;
	}
	
	return false;
}


