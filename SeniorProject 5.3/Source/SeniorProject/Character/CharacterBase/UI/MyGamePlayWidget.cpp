// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "MyGamePlayWidget.h"
#include "Components/Button.h"
#include "SeniorProject/Character/Player/PlayerBase/MyPlayerController.h"


void UMyGamePlayWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	ResumeButton = Cast<UButton>(GetWidgetFromName(TEXT("btnResume")));
	if (nullptr != ResumeButton)
	{
		ResumeButton->OnClicked.AddDynamic(this, &UMyGamePlayWidget::OnResumeClicked);
	}

	ReturnToTitleButton = Cast<UButton>(GetWidgetFromName(TEXT("btnReturnToTitle")));
	if (nullptr != ReturnToTitleButton)
	{
		ReturnToTitleButton->OnClicked.AddDynamic(this, &UMyGamePlayWidget::OnReturnToTitleClicked);
	}

	RetryGameButton = Cast<UButton>(GetWidgetFromName(TEXT("btnRetryGame")));
	if (nullptr != RetryGameButton)
	{
		RetryGameButton->OnClicked.AddDynamic(this, &UMyGamePlayWidget::OnRetryGameClicked);
	}
	
}

void UMyGamePlayWidget::OnResumeClicked()
{
	auto MyPlayerController = Cast<AMyPlayerController>(GetOwningPlayer());
	if(MyPlayerController)
	{
		RemoveFromParent();

		MyPlayerController->ChangeInputMode(true);
		MyPlayerController->SetPause(false);
	}
		
}

void UMyGamePlayWidget::OnReturnToTitleClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("TitleScene"));
}

void UMyGamePlayWidget::OnRetryGameClicked()
{
	auto MyPlayerController = Cast<AMyPlayerController>(GetOwningPlayer());
	if(MyPlayerController)
		MyPlayerController->RestartLevel();
}

