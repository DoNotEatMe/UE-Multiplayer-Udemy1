// Copyright Epic Games, Inc. All Rights Reserved.

#include "UdemyMultiplayer1GameMode.h"
#include "UdemyMultiplayer1Character.h"
#include "UObject/ConstructorHelpers.h"

AUdemyMultiplayer1GameMode::AUdemyMultiplayer1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
