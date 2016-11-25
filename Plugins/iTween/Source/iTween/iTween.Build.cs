//Copyright Bob Berkebile and Jared Therriault

using UnrealBuildTool;

public class iTween : ModuleRules
{
    public iTween(TargetInfo target)
    {
        PrivateIncludePaths.AddRange(new string[] { "iTween/Private" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Engine", "InputCore", "Core", "Slate", "SlateCore", "CoreUObject", "UMG" });
    }
}