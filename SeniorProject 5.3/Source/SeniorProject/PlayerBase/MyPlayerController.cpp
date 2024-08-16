// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/Input/InputComponentBase.h"




AMyPlayerController::AMyPlayerController()
{
	bReplicates = true;

}

void AMyPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

}

UAbilitySystemComponentBase* AMyPlayerController::GetASC()
{
	if(AbilityComponentBase == nullptr)
	{
		AbilityComponentBase = Cast<UAbilitySystemComponentBase>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetPawn<APawn>()));
	}
	return AbilityComponentBase;
}



void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();



	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);

	
		
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UInputComponentBase* InputComponentBase = CastChecked<UInputComponentBase>(InputComponent);
	InputComponentBase->BindAbilityActions(InputData, this, &ThisClass::AbilityInputTagPressed,
		&ThisClass::AbilityInputTagReleased, &ThisClass::AbilityInputTagHeld);
	
}


void AMyPlayerController::AbilityInputTagPressed(FGameplayTag InputTag)
{
//	GEngine->AddOnScreenDebugMessage(1, 3.f, FColor::Red, *InputTag.ToString());
}

void AMyPlayerController::AbilityInputTagReleased(FGameplayTag InputTag)
{
	if (GetASC() == nullptr) return;
	GetASC()->AbilityInputTagReleased(InputTag);
}

void AMyPlayerController::AbilityInputTagHeld(FGameplayTag InputTag)
{
	if (GetASC() == nullptr) return;
	GetASC()->AbilityInputTagHeld(InputTag);
}



