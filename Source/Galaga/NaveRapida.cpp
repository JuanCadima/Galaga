// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveRapida.h"

ANaveRapida::ANaveRapida()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	MeshNaveEnemiga->SetStaticMesh(NaveMesh.Object);
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
