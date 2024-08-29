// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SeniorProject/SeniorProject.h"
#include "Blueprint/UserWidget.h"
#include "MyCharacterWidget.generated.h"

/**
  hp�ٿ� ĳ���� ���� ����ȭ
 */
UCLASS()
class SENIORPROJECT_API UMyCharacterWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void SetCharacterStat(class UMyCharacterStatComponent* NewCharacterStat);


protected:
	virtual void NativeConstruct() override;
	void UpdateHPWidget();

private:
	TWeakObjectPtr<class UMyCharacterStatComponent> CurrentStat;


	UPROPERTY()
		class UProgressBar* HPProgressBar;

};
