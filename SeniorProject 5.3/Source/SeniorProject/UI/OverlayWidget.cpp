// Fill out your copyright notice in the Description page of Project Settings.


#include "OverlayWidget.h"
#include "SeniorProject/PlayerBase/MyCharacterStatComponent.h"
#include "SeniorProject/PlayerBase/MyPlayerState.h"

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

/*
void UOverlayWidget::BindCharacterStat(UMyCharacterStatComponent* CharacterStat)
{
	if (IsValid(CharacterStat))
	{
		CurrentCharacterStat = CharacterStat;
		CharacterStat->OnHpChanged.AddUObject(this, &UOverlayWidget::UpdateCharacterStat);
	}

}

void UOverlayWidget::BindPlayerState(AMyPlayerState* PlayerState)
{
	if (IsValid(PlayerState))
	{
		CurrentPlayerState = PlayerState;
		PlayerState->OnPlayerStateChanged.AddUObject(this, &UOverlayWidget::UpdatePlayerState);
	}

}
*/


void UOverlayWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}

/*
void UOverlayWidget::NativeConstruct()
{
	Super::NativeConstruct();

	HPBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("pbHP")));

	ExpBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("pbExp")));

	PlayerLevel = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtLevel")));



}

void UOverlayWidget::UpdateCharacterStat()
{
	if (IsValid(HPBar) && CurrentCharacterStat != nullptr)
		HPBar->SetPercent(CurrentCharacterStat->GetHpRatio());
}

void UOverlayWidget::UpdatePlayerState()
{
	if (!CurrentPlayerState.IsValid())
		UE_LOG(LogTemp, Warning, TEXT("CurrentPlayerState is null"));

	if (IsValid(ExpBar) && CurrentPlayerState != nullptr)
		ExpBar->SetPercent(CurrentPlayerState->GetExpRatio());

	if (IsValid(PlayerLevel) && CurrentPlayerState != nullptr)
		PlayerLevel->SetText(FText::FromString(FString::FromInt(CurrentPlayerState->GetCharacterLevel())));

}

*/
