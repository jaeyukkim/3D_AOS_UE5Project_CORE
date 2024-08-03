// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;


public class SeniorProjectTarget : TargetRules
{
    public SeniorProjectTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V4;

        ExtraModuleNames.AddRange(new string[] { "SeniorProject" });
     

    }
}