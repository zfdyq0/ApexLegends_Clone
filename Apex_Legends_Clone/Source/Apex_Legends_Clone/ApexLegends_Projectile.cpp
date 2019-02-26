// Fill out your copyright notice in the Description page of Project Settings.

#include "ApexLegends_Projectile.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Engine/Classes/GameFramework/ProjectileMovementComponent.h"

// Sets default values
AApexLegends_Projectile::AApexLegends_Projectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Use sphere as simple collision
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	// Set sphere's collision radius
	CollisionComponent->InitSphereRadius(15.0f);
	// Set collision component to root component
	RootComponent = CollisionComponent;

	// Control this projectile's physics by using ProjectileMovementComponent
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.3f;
}

// Called when the game starts or when spawned
void AApexLegends_Projectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AApexLegends_Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Initialize projectile's speed to launch direction
void AApexLegends_Projectile::FireInDirection(const FVector& ShootDirection) {
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

