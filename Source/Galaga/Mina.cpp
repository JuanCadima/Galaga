// Fill out your copyright notice in the Description page of Project Settings.

#include "Mina.h"
#include "GalagaPawn.h"

// Sets default values
AMina::AMina()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MinaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MinaMesh"));
	RootComponent = MinaMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MinaMeshAsset(TEXT("StaticMesh'/Game/Assets/Sci-Fi_bomb.Sci-Fi_bomb'"));
	MinaMesh->SetStaticMesh(MinaMeshAsset.Object);
	SetActorRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));

	Tipo = "Explosiva";
	bIsActivada = false;
	Activacion = 0.0f;
	Detonacion = 5.0f;

}

// Called when the game starts or when spawned
void AMina::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMina::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if(bIsActivada)
	{
	Activacion += DeltaTime;
	if (Activacion >=Detonacion)
	{
			Activar();
		}
	}
}

void AMina::Activar()
{
	UE_LOG(LogTemp, Warning, TEXT("Mina activada"));
	TArray<AActor*> OverlappingActors;
	MinaMesh->GetOverlappingActors(OverlappingActors, AGalagaPawn::StaticClass());
	for (AActor* Actor : OverlappingActors)
	{
			AGalagaPawn* GalagaPawn = Cast<AGalagaPawn>(Actor);
			if (GalagaPawn)
			{
				Detonar();
				return;
			}
		}
	bIsActivada = false;
	Activacion = 0.0f;
}

void AMina::Desactivar()
{
	UE_LOG(LogTemp, Warning, TEXT("Mina desactivada"));
}

void AMina::Detonar()
{
	UE_LOG(LogTemp, Warning, TEXT("Mina detonada"));
	//Destroy();
}

void AMina::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalagaPawn* GalagaPawn = Cast<AGalagaPawn>(Other);
		if (GalagaPawn)
		{
			UE_LOG(LogTemp, Warning, TEXT("Mina colisionada con GalagaPawn"));
			bIsActivada = true;
			Activacion = 0.0f;
			//Other->Destroy();
			//Detonar();
		}
}
