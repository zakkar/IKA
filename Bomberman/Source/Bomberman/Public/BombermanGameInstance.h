// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BombermanGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_API UBombermanGameInstance : public UGameInstance
{
	GENERATED_BODY()

	virtual void Init() override;
	virtual void OnStart() override;

public:
	void OnPlayerDestroy(const class ABombermanCharacter* PlayerCharacter);

	class ABombermanBombsManager* GetBombsManager() const { return BombsManager; }

protected:
	class ABombermanBombsManager* BombsManager;

};
