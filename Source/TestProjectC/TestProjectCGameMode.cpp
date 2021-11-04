// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestProjectCGameMode.h"
#include "TestProjectCCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestProjectCGameMode::ATestProjectCGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
