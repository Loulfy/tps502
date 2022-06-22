// Copyright Epic Games, Inc. All Rights Reserved.

#include "tps502GameMode.h"
#include "tps502Character.h"
#include "UObject/ConstructorHelpers.h"

Atps502GameMode::Atps502GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
