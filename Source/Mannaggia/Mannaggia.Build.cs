// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Mannaggia : ModuleRules
{
	public Mannaggia(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Mannaggia",
			"Mannaggia/Variant_Platforming",
			"Mannaggia/Variant_Platforming/Animation",
			"Mannaggia/Variant_Combat",
			"Mannaggia/Variant_Combat/AI",
			"Mannaggia/Variant_Combat/Animation",
			"Mannaggia/Variant_Combat/Gameplay",
			"Mannaggia/Variant_Combat/Interfaces",
			"Mannaggia/Variant_Combat/UI",
			"Mannaggia/Variant_SideScrolling",
			"Mannaggia/Variant_SideScrolling/AI",
			"Mannaggia/Variant_SideScrolling/Gameplay",
			"Mannaggia/Variant_SideScrolling/Interfaces",
			"Mannaggia/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
