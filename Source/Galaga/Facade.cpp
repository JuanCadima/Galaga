// Fill out your copyright notice in the Description page of Project Settings.

#include "Facade.h"
#include "Asteroides.h"
#include "Mina.h"

// Sets default values
AFacade::AFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Peligro = TArray<class AAsteroides*>();
	Lancen = TArray<class AMina*>();
	Llamada = TArray<FString>();
}

// Called when the game starts or when spawned
void AFacade::BeginPlay()
{
	Super::BeginPlay();

	Asteroides = GetWorld()->SpawnActor<AAsteroides>(AAsteroides::StaticClass());
	Peligro.Add(Asteroides);
	Mina = GetWorld()->SpawnActor<AMina>(AMina::StaticClass());
	Lancen.Add(Mina);
	
}

// Called every frame
void AFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacade::Comunicado(TArray<class AAsteroides*> _Peligro, TArray<class AMina*> _Lancen, TArray<FString> _LLamada)
{
	for (AAsteroides* VienenAsteroides : _Peligro)
	{
		VienenAsteroides->MovimientoAsteroide();
	}
	for (AMina* Lanzamiento : _Lancen)
	{
		Lanzamiento->Detonar();
	}
}

void AFacade::ComunicadoMinas()
{
	Llamada.Empty();
	Comunicado(Peligro, Lancen, Llamada);

}

void AFacade::ComunicadoAsteroides()
{
	Llamada.Empty();
	Comunicado(Peligro, Lancen, Llamada);
}