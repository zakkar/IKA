// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanGameInstance.h"
#include "BombermanBombsManager.h"
#include "BombermanCharacter.h"
#include "EngineUtils.h"
#include "EngineGlobals.h"

void UBombermanGameInstance::Init()
{
	Super::Init();

	BombsManager = ABombermanBombsManager::CreateInstance();
}

void UBombermanGameInstance::OnStart()
{
	Super::OnStart();

	BombsManager->Init(GetWorld());
}

void UBombermanGameInstance::OnPlayerDestroy(const ABombermanCharacter* PlayerCharacter)
{
	for (TActorIterator<ABombermanCharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ABombermanCharacter *Character = *ActorItr;
		if (Character != PlayerCharacter)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("The player %s won"), *Character->GetName()));
		}	
	}
}