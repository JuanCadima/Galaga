// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Components/StaticMeshComponent.h"
#include "GalagaProjectile.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	RootComponent = MeshNaveEnemiga;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	MeshNaveEnemiga->SetStaticMesh(NaveMesh.Object);
	VelocidadMaxima = 100;
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Moverse(DeltaTime);
}

void ANaveEnemiga::Disparar()
{
	FVector PosicionProyectil = Posicion;
	PosicionProyectil.Z -= 100.0f;
	GetWorld()->SpawnActor<AGalagaProjectile>(PosicionProyectil, FRotator::ZeroRotator);
}

void ANaveEnemiga::Moverse(float DeltaTime)
{
	FVector Spawn = FVector(250.0f, 0.0f, 250.0f);
	Spawn = GetActorLocation();
	float NuevaX = VelocidadMaxima * DeltaTime + Spawn.X;
	FVector NuevaPosicion = FVector(NuevaX, Spawn.Y, Spawn.Z);
	SetActorLocation(NuevaPosicion);

}

void ANaveEnemiga::CrearNaveEnemiga(FString NombreNave)
{
	NombreNaveEnemiga = NombreNave;
	VelocidadMaxima = 100;
	VidaNaveEnemiga = 0;
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Creando la nave "));
}

FString ANaveEnemiga::GetNombreNaveEnemiga()
{
	return NombreNaveEnemiga;
}
