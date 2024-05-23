// Fill out your copyright notice in the Description page of Project Settings.


#include "Asteroides.h"
#include "GalagaPawn.h"

// Sets default values
AAsteroides::AAsteroides()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AsteroideMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AsteroideMesh"));
	RootComponent = AsteroideMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AsteroideMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	AsteroideMesh->SetStaticMesh(AsteroideMeshAsset.Object);

	TipoAsteroide = "Normal";
	DanoAsteroide = 1;
	PuntosAsteroide = 10;
	VidaAsteroide = 100;
	Velocidad = 50.0f;
}

// Called when the game starts or when spawned
void AAsteroides::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAsteroides::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector SpawnAreaMin = FVector(-1000.0f, -1000.0f, 200.0f);
	FVector SpawnAreaMax = FVector(1000.0f, 1000.0f, 200.0f);

	MovimientoAsteroide();

}

void AAsteroides::DestruirAsteroide()
{
	if (VidaAsteroide <= 0)
	{
		Destroy();
	}
	else
	{
		VidaAsteroide -= DanoAsteroide;
	}
}

void AAsteroides::MovimientoAsteroide()
{
	FVector NewLocation = GetActorLocation();
	NewLocation -= GetActorForwardVector() * Velocidad;
	if (NewLocaion.X < -1500 || NewLocation.X > 1500 || NewLocation.Y < -1500 || NewLocation.Y > 1500)
	{
		NewLocation = FVector(
			FMathRange(SpawAreaMin.X, SpawnAreaMax.X),
			FMathRange(SpawnAreaMin.Y, SpawnAreaMax.Y), 200.0f);
	};
	SetActorLocation(NewLocation);
}

void AAsteroides::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalagaPawn* GalagaPawn = Cast<AGalagaPawn>(Other);
	if (GalagaPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("Asteroide colisionado con GalagaPawn"));
		Other->Destroy();
		Destroy();
	}
}

