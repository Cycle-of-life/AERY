// Copyright Epic Games, Inc. All Rights Reserved.

#include "AeryProtoGameMode.h"
#include "AeryProtoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAeryProtoGameMode::AAeryProtoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
