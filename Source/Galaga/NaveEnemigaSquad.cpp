// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaSquad.h"
#include "NaveEnemiga.h"

// Sets default values
ANaveEnemigaSquad::ANaveEnemigaSquad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveEnemigaSquad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaSquad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemigaSquad::AgregarNaveEnemiga(ANaveEnemiga* NaveEnemiga, FVector Separacion)
{
	NavesEnemigas.Add(NaveEnemiga);
	int32 NumNaves = NavesEnemigas.Num();
	FVector Posicion = GetActorLocation() + Separacion * NumNaves;
	NaveEnemiga->SetActorLocation(FVector(Posicion.X, Posicion.Y, 200));
}
