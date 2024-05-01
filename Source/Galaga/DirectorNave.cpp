// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorNave.h"


// Sets default values
ADirectorNave::ADirectorNave()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorNave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorNave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorNave::Construirlo(IConstructoraNaveEnemiga* constructor)
{
	if (constructor)
	{
		constructor->SetMovimiento();
		constructor->Construir();
	}
}