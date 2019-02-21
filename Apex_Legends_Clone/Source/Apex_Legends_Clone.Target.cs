// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Apex_Legends_CloneTarget : TargetRules
{
	public Apex_Legends_CloneTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Apex_Legends_Clone" } );
	}
}
