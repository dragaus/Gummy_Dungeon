// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Gummy_DungeonGameMode.h"
#include "Gummy_DungeonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGummy_DungeonGameMode::AGummy_DungeonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
