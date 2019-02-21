// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Apex_Legends_CloneEditorTarget : TargetRules
{
	public Apex_Legends_CloneEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Apex_Legends_Clone" } );
	}
}
