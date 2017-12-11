// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanBaseWall.h"
#include "Components/BoxComponent.h"

// Sets default values
ABombermanBaseWall::ABombermanBaseWall()
{
	CollisionMesh = CreateDefaultSubobject<UBoxComponent>(TEXT("WallCollision"));
	CollisionMesh->SetBoxExtent(FVector(200.f, 200.f, 96.f));
	CollisionMesh->bDynamicObstacle = true;
	CollisionMesh->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ABombermanBaseWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABombermanBaseWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

