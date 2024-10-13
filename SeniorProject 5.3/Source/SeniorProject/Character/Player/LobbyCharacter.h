// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LobbyCharacter.generated.h"

class APlayerStateBase;
class AMyPlayerController;
class UTexture;
class UOverlayWidget;
class AMyCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectedCharacterChangedDelegate ,const UTexture*, CharacterImage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPlayerChangedDelegate, const FGameplayTag&, TeamName, const AMyPlayerController*,  PC, const FString&, UserName, const UTexture*, CharacterImg);


UCLASS()
class SENIORPROJECT_API ALobbyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ALobbyCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	
	
	void InitLobbyWidget();
	void InitPlayerInfo();
	void BindCallbacksToDependencies();
	UFUNCTION(BlueprintCallable)
	void BroadcastCharacterSelectWidget();
	
	UFUNCTION(BlueprintCallable)
	void SetPlayerCharacterClass(TSubclassOf<AMyCharacter> SelectedCharacter,  const UTexture* CharacterImg);
	

	UPROPERTY(EditAnywhere)
	TObjectPtr<UOverlayWidget> CharacterSelectWidget;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<AMyPlayerController> PC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<APlayerStateBase> PS;


	UPROPERTY(BlueprintAssignable)
	FSelectedCharacterChangedDelegate CharacterChangedDelegate;

	
	UPROPERTY(BlueprintAssignable)
	FPlayerChangedDelegate PlayerCharacterChanged;
	

	UPROPERTY(BlueprintAssignable)
	FPlayerChangedDelegate NewPlayerEntranced;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
private:
	UPROPERTY(EditAnywhere, Category="Widget")
	TSubclassOf<UOverlayWidget> CharacterSelectWidgetClass;
	
};
