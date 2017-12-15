// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanBaseWall.h"
#include "Components/BoxComponent.h"
#include "Engine.h"
#include "BombermanBasePickupItem.h"


// Sets default values
ABombermanBaseWall::ABombermanBaseWall()
{
	CollisionMesh = CreateDefaultSubobject<UBoxComponent>(TEXT("WallCollision"));
	CollisionMesh->bDynamicObstacle = true;
	CollisionMesh->SetupAttachment(GetRootComponent());

	BoxExtent = FVector(50.f,50.f,50.f);

	WallVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallVisual"));
	WallVisual->SetupAttachment(RootComponent);
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

	const int percentage = 33;
	if (FMath::RandRange(1, 100) <= 33)
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

