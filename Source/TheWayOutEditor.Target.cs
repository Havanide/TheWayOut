// The Way Out game. All Right Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class TheWayOutEditorTarget : TargetRules
{
	public TheWayOutEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "TheWayOut" } );
	}
}
