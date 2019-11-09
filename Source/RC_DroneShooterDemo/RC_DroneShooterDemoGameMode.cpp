// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RC_DroneShooterDemoGameMode.h"
#include "UObject/ConstructorHelpers.h"

ARC_DroneShooterDemoGameMode::ARC_DroneShooterDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/RC_DroneShooterDemoCPP/DroneSystem/Blueprints/BP_ThirdPerson"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	static ConstructorHelpers::FClassFinder<AController> PlayerControllerBPClass(TEXT("/Game/RC_DroneShooterDemoCPP/DroneSystem/Blueprints/RC_DroneShooterDemoController"));
	if (PlayerControllerBPClass.Class != NULL)
	{

		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}
