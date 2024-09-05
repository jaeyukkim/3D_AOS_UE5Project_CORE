// Fill out your copyright notice in the Description page of Project Settings.


#include "OverlayWidget.h"
#include "Components/WidgetComponent.h"


void UOverlayWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}

void UOverlayWidget::SetRotationToPlayer()
{
	// 로컬 플레이어 컨트롤러 가져오기
	AActor* MonsterOwner = Cast<AActor>(WidgetController);
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	
	if (PlayerController != nullptr && MonsterOwner != nullptr)
	{
		
		// 위젯을 소유한 액터 가져오기
		
		FVector LookVector = PlayerController->PlayerCameraManager->GetCameraLocation() - MonsterOwner->GetActorLocation();
		LookVector.Z = 0.0f;
		FRotator TargetRot = FRotationMatrix::MakeFromX(LookVector).Rotator();
		
		
		UWidgetComponent* WidgetComponent = MonsterOwner->FindComponentByClass<UWidgetComponent>();
		if (WidgetComponent)
		{
			// 위젯의 월드 회전 설정
			WidgetComponent->SetWorldRotation(TargetRot);
		}
		
	}
}

