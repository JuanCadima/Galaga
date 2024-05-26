// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveRapida.h"

ANaveRapida::ANaveRapida()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh(TEXT("StaticMesh'/Game/Assets/Naves/Fighter_01.Fighter_01'"));
	MeshNaveEnemiga->SetStaticMesh(NaveMesh.Object);
	MeshNaveEnemiga->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
	VelocidadMaxima = 100;
}

void ANaveRapida::BeginPlay()
{
	Super::BeginPlay();

	NombreNaveEnemiga = "Nave Rapida";
	//VidaNaveEnemiga = 100;

}

void ANaveRapida::CrearNaveEnemiga(FString NombreNave)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Creando la nave rapida"));

}
