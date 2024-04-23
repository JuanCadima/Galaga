// Copyright Epic Games, Inc. All Rights Reserved.

#include "GalagaGameMode.h"
#include "GalagaPawn.h"
#include "NavesdeVelocidades.h"

AGalagaGameMode::AGalagaGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalagaPawn::StaticClass();
}

void AGalagaGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	FVector Spawn = FVector(250.0f, 0.0f, 250.0f);
	ANaveEnemiga* NaveEnemiga = GetWorld()->SpawnActor<ANaveEnemiga>(ANaveEnemiga::StaticClass(), Spawn, FRotator(0, 0, 0));

	ACreacionNavesEnemigas* CreadorNV = GetWorld()->SpawnActor<ANavesdeVelocidades>(ANavesdeVelocidades::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));

	ANaveEnemiga* NaveRapida = CreadorNV->CreaNavesEnemigas("NaveRapida");
	if (NaveRapida)
	{
		ANavesdeVelocidades* NaveRapidaCreada = Cast<ANavesdeVelocidades>(NaveRapida);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Nave Rapida creada"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Nave Rapida no creada"));
	}
}

void AGalagaGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

