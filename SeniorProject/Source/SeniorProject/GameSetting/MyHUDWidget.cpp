// Fill out your copyright notice in the Description page of Project Settings.


#include "SeniorProject/GameSetting/MyHUDWidget.h"

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "SeniorProject/Player/MyCharacterStatComponent.h"
#include "SeniorProject/Player/MyPlayerState.h"

void UMyHUDWidget::BindCharacterStat(UMyCharacterStatComponent* CharacterStat)
{

	CurrentCharacterStat = CharacterStat;
	CharacterStat->OnHpChanged.AddUObject(this, &UMyHUDWidget::UpdateCharacterStat);
}

void UMyHUDWidget::BindPlayerState(AMyPlayerState* PlayerState)
{

	CurrentPlayerState = PlayerState;
	PlayerState->OnPlayerStateChanged.AddUObject(this, &UMyHUDWidget::UpdatePlayerState);
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
	if(HPBar)
		HPBar->SetPercent(CurrentCharacterStat->GetHpRatio());
}

void UMyHUDWidget::UpdatePlayerState()
{

	if(ExpBar)
		ExpBar->SetPercent(CurrentPlayerState->GetExpRatio());

	if(PlayerLevel)
		PlayerLevel->SetText(FText::FromString(FString::FromInt(CurrentPlayerState->GetCharacterLevel())));

}

