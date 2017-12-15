// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BombermanBasePickupItem.generated.h"

UENUM(BlueprintType)
enum class EPickupType : uint8
{
	PickupType_LongerBlast 	UMETA(DisplayName = "Longer Blast"),
	PickupType_MoreBomb 	UMETA(DisplayName = "More bomb"),
	PickupType_FasterRun	UMETA(DisplayName = "Faster run"),
	PickupType_RemoteBomb	UMETA(DisplayName = "Remote Bomb")
};

UCLASS(BlueprintType)
class BOMBERMAN_API ABombermanBasePickupItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABombermanBasePickupItem();

	UPROPERTY(BlueprintReadWrite)
	class UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
	EPickupType PickupType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector BoxExtent;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int BombNumberIncreaseValue;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int BombBlastLengthIncreaseValue;

	//Multiplier of the player speed when item pickup
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float SpeedMultiplier = 2.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION(BlueprintNativeEvent)
	void OnPickup(class ABombermanCharacter* PlayerCharacter);

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
