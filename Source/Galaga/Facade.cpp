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

	Asteroides = GetWorld()->SpawnActor<AAsteroides>(AAsteroides::StaticClass(), FVector(150.0f, 0.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
	Peligro.Add(Asteroides);
	Mina = GetWorld()->SpawnActor<AMina>(AMina::StaticClass(), FVector(500.0f, -300.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
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
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Minas Lanzadas"));
	Comunicado(Peligro, Lancen, Llamada);

}

void AFacade::ComunicadoAsteroides()
{
	Llamada.Empty();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Asteroides en camino"));
	Comunicado(Peligro, Lancen, Llamada);
}