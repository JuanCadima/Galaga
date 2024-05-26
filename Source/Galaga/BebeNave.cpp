// Fill out your copyright notice in the Description page of Project Settings.


#include "BebeNave.h"
#include "Mina.h"
#include "Asteroides.h"
#include "Facade.h"
#include "GalagaPawn.h"


// Sets default values
ABebeNave::ABebeNave()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BbMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	BbMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BbMesh"));
	RootComponent = BbMesh;
	BbMesh->SetStaticMesh(BbMeshAsset.Object);

	Vida = 100;
	DanoRecibido = 10;

}

// Called when the game starts or when spawned
void ABebeNave::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ABebeNave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABebeNave::Mover()
{
	FVector RandomLocation = FVector(FMath::RandRange(-1900.0f, 1900.0f), FMath::RandRange(-1000.0f, 1000.0f), 200.0f);
	FVector NLocation = GetActorLocation();
	if (NLocation != RandomLocation)
	{
		NLocation = FMath::VInterpTo(NLocation, RandomLocation, 1.0f, 1.0f);
		SetActorLocation(NLocation);
	}
}

void ABebeNave::Llanto()
{
	Vida -= 10;
	if (Vida <= 50)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Lloro"));
	}
	if (Vida <= 10)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Lancen Minas"));
		if (Facade)
		{
			TArray<FString> Mensaje;
			Mensaje.Add("Destruir");
			Facade->ComunicadoBebeNave(TArray<ABebeNave*>({ this }), Mensaje);
		}
	}
}

void ABebeNave::Morir()
{
	if (Vida <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Te vere en el infierno"));
		Destroy();
	}
}

void ABebeNave::Venganza(const TArray<FString>& _Cumplir)
{
	for (FString EnCamino : _Cumplir)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Voy a vengarme de %s"), *EnCamino);
		Comienzo(EnCamino);
	}
}

void ABebeNave::Comienzo(const FString& _Cumplir)
{
	if (_Cumplir.Equals("Moriras"))
	{
		Llanto();
	}
	else if (_Cumplir.Equals("Destruir"))
	{
		Morir();
	}
	else if (_Cumplir.Equals("Asteorides"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Vienen Asteorides"));
	}
}