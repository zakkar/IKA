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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMesh* WallMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		EWallType WallType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UBoxComponent* CollisionMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector BoxExtent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSubclassOf<class ABombermanBasePickupItem>> ItemToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* WallVisual;

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);

	UFUNCTION(BlueprintNativeEvent)
		void OnDestroyWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
