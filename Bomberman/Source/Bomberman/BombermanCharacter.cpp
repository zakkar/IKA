// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BombermanCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "BombermanBombsManager.h"
#include "BombermanBaseBomb.h"

PRAGMA_DISABLE_OPTIMIZATION

//////////////////////////////////////////////////////////////////////////
// ABombermanCharacter

ABombermanCharacter::ABombermanCharacter()
{
	//Code from third person template
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;
	//Code from third person end here

	Tags.Add(FName("Character"));

	//Number of spawned should never go under the max of the inventory
	check(MaxBombCanBeSpawned <= MaxBombInventory);
	BombInventory.Reserve(MaxBombInventory);
}

void ABombermanCharacter::BeginPlay()
{
	Super::BeginPlay();
	BombFactory = ABombermanBombsManager::GetInstance();

	FillInventory();
	
	PlayerController = Cast<APlayerController>(Controller);
}


void ABombermanCharacter::FillInventory()
{
	if (BombFactory != nullptr)
	{
		for (int index = 0; index < MaxBombCanBeSpawned; ++index)
		{
			BombInventory.Insert(BombFactory->GetBomb(), index);
		}
	}
}

void ABombermanCharacter::IncreaseMaxBombCanBeSpawned(const int NewValue)
{
	MaxBombCanBeSpawned = (MaxBombCanBeSpawned + NewValue) > MaxBombInventory ? MaxBombInventory : MaxBombCanBeSpawned + NewValue;
}
//////////////////////////////////////////////////////////////////////////
// Input

void ABombermanCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	if (PlayerController == nullptr)
	{
		PlayerController = Cast<APlayerController>(Controller);
	}
	
	check(PlayerController);
	int32 id = PlayerController->GetLocalPlayer()->GetControllerId();
	if (id == 0)
	{
		PlayerInputComponent->BindAxis("MoveForward_P1", this, &ABombermanCharacter::MoveForward);
		PlayerInputComponent->BindAxis("MoveRight_P1", this, &ABombermanCharacter::MoveRight);

		PlayerInputComponent->BindAction("SpawnBomb_P1", IE_Pressed, this, &ABombermanCharacter::SpawnBomb);
	}
	else if (id == 1)
	{
		PlayerInputComponent->BindAxis("MoveForward_P2", this, &ABombermanCharacter::MoveForward);
		PlayerInputComponent->BindAxis("MoveRight_P2", this, &ABombermanCharacter::MoveRight);

		PlayerInputComponent->BindAction("SpawnBomb_P2", IE_Pressed, this, &ABombermanCharacter::SpawnBomb);
	}

}

//Code from third person template
void ABombermanCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ABombermanCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
//Code from third person end here

void ABombermanCharacter::SpawnBomb()
{
	for (ABombermanBaseBomb* Bomb : BombInventory)
	{
		if (!Bomb->IsCountDownStarted())
		{
			const FVector& FiringPosition = GetActorLocation() + (-GetActorForwardVector() * OffsetBombSpawn);
			Bomb->SetFiringLocation(FiringPosition);
			Bomb->OnUse();
			return;
		}
	}
}