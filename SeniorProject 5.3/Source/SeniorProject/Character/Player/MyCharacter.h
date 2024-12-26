// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SeniorProject/SeniorProject.h"

#include "SeniorProject/Interface/EnemyInterface.h"
#include "SeniorProject/Character/CharacterBase.h"
#include "SeniorProject/UI/ItemMenu/ItemMenuWidgetController.h"
#include "InputActionValue.h"
#include "SeniorProject/Interface/PlayerInterface.h"
#include "MyCharacter.generated.h"


class UActionComponent;
class UItemComponent;
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class USoundCue;
class UAudioComponent;
class AMyPlayerController;
class APlayerStateBase;
class UWidgetComponent;
class UOverlayWidget;
class UUserWidget;
class AAttackRangeDecal;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerAttributeChangedSignature, float, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerLevelChangedSignature, int32, NewLevel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeftGame);
DECLARE_MULTICAST_DELEGATE(FRespawnedDelegate);


UCLASS(abstract)
class SENIORPROJECT_API AMyCharacter : public ACharacterBase, public IPlayerInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	virtual void InitPlayerInfo();
	
	UFUNCTION(NetMulticast, Reliable)
	void MulticastEndGame(const FGameplayTag& DefeatedTeam);
	UFUNCTION(NetMulticast, Reliable)
	void MulticastInitAbilityActorInfo();
	UFUNCTION(NetMulticast, Reliable)
	virtual void MulticastPlayerDie();
	UFUNCTION(NetMulticast, Reliable)
	virtual void MulticastReSpawn();
	UFUNCTION(NetMulticast, Reliable)
	virtual void MulticastSetMovementMode(const bool bIsMovementEnable);
	UFUNCTION(Server, Reliable, BlueprintCallable)
	virtual void ServerReSpawn();
	UFUNCTION(Server, Reliable, BlueprintCallable)
	virtual void ServerRecall();
	UFUNCTION(Server, Reliable)
	void ServerLeaveGame();
	UFUNCTION(Client, Reliable)
	void ClientSpectate();
	UFUNCTION(BlueprintCallable)
	void BroadcastInitialValues();
	UFUNCTION(BlueprintCallable)
	virtual void SetMovementEnable(const bool bIsMovementEnable);
	
	UPROPERTY(VisibleAnywhere, Category = "Camera")
		TObjectPtr<USpringArmComponent> SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		TObjectPtr<UCameraComponent> Camera;
	UPROPERTY(EditAnywhere, Category="Input")
		TObjectPtr<AMyPlayerController> PlayerController;
	

	
	/* CombatInterface */
	virtual void GetAimHitResult_Implementation(float AbilityDistance, FHitResult& HitResult) override;
	virtual void GetStraightAimHitResult_Implementation(float AttackDistance ,FHitResult& HitResult);
	virtual void Die_Implementation() override;
	
	/* end CombatInterface */
	
	/* Enemy Interface */
	virtual FGameplayTag GetTeamName_Implementation() const override;
	/* end Enemy Interface */
	
	/** Players Interface */
	virtual int32 GetSpellPoints_Implementation() const override;
	virtual int32 GetXP_Implementation() const override;
	virtual int32 GetGold_Implementation() const override;
	virtual int32 FindLevelForXP_Implementation(int32 InXP) const override;
	virtual int32 GetPlayerLevel_Implementation() override;
	virtual void AddToPlayerLevel_Implementation(int32 InPlayerLevel) override;
	virtual void AddToSpellPoints_Implementation(int32 InSpellPoints) override;
	virtual void AddToGold_Implementation(int32 InGold) override;
	virtual void AddToXP_Implementation(int32 InXP) override;
	virtual void LevelUp_Implementation() override;
	virtual void AddToItem_Implementation(const FItemInformation& InOwnedItem) override;
	virtual bool DeleteItem_Implementation(const FGameplayTag& ItemInputTag) override;
	//virtual void SortingItem_Implementation() override;
	virtual FGameplayTag GetEmptyItemSlot_Implementation() override;
	virtual TArray<FItemInformation> GetAllItem_Implementation() override;

	virtual bool GetIsInShop_Implementation() override;
	virtual void SetIsInShop_Implementation(bool InbIsInShop) override;
	virtual UAnimMontage* GetRecallMontage_Implementation() override;
	virtual UActionComponent* GetActionComponent_Implementation() override;
	/** end Player Interface */

	
	UPROPERTY(BlueprintAssignable)
	FPlayerAttributeChangedSignature OnPlayerBarManaChanged;
	UPROPERTY(BlueprintAssignable)
	FPlayerAttributeChangedSignature OnPlayerBarMaxManaChanged;
	UPROPERTY(BlueprintAssignable)
	FPlayerLevelChangedSignature OnPlayerBarLevelChanged;
	UPROPERTY(BlueprintAssignable)
	FPlayerAttributeChangedSignature OnPlayerBarHealthChanged;
	UPROPERTY(BlueprintAssignable)
	FPlayerAttributeChangedSignature OnPlayerBarMaxHealthChanged;
	FOnLeftGame OnLeftGame;
	FRespawnedDelegate Respawned;

	
	UFUNCTION(BlueprintCallable)
	void ShowMagicCircle();
	UFUNCTION(BlueprintCallable)
	void HideMagicCircle();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateMagicCircleLocation();

	UPROPERTY(Replicated, EditDefaultsOnly, BlueprintReadWrite)
	float AttackRange = 1200.f;
	UPROPERTY(Replicated, BlueprintReadWrite)
	bool bActivateShift = false;
protected:
	
	virtual void SetCharacterSetting() PURE_VIRTUAL(AMyCharacter::SetCharacterSetting, );
	virtual void InitAbilityActorInfo() override;
	void InitializeHealthBarWidget();
	UFUNCTION(NetMulticast, Reliable)
	void MulticastLevelUpParticles() const;
	UFUNCTION()
	void Stunned(const FGameplayTag CallbackTag, int32 NewCount);
	UFUNCTION()
	void GetLevelUpReward();
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void MulticastMoveAbility(int32 Velocity, float Duration);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UParticleSystemComponent> LevelUpParticleComponent;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "LevelUp")
	TSubclassOf<UGameplayEffect> LevelUpReward;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<UAnimMontage> RecallAnim;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="HealthBar")
	TObjectPtr<UWidgetComponent> HealthBarWidget;
	
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UItemComponent> ItemComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<UActionComponent> ActionComponent;
	
	UPROPERTY(EditAnywhere, Category = HUD)
	TSubclassOf<UUserWidget> EndGameWidgetClass;
	
	UPROPERTY(EditDefaultsOnly, Category="Kwang")
	TSubclassOf<AAttackRangeDecal> MagicCircleClass;
	
	UPROPERTY(BlueprintReadWrite ,EditDefaultsOnly)
	TObjectPtr<AAttackRangeDecal> MagicCircle;
	
	UPROPERTY()
	TArray<TObjectPtr<AMyCharacter>> SpectatedCharacters;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UDebuffParticleComponent> RedBuffComponent;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UDebuffParticleComponent> BlueBuffComponent;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UDebuffParticleComponent> PrimeBuffComponent;

	bool bAbilityIsGiven = false;
	int32 SpectateIdx = 0;
private:
	
	
	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputMappingContext> PlayerContext;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> JumpAction;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> LSB_Action;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> Q_Action;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> RMB_Ability;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> R_Ability;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> Flash_Ability;

	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> Shift_Ability;
	
	UPROPERTY(EditAnywhere, Category = "Input")
		TObjectPtr<UInputAction> B_Recall;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> Item1_Ability;
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> Item2_Ability;
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> Item3_Ability;
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> Item4_Ability;
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> Item5_Ability;
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> Item6_Ability;
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> Spectate;
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MouseCursorOp;
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> ShowAdditionalAttribute;
	
	void SetMouseCursor(const FInputActionValue& InputActionValue);
	void Move(const FInputActionValue& InputActionValue);
	void Look(const FInputActionValue& InputActionValue);
	void ShowAdditionalAttributeMenu(const FInputActionValue& InputActionValue);
	virtual void Jump() override;
	void AimTrace();
	
	UPROPERTY()
		TScriptInterface<IEnemyInterface> LastActor;
	UPROPERTY()
		TScriptInterface<IEnemyInterface> ThisActor;
	
	FTimerHandle InitPlayerHealthBarHandle;
	FTimerHandle InitReSpawnHandle;
	FTimerHandle DeadTimerHandle;
	FTimerHandle InitPlayerInfoHandle;
	FTimerHandle PlayerLeftTimerHandle;
	FTimerHandle PlayerDieRecallHandle;
	FTimerHandle MoveTimer;
	FTimerHandle CancelTimer;

	float PlayerLeftTime = 3.f;
	float RecallTime = 3.f;
};
