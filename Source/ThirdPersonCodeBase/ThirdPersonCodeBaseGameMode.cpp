// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonCodeBaseGameMode.h"
#include "ThirdPersonCodeBaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonCodeBaseGameMode::AThirdPersonCodeBaseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
