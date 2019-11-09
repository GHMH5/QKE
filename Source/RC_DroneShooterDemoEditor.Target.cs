// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class RC_DroneShooterDemoEditorTarget : TargetRules
{
	public RC_DroneShooterDemoEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("RC_DroneShooterDemo");
	}
}
