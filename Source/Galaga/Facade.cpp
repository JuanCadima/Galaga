// Fill out your copyright notice in the Description page of Project Settings.


#include "Facade.h"
#include "Asteroides.h"
#include "Mina.h"

// Sets default values
AFacade::AFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacade::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacade::Inicializar()
{
	//Asteroides = GetWorld()->SpawnActor<AAsteroides>();
}

void AFacade::SpwanAsteroide()
{
	Asteroides = GetWorld()->SpawnActor<AAsteroides>();
}

void AFacade::SpwanMina()
{
	Mina = GetWorld()->SpawnActor<AMina>();
}

