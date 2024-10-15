// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerSessions.h"

#define LOCTEXT_NAMESPACE "FMultiplayerSessionsModule"

void FMultiplayerSessionsModule::StartupModule()
{
	// 모듈이 메모리에 업로드 될 때
}

void FMultiplayerSessionsModule::ShutdownModule()
{
	// 셧다운 시에 모듈 클리어
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMultiplayerSessionsModule, MultiplayerSessions)