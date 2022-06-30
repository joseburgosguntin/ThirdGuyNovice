// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdGuyNoviceGameMode.h"
#include "ThirdGuyNoviceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdGuyNoviceGameMode::AThirdGuyNoviceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
