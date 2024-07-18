// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "SeniorProject/Character/CharacterBase/UI/MyHUDWidget.h"
#include "MyPlayerState.h"
#include "SeniorProject/Character/Player/Character/MyCharacter.h"
#include "SeniorProject/Character/CharacterBase/UI/MyMenuWidget.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"


AMyPlayerController::AMyPlayerController()
{

	static ConstructorHelpers::FClassFinder<UMyHUDWidget> UI_HUD_C(
		TEXT("WidgetBlueprint'/Game/UI/UI_HUD'"));
	if (UI_HUD_C.Succeeded())
	{
		HUDWidgetClass = UI_HUD_C.Class;
	}

	static ConstructorHelpers::FClassFinder<UMyMenuWidget> UI_MENU_C(
		TEXT("WidgetBlueprint'/Game/UI/UI_Pause'"));
	if (UI_MENU_C.Succeeded())
	{
		MenuWidgetClass = UI_MENU_C.Class;
	}

	static ConstructorHelpers::FObjectFinder<UInputMappingContext> MAPPING_CONTEXT(
		TEXT("/Script/EnhancedInput.InputMappingContext'/Game/BP/Input/InputAction/IMC_PlayerContext.IMC_PlayerContext'"));

	if (MAPPING_CONTEXT.Succeeded())
	{
		PlayerContext = MAPPING_CONTEXT.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> MOVEACTION(
		TEXT("/Script/EnhancedInput.InputAction'/Game/BP/Input/InputAction/InputAction/IA_Move.IA_Move'"));

	if (MOVEACTION.Succeeded())
	{
		MoveAction = MOVEACTION.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> LOOKACTION(
		TEXT("/Script/EnhancedInput.InputAction'/Game/BP/Input/InputAction/InputAction/IA_Look.IA_Look'"));

	if (MOVEACTION.Succeeded())
	{
		LookAction = MOVEACTION.Object;
	}


	bReplicates = true;
	
}

void AMyPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	HUDWidget = CreateWidget<UMyHUDWidget>(this, HUDWidgetClass);
	if (HUDWidget)
	{
		HUDWidget->SetUserFocus(this);
		HUDWidget->AddToViewport(1);

	}
}


void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();


	//check(PlayerContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = 
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	
	//check(Subsystem);
	Subsystem->AddMappingContext(PlayerContext, 0);

	
	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);

	ChangeInputMode(true);
	
		
	
	MyPlayerState = Cast<AMyPlayerState>(PlayerState);

	
	if(HUDWidget != nullptr)
		HUDWidget->BindPlayerState(MyPlayerState);

	if (MyPlayerState != nullptr)
		MyPlayerState->OnPlayerStateChanged.Broadcast();

		
	
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyPlayerController::Move);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyPlayerController::Look);

}

void AMyPlayerController::Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	
	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), InputAxisVector.Y);
		ControlledPawn->AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), InputAxisVector.X);
	}
	
}

void AMyPlayerController::Look(const FInputActionValue& InputActionValue)
{
	
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddControllerPitchInput(InputAxisVector.Y);
		ControlledPawn->AddControllerYawInput(InputAxisVector.X);
	}
	
}


/*
void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction(TEXT("GamePause"), 
		EInputEvent::IE_Pressed, this, &AMyPlayerController::OnGamePause);
}
*/




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

UMyHUDWidget* AMyPlayerController::GetHUDWidget() const
{
	return HUDWidget;
}
