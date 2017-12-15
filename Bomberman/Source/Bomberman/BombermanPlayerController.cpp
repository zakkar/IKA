// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BombermanPlayerController.h"


PRAGMA_DISABLE_OPTIMIZATION

//////////////////////////////////////////////////////////////////////////
// ABombermanPlayerController

ABombermanPlayerController::ABombermanPlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bAutoManageActiveCameraTarget = false;
}

