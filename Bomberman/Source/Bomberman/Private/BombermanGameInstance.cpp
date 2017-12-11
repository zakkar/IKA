// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanGameInstance.h"
#include "BombermanBombsManager.h"

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