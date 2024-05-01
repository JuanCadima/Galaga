// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"
#include "NaveEnemiga.h"
#include "TimerManager.h"

// Sets default values
ANaveNodriza::ANaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_180.Shape_Pipe_180'"));
	/*Mesh->SetRelativeScale3D(FVector(350.0f, 250.0f, 520.0f));
	Mesh->SetRelativeRotation(FRotator(0.0f, 200.0f, 50.0f));*/
	Mesh->SetStaticMesh(NaveMesh.Object);

}

// Called when the game starts or when spawned
void ANaveNodriza::BeginPlay()
{
	Super::BeginPlay();

	Vida = 100;
	
	UWorld* const World = GetWorld();

	World->GetTimerManager().SetTimer(TemporizadorSpawn, this, &ANaveNodriza::LanzarNaves, 1, true);

}

// Called every frame
void ANaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	NewLocation.Z = 200.0f;
	NewLocation.Y += MovimiwentoVelocidadX * DeltaTime * MovimientoY;
	SetActorLocation(NewLocation);

	if (Vida <= 0)
	{
		Destroy();
	}
	

	//if(NewLocation.Y <= LimiteDerecho && NewLocation.Y >= LimiteIzquierdo)
	//{
	//	MovimientoY = -1;
	//	LanzarNaves();
	//}

}

void ANaveNodriza::SetMovimiento()
{

}

void ANaveNodriza::SetVida(float TotalVida)
{

}

void ANaveNodriza::SetVelocidad(float maxVelocidad)
{

}

void ANaveNodriza::LanzarNaves()
{
		UWorld* World = GetWorld();
		if(World)
		{
			
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Nave soltada"));

			FVector SpawnLocation = GetActorLocation() + FVector(SpawnOffset + MovimientoY, 0.0f, 0.0f);
			ANaveEnemiga* NaveEnemiga = World->SpawnActor<ANaveEnemiga>(SpawnLocation, FRotator::ZeroRotator);
		}
}

