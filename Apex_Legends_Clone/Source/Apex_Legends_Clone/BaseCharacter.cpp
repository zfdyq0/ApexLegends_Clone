// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"
#include "Apex_Legends_Clone.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ApexLegends_Projectile.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create first-person camera component
	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	// Attach camera component to capsule component
	FPSCameraComponent->SetupAttachment((USceneComponent*)GetCapsuleComponent());
	// Position the camera to above to eye height
	FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));
	// Allow to control the pawn's camera rotation
	FPSCameraComponent->bUsePawnControlRotation = true;
	// FPS mesh component
	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	// Only owner can see this mesh
	FPSMesh->SetOnlyOwnerSee(true);
	// Attach FPSMesh to FPSCamera
	FPSMesh->SetupAttachment(FPSCameraComponent);
	// Turn off some environment shadowing, keep mesh looks one
	FPSMesh->bCastDynamicShadow = false;
	FPSMesh->CastShadow = false;
	// Everyone can see this mesh but owner
	GetMesh()->SetOwnerNoSee(true);
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Base character script"));
	}
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Setup "Movement" binding
	PlayerInputComponent->BindAxis("MoveForward", this, &ABaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABaseCharacter::MoveRight);

	// Setup "Look" binding
	PlayerInputComponent->BindAxis("Turn", this, &ABaseCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ABaseCharacter::AddControllerPitchInput);

	// Setup "Action" binding
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ABaseCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ABaseCharacter::StopJump);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ABaseCharacter::Fire);
}

void ABaseCharacter::MoveForward(float value) {
	// Find out where the front is, mark player supposed to move that direction.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, value);
}

void ABaseCharacter::MoveRight(float value) {
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, value);
}

void ABaseCharacter::StartJump() {
	bPressedJump = true;
}

void ABaseCharacter::StopJump() {
	bPressedJump = false;
}

void ABaseCharacter::Fire() {
	// Try projectile launch
	if (ProjectileClass) {
		// Get camera transform
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		// Convert Muzzle's offset from camera space to world space
		FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);
		FRotator MuzzleRotation = CameraRotation;

		// Raise aim to a little bit higher
		MuzzleRotation.Pitch += 10.0f;
		UWorld* World = GetWorld();

		if (World) {
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;

			// Spawn projectile in muzzle position
			AApexLegends_Projectile* Projectile = World->SpawnActor<AApexLegends_Projectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
			
			if (Projectile) {
				// Find out launch direction
				FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->FireInDirection(LaunchDirection);
			}
		}
	}
}