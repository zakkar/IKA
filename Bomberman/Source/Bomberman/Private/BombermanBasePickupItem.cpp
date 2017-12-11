// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanBasePickupItem.h"


// Sets default values
ABombermanBasePickupItem::ABombermanBasePickupItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABombermanBasePickupItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABombermanBasePickupItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

