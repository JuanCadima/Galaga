// Copyright Epic Games, Inc. All Rights Reserved.

#include "GalagaGameMode.h"
#include "GalagaPawn.h"
#include "NavesdeVelocidades.h"
#include "NaveEnemigaSquad.h"
#include "ConstruirNaveNodriza.h"
#include "DirectorNave.h"
#include "NaveNodriza.h"


AGalagaGameMode::AGalagaGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalagaPawn::StaticClass();
}

void AGalagaGameMode::BeginPlay()
{
	Super::BeginPlay();

	FFacade = GetWorld()->SpawnActor<AFacade>(AFacade::StaticClass());
	FFacade->BebeEnPeligro();
	//FFacade->ComunicadoAsteroides();
	//FFacade->ComunicadoMinas();
	FFacade->ComunicadoTeletransporte();



	AConstruirNaveNodriza* NaveNodriza = GetWorld()->SpawnActor<AConstruirNaveNodriza>(AConstruirNaveNodriza::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));
	ADirectorNave* C = GetWorld()->SpawnActor<ADirectorNave>(ADirectorNave::StaticClass());

	//C->Construirlo(NaveNodriza);




	ANaveEnemigaSquad* Escuadra = GetWorld()->SpawnActor<ANaveEnemigaSquad>(ANaveEnemigaSquad::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));
	
	FVector Separacion = FVector(0.0f, 150.0f, 0.0f);

	FVector SpawnEscuadra = FVector(250.0f, 0.0f, 200.0f);
	for (int i = 0; i < 2; i++)
	{
		ANaveEnemiga* NaveEnemiga = GetWorld()->SpawnActor<ANaveEnemiga>(ANaveEnemiga::StaticClass(), SpawnEscuadra, FRotator(0, 0, 0));

		Escuadra->AgregarNaveEnemiga(NaveEnemiga, Separacion);
	}
	
	FVector Spawn = FVector(250.0f, 0.0f, 200.0f);
	ANaveEnemiga* NaveEnemiga = GetWorld()->SpawnActor<ANaveEnemiga>(ANaveEnemiga::StaticClass(), Spawn, FRotator(0, 0, 0));

	ACreacionNavesEnemigas* CreadorNV = GetWorld()->SpawnActor<ANavesdeVelocidades>(ANavesdeVelocidades::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));

	ANaveEnemiga* NaveRapida = CreadorNV->CreaNavesEnemigas("NaveRapida");
	if (NaveRapida)
	{
		ANavesdeVelocidades* NaveRapidaCreada = Cast<ANavesdeVelocidades>(NaveRapida);
		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Nave Rapida creada"));
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

