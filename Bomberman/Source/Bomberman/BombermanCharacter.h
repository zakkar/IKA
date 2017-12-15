// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BombermanCharacter.generated.h"

UCLASS(config=Game)
class ABombermanCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABombermanCharacter();

	//Number of maximum Bomb that the player can spawn from the start
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxBombCanBeSpawned = 1;

	//Number of maximum Bomb that the player can carry(including upgrades)
	UPROPERTY(BlueprintReadWrite)
	int MaxBombInventory = 4;
	

	UFUNCTION()
	void FillInventory();

	void IncreaseMaxBombCanBeSpawned(const int NewValue);

	virtual void BeginPlay() override;

	void IncreasePlayerSpeed(const float speedMultiplier);

	void IncreaseBombBlast(const int newBlastLength);

	UFUNCTION(BlueprintCallable)
	void Init();

	//Used to offset spawwning bomb to avoid physics problem
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OffsetBombSpawn = 50.f;

protected:

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	virtual void SpawnBomb();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	void ChangeCharacterColor(const FLinearColor& NewColor);

	class ABombermanBombsManager* BombFactory;

	class UBombermanMovementComponent* MovementComponent;

	TArray<class ABombermanBaseBomb*> BombInventory;

	class APlayerController* PlayerController;

	float CurrentSpeedMultiplier =1.f;

	int CountBombCanSpawn;
};

