// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Apex_Legends_CloneGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class APEX_LEGENDS_CLONE_API AApex_Legends_CloneGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	virtual void StartPlay() override;
};
