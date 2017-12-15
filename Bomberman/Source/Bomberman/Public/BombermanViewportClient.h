// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "BombermanViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_API UBombermanViewportClient : public UGameViewportClient
{
	GENERATED_BODY()
	
	virtual bool InputKey(FViewport* Viewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed = 1.f, bool bGamepad = false) override;
	
};
