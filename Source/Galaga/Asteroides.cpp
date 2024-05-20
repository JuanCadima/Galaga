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
	//IntervaloSpawn = 1.0f;
	IntervaloMax = 5.0f;
	IntervaloMin = 1.0f;
	MaxAsteroide = 10;

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

	float IntervaloSpawn = FMath::FRandRange(IntervaloMin, IntervaloMax);
	GetWorldTimerManager().SetTimer(TimeAsteroide, this, &AAsteroides::SpawnAsteroide, IntervaloSpawn, true);

}

void AAsteroides::MovimientoAsteroide()
{
	FVector NewLocation = GetActorLocation();
	NewLocation -= GetActorForwardVector() * Velocidad;
	SetActorLocation(NewLocation);
}

void AAsteroides::SpawnAsteroide()
{

	//GetWorld()->SpawnActor<AAsteroides>(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
	if (AsteroideArray.Num() < MaxAsteroide)
	{
		AAsteroides* Asteroide = GetWorld()->SpawnActor<AAsteroides>(FVector(300.0f, 0.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
		if (Asteroide)
		{
			AsteroideArray.Add(Asteroide);
		}
	}
	float IntervaloSpawn = FMath::FRandRange(IntervaloMin, IntervaloMax);
	GetWorldTimerManager().SetTimer(TimeAsteroide, this, &AAsteroides::SpawnAsteroide, IntervaloSpawn, false);
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

