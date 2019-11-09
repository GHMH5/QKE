// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class RC_DroneShooterDemoTarget : TargetRules
{
	public RC_DroneShooterDemoTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("RC_DroneShooterDemo");
	}
}
