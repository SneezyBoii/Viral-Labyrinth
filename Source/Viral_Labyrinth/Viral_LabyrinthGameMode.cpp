// Copyright Epic Games, Inc. All Rights Reserved.

#include "Viral_LabyrinthGameMode.h"
#include "Viral_LabyrinthPlayerController.h"
#include "Viral_LabyrinthCharacter.h"
#include "UObject/ConstructorHelpers.h"

AViral_LabyrinthGameMode::AViral_LabyrinthGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AViral_LabyrinthPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}