// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BombermanBaseBomb.generated.h"

UCLASS()
class BOMBERMAN_API ABombermanBaseBomb : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABombermanBaseBomb();

	//Timer for the bomb before it explode
	UPROPERTY(EditAnywhere)
		float BombTimer = 5.f;

	//Initial Length of the blast when the bomb explode
	UPROPERTY(EditAnywhere)
		int BlastLengthMultiplier = 200;

	//Length of the blast when the bomb explode
	UPROPERTY(EditAnywhere)
		float BlastDuration = 4.f;

	UPROPERTY(EditAnywhere)
		class UParticleSystem* ExplosionEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USphereComponent* SphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* BombVisual;

	void SetBombManager(class ABombermanBombsManager* InBombManager) { BombsManager = InBombManager; }
	
	void SetIsBeingUsed(bool UseValue) { bIsBeingUsed = UseValue; }
	bool IsBeingUsed() const { return bIsBeingUsed; }

	void SetFiringLocation(const FVector& Location) { FiringLocation = Location; }

	bool IsReadyToSpawn() const { return !bStartCountdown && !bBlastStart; }

	void IncreaseBlastLength(const int BlastModifier);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void StartCountdown();

	void StopCountdown();

	void BlastingRaycast();

	bool bStartCountdown;

	float CachedBombTimer;

	class ABombermanBombsManager* BombsManager;

	class UParticleSystemComponent* ExplosionParticleComponent;

	bool bIsBeingUsed = false;

	FVector FiringLocation;

	bool bBlastStart = false;

	float CachedBlastDuration;

	TArray<FVector> HitDirections;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void OnUse();

	virtual void OnExplodeStart();
	virtual void OnExplodeEnd();
	
};
