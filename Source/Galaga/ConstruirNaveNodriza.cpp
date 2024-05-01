// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstruirNaveNodriza.h"
#include "NaveNodriza.h"

// Sets default values
AConstruirNaveNodriza::AConstruirNaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AConstruirNaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConstruirNaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConstruirNaveNodriza::SetMovimiento()
{

}

void AConstruirNaveNodriza::SetVelocidad(float maxVelocidad)
{
	Velocidad = maxVelocidad;
}

void AConstruirNaveNodriza::SetVida(int TotalVida)
{
	Vida = TotalVida;
}

ANaveNodriza* AConstruirNaveNodriza::Construir()
{
	ANaveNodriza* NaveNodriza = GetWorld()->SpawnActor<ANaveNodriza>();
	if(NaveNodriza)
	{
		NaveNodriza->SetMovimiento();
		NaveNodriza->SetVelocidad(0);
		NaveNodriza->SetVida(0);
		
	}
	return NaveNodriza;
}
