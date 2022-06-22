// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class tps502 : ModuleRules
{
	public tps502(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
