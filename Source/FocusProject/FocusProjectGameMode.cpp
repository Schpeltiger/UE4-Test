// Copyright Epic Games, Inc. All Rights Reserved.

#include "FocusProjectGameMode.h"
#include "FocusProjectHUD.h"
#include "FocusProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFocusProjectGameMode::AFocusProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFocusProjectHUD::StaticClass();
}
