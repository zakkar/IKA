// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BombermanBaseWall.generated.h"

UENUM(BlueprintType)
enum class EWallType : uint8
{
	WallType_Normal			UMETA(DisplayName = "Normal"),
	WallType_Destructible	UMETA(DisplayName = "Destructible")
};

UCLASS(BlueprintType)
class BOMBERMAN_API ABombermanBaseWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABombermanBaseWall();

	UPROPERTY()
		class UStaticMesh* WallMesh;

	UPROPERTY()
		EWallType WallType;

	UPROPERTY()
		class UBoxComponent* CollisionMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
