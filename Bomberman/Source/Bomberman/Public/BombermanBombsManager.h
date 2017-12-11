// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BombermanBombsManager.generated.h"

UCLASS()
class BOMBERMAN_API ABombermanBombsManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABombermanBombsManager();
	~ABombermanBombsManager();

	UPROPERTY(EditAnywhere)
	int FactorySpawnBombLimit = 10;

	// Called when the game starts or when spawned
	void Init(UWorld* World);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class ABombermanBaseBomb* GetBomb();

	//Singleton function
	static ABombermanBombsManager* CreateInstance();
	static ABombermanBombsManager* GetInstance() { return Instance; }

private:
	static ABombermanBombsManager* Instance;
	TArray<class ABombermanBaseBomb*> BombFactory;

};
