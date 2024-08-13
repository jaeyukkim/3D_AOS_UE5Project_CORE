// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyMenuWidget.h"
#include "Components/Button.h"
#include "SeniorProject/PlayerBase/MyPlayerController.h"


void UMyMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	ResumeButton = Cast<UButton>(GetWidgetFromName(TEXT("btnResume")));
	if (nullptr != ResumeButton)
	{
		ResumeButton->OnClicked.AddDynamic(this, &UMyMenuWidget::OnResumeClicked);
	}

	ReturnToTitleButton = Cast<UButton>(GetWidgetFromName(TEXT("btnReturnToTitle")));
	if (nullptr != ReturnToTitleButton)
	{
		ReturnToTitleButton->OnClicked.AddDynamic(this, &UMyMenuWidget::OnReturnToTitleClicked);
	}

	RetryGameButton = Cast<UButton>(GetWidgetFromName(TEXT("btnRetryGame")));
	if (nullptr != RetryGameButton)
	{
		RetryGameButton->OnClicked.AddDynamic(this, &UMyMenuWidget::OnRetryGameClicked);
	}
}

void UMyMenuWidget::OnResumeClicked()
{
	auto MyPlayerController = Cast<AMyPlayerController>(GetOwningPlayer());


	RemoveFromParent();
	MyPlayerController->SetPause(false);
}

void UMyMenuWidget::OnReturnToTitleClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("TitleScene"));
}

void UMyMenuWidget::OnRetryGameClicked()
{
	auto MyPlayerController = Cast<AMyPlayerController>(GetOwningPlayer());
	if(MyPlayerController)
		MyPlayerController->RestartLevel();
}
