// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanBaseWall.h"
#include "Components/BoxComponent.h"
#include "Engine.h"
#include "BombermanBasePickupItem.h"

PRAGMA_DISABLE_OPTIMIZATION

// Sets default values
ABombermanBaseWall::ABombermanBaseWall()
{
	CollisionMesh = CreateDefaultSubobject<UBoxComponent>(TEXT("WallCollision"));
	CollisionMesh->bDynamicObstacle = true;
	RootComponent = CollisionMesh;

	BoxExtent = FVector(50.f,50.f,50.f);

	WallVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallVisual"));
	WallVisual->SetupAttachment(RootComponent);

	if (WallMesh != nullptr)
	{
		WallVisual->SetStaticMesh(WallMesh); // Update the component to the new mesh 
		WallVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
	}
}

// Called when the game starts or when spawned
void ABombermanBaseWall::BeginPlay()
{
	Super::BeginPlay();
	CollisionMesh->SetBoxExtent(BoxExtent);
}

// Called every frame
void ABombermanBaseWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABombermanBaseWall::OnDestroyWall_Implementation()
{
	if (GetWorld() == nullptr)
		return;

	const int Percentage = 33;
	const int RandomRange = FMath::RandRange(1, 100); //(1,100) to 1/3
	if (RandomRange <= Percentage)
	{
		const int indexObjectToSpawn = FMath::RandRange(0, ItemToSpawn.Num());
		if (ItemToSpawn.IsValidIndex(indexObjectToSpawn))
		{
			const FVector& Location = GetActorLocation();
			const FRotator& Rotation = GetActorRotation();
			FActorSpawnParameters SpawnInfo;
			GetWorld()->SpawnActor<ABombermanBasePickupItem>(ItemToSpawn[indexObjectToSpawn].Get(), Location, Rotation, SpawnInfo);
		}
	}

	Destroy();
}

#if WITH_EDITOR  
void ABombermanBaseWall::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const UProperty* PropertyThatChanged = PropertyChangedEvent.MemberProperty;
	if (PropertyThatChanged && PropertyThatChanged->GetFName() == GET_MEMBER_NAME_CHECKED(ABombermanBaseWall, BoxExtent))
	{
		CollisionMesh->SetBoxExtent(BoxExtent); // Update the new extent of the box
	}

	if (WallMesh != nullptr)
	{
		if (PropertyThatChanged && PropertyThatChanged->GetFName() == GET_MEMBER_NAME_CHECKED(ABombermanBaseWall, WallMesh))
		{
			WallVisual->SetStaticMesh(WallMesh); // Update the component to the new mesh 
		}
	}
}
#endif

