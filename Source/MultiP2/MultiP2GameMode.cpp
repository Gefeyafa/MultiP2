// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiP2GameMode.h"
#include "MultiP2Character.h"
#include "UObject/ConstructorHelpers.h"

AMultiP2GameMode::AMultiP2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
