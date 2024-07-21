

using UnrealBuildTool;
using UnrealBuildTool.Rules;

public class SeniorProject : ModuleRules
{
    public SeniorProject(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG", "NavigationSystem",
        "AIModule","GameplayTasks", "GameplayTags", "Niagara", "EnhancedInput", "GameplayAbilities"});


        PrivateDependencyModuleNames.AddRange(new string[] {"MyAssetSetting", "GameplayTasks", "GameplayTags"});


        PrivateDependencyModuleNames.AddRange(new string[] { });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}