// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CorruptScoutGameMode.h"
#include "CorruptScoutHUD.h"
#include "CorruptScoutCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACorruptScoutGameMode::ACorruptScoutGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACorruptScoutHUD::StaticClass();
}
