// Copyright Epic Games, Inc. All Rights Reserved.

#include "WorkWorkWorkWorkGameMode.h"
#include "WorkWorkWorkWorkHUD.h"
#include "WorkWorkWorkWorkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWorkWorkWorkWorkGameMode::AWorkWorkWorkWorkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWorkWorkWorkWorkHUD::StaticClass();
}
