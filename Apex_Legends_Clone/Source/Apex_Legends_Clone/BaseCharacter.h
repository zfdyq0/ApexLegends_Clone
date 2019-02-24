// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "BaseCharacter.generated.h"

UCLASS()
class APEX_LEGENDS_CLONE_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// Called to proceed forward and back movement
	UFUNCTION()
	void MoveForward(float value);

	// Called to proceed right and left movement
	UFUNCTION()
	void MoveRight(float value);

	// Set jump-flag
	UFUNCTION()
	void StartJump();

	// Proceed jump-end flag: remove jump flag
	UFUNCTION()
	void StopJump();

	// FPS camera
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* FPSCameraComponent;
};
