// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Components/StaticMeshComponent.h"
#include "GalagaProjectile.h"
#include "GalagaPawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	RootComponent = MeshNaveEnemiga;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	MeshNaveEnemiga->SetStaticMesh(NaveMesh.Object);
	VidaNaveEnemiga = 50;
	VelocidadMaxima = 100;

	GunOffset = FVector(90.f, 0.f, 0.f);
	fireRate = 10.0f;
	bCanFire = true;

	
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
	Disparar();
}

void ANaveEnemiga::Disparar()
{
	
	//if (bCanFire && true)
	//{
	//	FVector SpawnLocation = GetActorLocation() + GunOffset;
	//	FRotator SpawnRotation = GetActorRotation();
	//	UWorld* World = GetWorld();
	//	if (World)
	//	{
	//		AGalagaProjectile* Projectile = World->SpawnActor<AGalagaProjectile>(SpawnLocation, SpawnRotation);
	//	}
	//	bCanFire = false;
	//	World->GetTimerManager().SetTimer(TimerDisparo, this, &ANaveEnemiga::ShootTimerExpired, fireRate);
	//}

	AGalagaPawn* GalagaPawn = Cast<AGalagaPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (GalagaPawn)
	{
		FVector Jugador = GalagaPawn->GetActorLocation();
		FVector FireDirection = Jugador - GetActorLocation().GetSafeNormal();
		FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * GunOffset;
		UWorld* const World = GetWorld();
		if (World)
		{
		AGalagaProjectile* Projectile = World->SpawnActor<AGalagaProjectile>(SpawnLocation, FireDirection.Rotation());
		}
		bCanFire = false;
		World->GetTimerManager().SetTimer(TimerDisparo, this, &ANaveEnemiga::ShootTimerExpired, fireRate);
	}
}

void ANaveEnemiga::ShootTimerExpired()
{
	bCanFire = true;
}

void ANaveEnemiga::Moverse(float DeltaTime)
{
	FVector Spawn = FVector(250.0f, 0.0f, 200.0f);
	Spawn = GetActorLocation();
	float NuevaX = VelocidadMaxima * DeltaTime + Spawn.X;
	FVector NuevaPosicion = FVector(NuevaX, Spawn.Y, Spawn.Z);
	SetActorLocation(NuevaPosicion);

}

void ANaveEnemiga::RecibirDano(int Dano)
{
	VidaNaveEnemiga -= Dano;
	if (VidaNaveEnemiga <= 0)
	{
		Morir();
	}
}

void ANaveEnemiga::Morir()
{
	Destroy();
}

void ANaveEnemiga::CrearNaveEnemiga(FString NombreNave)
{
	NombreNaveEnemiga = NombreNave;
	VelocidadMaxima = 100;
	VidaNaveEnemiga = 50;
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Creando la nave "));
}

FString ANaveEnemiga::GetNombreNaveEnemiga()
{
	return NombreNaveEnemiga;
}
