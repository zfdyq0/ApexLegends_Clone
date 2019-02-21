// Fill out your copyright notice in the Description page of Project Settings.

#include "Apex_Legends_CloneGameModeBase.h"
#include "Apex_Legends_Clone.h"

void AApex_Legends_CloneGameModeBase::StartPlay() {
	Super::StartPlay();

	UE_LOG(LogTemp, Warning, TEXT("START"));

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("ApexLegends Gamemode"));
	}
}