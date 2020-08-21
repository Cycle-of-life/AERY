// Copyright Epic Games, Inc. All Rights Reserved.

#include "AeryGameMode.h"
#include "AeryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAeryGameMode::AAeryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
