// The Way Out game. All Right Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class TheWayOutTarget : TargetRules
{
	public TheWayOutTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "TheWayOut" } );
	}
}
