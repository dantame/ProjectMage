// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ProjectMage.h"
#include "ProjectMageGameMode.h"
#include "ProjectMageHUD.h"
#include "ProjectMageCharacter.h"

AProjectMageGameMode::AProjectMageGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProjectMageHUD::StaticClass();
}
