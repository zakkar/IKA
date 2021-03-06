// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanBaseBomb.h"
#include "Engine.h"
#include "BombermanBombsManager.h"
#include "BombermanCharacter.h"
#include "BombermanBaseWall.h"
#include "BombermanBasePickupItem.h"

PRAGMA_DISABLE_OPTIMIZATION

// Sets default values
ABombermanBaseBomb::ABombermanBaseBomb()
{
	// Our root component will be a sphere that reacts to physics
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = SphereComponent;
	SphereComponent->InitSphereRadius(30.0f);

	// Create and position a mesh component so we can see where our sphere is
	BombVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BombVisual"));
	BombVisual->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (SphereVisualAsset.Succeeded())
	{
		BombVisual->SetStaticMesh(SphereVisualAsset.Object);
		BombVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
		BombVisual->SetWorldScale3D(FVector(0.6f));
	}

	ExplosionParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExplosionParticleComponent"));

	if (ExplosionEffect) 
	{
		ExplosionParticleComponent->Template = ExplosionEffect;
	}

	ExplosionParticleComponent->bAutoActivate = false;
	ExplosionParticleComponent->SetHiddenInGame(false);

	CachedBombTimer = BombTimer;
	CachedBlastDuration = BlastDuration;

	FiringLocation = FVector::ZeroVector;

	Tags.Add(FName("Bomb"));

	//Remove tick from the actor
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;

	BombVisual->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	HitDirections.Reserve(4);

}

// Called when the game starts or when spawned
void ABombermanBaseBomb::BeginPlay()
{
	Super::BeginPlay();
	
	//Setting up direction for raycast when the bomb explode
	HitDirections.Insert(FVector(1.f,	0.f, 0.f), 0);
	HitDirections.Insert(FVector(-1.f,	0.f, 0.f), 1);
	HitDirections.Insert(FVector(0.f,	1.f, 0.f), 2);
	HitDirections.Insert(FVector(0.0f, -1.f, 0.f), 3);

}
  
// Called every frame
void ABombermanBaseBomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

 	if (bStartCountdown)
 	{
 		CachedBombTimer -= DeltaTime;
 		if (CachedBombTimer < 0.f)
 		{
 			OnExplodeStart();
 		}
 	}
 
 	if (bBlastStart)
 	{
 		CachedBlastDuration-= DeltaTime;
 		BlastingRaycast();
 		if (CachedBlastDuration < 0.f)
 		{
 			OnExplodeEnd();
 		}
 	}
}

void ABombermanBaseBomb::OnUse()
{
	SetActorLocation(FVector(FiringLocation.X,FiringLocation.Y,120.f));
	StartCountdown();
	SetActorHiddenInGame(false);
	SetActorTickEnabled(true);
	BombVisual->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void ABombermanBaseBomb::StartCountdown()
{
	CachedBombTimer = BombTimer;
	bStartCountdown = true;
}

void ABombermanBaseBomb::StopCountdown()
{
	CachedBombTimer = BombTimer;
	bStartCountdown = false;
}

void ABombermanBaseBomb::OnExplodeStart()
{
	StopCountdown();
	ExplosionParticleComponent->Activate();
	bBlastStart = true;

}

void ABombermanBaseBomb::OnExplodeEnd()
{
	bBlastStart = false;
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);
	BombVisual->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CachedBlastDuration = BlastDuration;
}

void ABombermanBaseBomb::BlastingRaycast()
{
	TArray<FHitResult> ObstacleHitResults;
	ObstacleHitResults.Init(FHitResult(ForceInit), 3);
	FCollisionQueryParams ObstacleCollisionQueryParams = FCollisionQueryParams(FName(TEXT("Trace")), true, this);
	ObstacleCollisionQueryParams.bTraceComplex = false;
	ObstacleCollisionQueryParams.bReturnFaceIndex = false;
	ObstacleCollisionQueryParams.bReturnPhysicalMaterial = false;

	const FVector& Start = GetActorLocation();
	FVector End = FVector::ZeroVector;

	//ECC_GameTraceChannel11 is defined in the engine .ini file as bombchannel
	for (int index = 0 ; index < HitDirections.Num(); ++index)
	{
		End = Start + (HitDirections[index] * BlastLengthMultiplier);
	
		DrawDebugLine(GetWorld(), Start, End, FColor::Red);
		if (BombVisual->GetWorld()->LineTraceMultiByChannel(ObstacleHitResults, Start, End, ECollisionChannel::ECC_GameTraceChannel11, ObstacleCollisionQueryParams))
		{
			for (FHitResult& hit : ObstacleHitResults)
			{
				if (hit.Actor != nullptr)
				{
					if (hit.Actor->ActorHasTag("DestructibleWall"))
					{
						if (ABombermanBaseWall* wall = Cast<ABombermanBaseWall>(hit.GetActor()))
						{
							wall->OnDestroyWall();
						}			
					}
					else if (hit.Actor->ActorHasTag("Character"))
					{
						if (ABombermanCharacter* character = Cast<ABombermanCharacter>(hit.GetActor()))
						{
							character->OnDestroy();
						}		
					}
					else if (hit.Actor->ActorHasTag("DestructibleItem"))
					{
						if (ABombermanBasePickupItem* item = Cast<ABombermanBasePickupItem>(hit.GetActor()))
						{
							if (item->CanBeDestroyed())
							{
								item->Destroy();
							}		
						}					
					}
					else if (hit.Actor->ActorHasTag("Bomb"))
					{
						if (ABombermanBaseBomb* bomb = Cast<ABombermanBaseBomb>(hit.GetActor()))
						{
							bomb->OnExplodeStart();
						}		
					}
				}
			}
		}
	}
}

void ABombermanBaseBomb::IncreaseBlastLength(int newBlastLengthMultiplier)
{
	BlastLengthMultiplier += newBlastLengthMultiplier;
}

