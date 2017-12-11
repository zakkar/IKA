// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanBombsManager.h"
#include "Engine.h"
#include "BombermanBaseBomb.h"

ABombermanBombsManager* ABombermanBombsManager::Instance = nullptr;

// Sets default values
ABombermanBombsManager::ABombermanBombsManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BombFactory.Reserve(FactorySpawnBombLimit);
}

ABombermanBombsManager::~ABombermanBombsManager()
{
	Instance = nullptr;
}

// Called when the game starts or when spawned
void ABombermanBombsManager::Init(UWorld* World)
{
	if (World == nullptr)
		return;

	const FVector Location(0.0f, 0.0f, 0.0f);
	const FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	for (int index = 0; index < FactorySpawnBombLimit; ++index)
	{
		ABombermanBaseBomb* spawnedBomb = World->SpawnActor<ABombermanBaseBomb>(Location, Rotation, SpawnInfo);
		spawnedBomb->SetActorHiddenInGame(true);
		spawnedBomb->SetBombManager(this);

		BombFactory.Insert(spawnedBomb, index);
	}

}

// Called every frame
void ABombermanBombsManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABombermanBombsManager* ABombermanBombsManager::CreateInstance()
{
	if (Instance == nullptr)
	{
		Instance = NewObject<ABombermanBombsManager>();
	}

	return Instance;
}


ABombermanBaseBomb* ABombermanBombsManager::GetBomb()
{
	
	for (int index = 0; index < FactorySpawnBombLimit; ++index)
	{
		if (BombFactory[index] != nullptr && !BombFactory[index]->IsBeingUsed())
		{
			BombFactory[index]->SetIsBeingUsed(true);
			return BombFactory[index];
		}
	}

	return nullptr;
}
