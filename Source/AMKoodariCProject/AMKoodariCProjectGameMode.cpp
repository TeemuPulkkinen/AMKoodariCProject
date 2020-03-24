// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AMKoodariCProjectGameMode.h"
#include "AMKoodariCProjectHUD.h"
#include "AMKoodariCProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAMKoodariCProjectGameMode::AAMKoodariCProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAMKoodariCProjectHUD::StaticClass();
}
