// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Facade.h"
#include "GalagaGameMode.generated.h"

UCLASS(MinimalAPI)
class AGalagaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalagaGameMode();

public:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	//class AConstruirNaveNodriza* Construccion;
	AFacade* FFacade;
};



