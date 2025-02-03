// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZeldaInventoryGameMode.h"
#include "ZeldaInventoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZeldaInventoryGameMode::AZeldaInventoryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
