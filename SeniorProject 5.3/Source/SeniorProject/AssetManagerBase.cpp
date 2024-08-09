// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetManagerBase.h"
#include "GameplayTagsBase.h"
#include "AbilitySystemGlobals.h"

UAssetManagerBase& UAssetManagerBase::Get()
{
	check(GEngine);

	UAssetManagerBase* AuraAssetManager = Cast<UAssetManagerBase>(GEngine->AssetManager);
	return *AuraAssetManager;
}

void UAssetManagerBase::StartInitialLoading()
{
	Super::StartInitialLoading();

	FGameplayTagsBase::InitializeNativeGameplayTags();
	UAbilitySystemGlobals::Get().InitGlobalData();
}