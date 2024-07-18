// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "MyCharacterWidget.h"
#include "SeniorProject/Character/Player/PlayerBase/MyCharacterStatComponent.h"
#include "Components/ProgressBar.h"

void UMyCharacterWidget::SetCharacterStat(UMyCharacterStatComponent* NewCharacterStat)
{
	if (NewCharacterStat == nullptr) return;

	CurrentStat = NewCharacterStat;

	NewCharacterStat->OnHpChanged.AddUObject(this, &UMyCharacterWidget::UpdateHPWidget);

	
}

//hp�ٿ� ĳ���� ���� ����ȭ
void UMyCharacterWidget::NativeConstruct()
{
	Super::NativeConstruct();
	HPProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_HpBar")));

	if (HPProgressBar != nullptr)
		UpdateHPWidget();
}

void UMyCharacterWidget::UpdateHPWidget()
{

		if (CurrentStat.IsValid())
		{
			if (HPProgressBar != nullptr)
			{
				HPProgressBar->SetPercent(CurrentStat->GetHpRatio());
			}
		}

}
