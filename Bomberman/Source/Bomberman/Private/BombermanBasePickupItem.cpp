// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanBasePickupItem.h"
#include "Engine.h"
#include "BombermanCharacter.h"


// Sets default values
ABombermanBasePickupItem::ABombermanBasePickupItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RootComponent"));
	RootComponent = BoxComponent;

	BoxExtent = FVector(50.f, 50.f,50.f);

	BombNumberIncreaseValue = 1;
	BombBlastLengthIncreaseValue = 100;

	Tags.Add(FName("DestructibleItem"));
}

// Called when the game starts or when spawned
void ABombermanBasePickupItem::BeginPlay()
{
	Super::BeginPlay();

	check(BoxComponent);
	BoxComponent->SetBoxExtent(BoxExtent);
	
	//Register the enter and exit overlaps to fire
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ABombermanBasePickupItem::OnTriggerEnter);
}

#if WITH_EDITOR  
void ABombermanBasePickupItem::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{ 
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const UProperty* PropertyThatChanged = PropertyChangedEvent.MemberProperty;
	if (PropertyThatChanged && PropertyThatChanged->GetFName() == GET_MEMBER_NAME_CHECKED(ABombermanBasePickupItem, BoxExtent))
	{
		BoxComponent->SetBoxExtent(BoxExtent); // Update the new extent of the box
	}
}
#endif




// Called every frame
void ABombermanBasePickupItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//This is used to avoid destroying the item as soon as it is spawned
	TimerBeforeCanBeDestroyed -= DeltaTime;
	if (TimerBeforeCanBeDestroyed < 0.0f)
	{
		bCanBeDestroyed = true;
	}
}

void ABombermanBasePickupItem::OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ABombermanCharacter* character = Cast<ABombermanCharacter>(OtherActor))
	{
		OnPickup(character);
		Destroy();
	}
}


void ABombermanBasePickupItem::OnPickup_Implementation(ABombermanCharacter* PlayerCharacter)
{
	if (PlayerCharacter == nullptr)
		return;

	switch (PickupType)
	{
	case EPickupType::PickupType_FasterRun:
	{
		PlayerCharacter->IncreasePlayerSpeed(SpeedMultiplier);
		break;
	}
	case EPickupType::PickupType_MoreBomb:
	{
		PlayerCharacter->IncreaseMaxBombCanBeSpawned(BombNumberIncreaseValue);
		break;
	}
	case  EPickupType::PickupType_LongerBlast :
	{
		PlayerCharacter->IncreaseBombBlast(BombBlastLengthIncreaseValue);
		break;
	}

	default:
		break;
	}
}