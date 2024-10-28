// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Character.h"
#include "SeniorProject/GameSetting/CoreGameState.h"
#include "LobbyCharacter.generated.h"


struct FGameplayTag;



class APlayerStateBase;
class AMyPlayerController;
class UTexture;
class UOverlayWidget;
class AMyCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectedCharacterChangedDelegate ,const UTexture*, CharacterImage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerChangedDelegate, const FPlayerInfo&, Info);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerReadyCompleted);

UCLASS()
class SENIORPROJECT_API ALobbyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ALobbyCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	
	void InitLobbyWidget();
	void InitPlayerInfo();
	void BindCallbacksToDependencies();
	UFUNCTION(Server, Reliable, BlueprintCallable)
	void ServerBroadcastCharacterSelectWidget();
	UFUNCTION(Server, Reliable, BlueprintCallable)
	void ServerSetPlayerCharacterClass(UClass* SelectedCharacter, UTexture* CharacterImg);
	UFUNCTION(Server, Reliable, BlueprintCallable)
	void ServerReady();
	UFUNCTION(Server, Reliable, BlueprintCallable)
	void GameStart();
	UFUNCTION(BlueprintCallable)
	TMap<UClass*, FGameplayTag> GetSelectedPlayerClass();
	
	
	UPROPERTY(BlueprintAssignable)
	FSelectedCharacterChangedDelegate CharacterChangedDelegate;
	UPROPERTY(BlueprintAssignable)
	FPlayerChangedDelegate PlayerCharacterChanged;
	UPROPERTY(BlueprintAssignable)
	FPlayerChangedDelegate NewPlayerEntranced;
	UPROPERTY(BlueprintAssignable)
	FPlayerChangedDelegate PlayerReadyCompleted;
	UPROPERTY(BlueprintAssignable)
	FPlayerReadyCompleted AllPlayerReadyCompleted;


	UPROPERTY(EditAnywhere)
	TObjectPtr<UOverlayWidget> CharacterSelectWidget;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FPlayerInfo PlayerInformation;
	UFUNCTION(BlueprintCallable)
	FGameplayTag GetPlayerTeamName();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
private:
	FTimerHandle InitPlayerInfoRetryTimerHandle;
	
};
