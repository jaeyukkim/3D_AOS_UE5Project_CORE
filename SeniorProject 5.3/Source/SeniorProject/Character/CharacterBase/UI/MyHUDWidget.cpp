// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "MyHUDWidget.h"

#include "SeniorProject/Character/Player/PlayerBase/MyCharacterStatComponent.h"
#include "SeniorProject/Character/Player/PlayerBase/MyPlayerState.h"

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"


void UMyHUDWidget::BindCharacterStat(UMyCharacterStatComponent* CharacterStat)
{
	if (IsValid(CharacterStat))
	{
		CurrentCharacterStat = CharacterStat;
		CharacterStat->OnHpChanged.AddUObject(this, &UMyHUDWidget::UpdateCharacterStat);
	}

}

void UMyHUDWidget::BindPlayerState(AMyPlayerState* PlayerState)
{
	if (IsValid(PlayerState))
	{
		CurrentPlayerState = PlayerState;
		PlayerState->OnPlayerStateChanged.AddUObject(this, &UMyHUDWidget::UpdatePlayerState);
	}
	
}

void UMyHUDWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}


void UMyHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	HPBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("pbHP")));

	ExpBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("pbExp")));

	PlayerLevel = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtLevel")));



}

void UMyHUDWidget::UpdateCharacterStat()
{
	if(IsValid(HPBar) && CurrentCharacterStat != nullptr)
		HPBar->SetPercent(CurrentCharacterStat->GetHpRatio());
}

void UMyHUDWidget::UpdatePlayerState()
{
	if (!CurrentPlayerState.IsValid())
		UE_LOG(LogTemp, Warning, TEXT("CurrentPlayerState is null"));

	if(IsValid(ExpBar) && CurrentPlayerState != nullptr)
		ExpBar->SetPercent(CurrentPlayerState->GetExpRatio());

	if(IsValid(PlayerLevel) && CurrentPlayerState != nullptr)
		PlayerLevel->SetText(FText::FromString(FString::FromInt(CurrentPlayerState->GetCharacterLevel())));

}

