// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "MyPlayerState.h"
#include "SeniorProject/AbilitySystem/AbilitySystemComponentBase.h"
#include "SeniorProject/PlayerBase/MyCharacter.h"
#include "SeniorProject/Input/InputComponentBase.h"
#include "SeniorProject/UI/MyMenuWidget.h"



AMyPlayerController::AMyPlayerController()
{


	static ConstructorHelpers::FClassFinder<UMyMenuWidget> UI_MENU_C(
		TEXT("WidgetBlueprint'/Game/UI/UI_Pause'"));
	if (UI_MENU_C.Succeeded())
	{
		MenuWidgetClass = UI_MENU_C.Class;
	}
	


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

	ChangeInputMode(true);
	

		
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UInputComponentBase* InputComponentBase = CastChecked<UInputComponentBase>(InputComponent);
	InputComponentBase->BindAbilityActions(InputData, this, &ThisClass::AbilityInputTagPressed,
		&ThisClass::AbilityInputTagReleased, &ThisClass::AbilityInputTagHeld);
	
}


void AMyPlayerController::NPCKill(AController* KilledNPC, int32 Exp) const
{
	if (MyPlayerState->AddExp(Exp))
	{
		auto MyCharacter = Cast<AMyCharacter>(KilledNPC->GetPawn());
		MyCharacter->UpdateCharacterStat();
	}
}

void AMyPlayerController::ChangeInputMode(bool bGameMode)
{
	if (bGameMode)
	{
		SetInputMode(GameInputMode);
		bShowMouseCursor = false;
	}
	else
	{
		SetInputMode(UIInputMode);
		bShowMouseCursor = true;
	}
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

void AMyPlayerController::OnGamePause()
{
	MenuWidget = CreateWidget<UMyMenuWidget>(this, MenuWidgetClass);
	
	if (MenuWidget)
	{
		MenuWidget->SetUserFocus(this);
		MenuWidget->AddToViewport(3);
		SetPause(true);
		ChangeInputMode(false);
	}
	
}

