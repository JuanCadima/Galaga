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
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MinaMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MinaMesh->SetStaticMesh(MinaMeshAsset.Object);
	Tipo = "Explosiva";

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

}

void AMina::Activar()
{

}

void AMina::Desactivar()
{
}

void AMina::Detonar()
{
	//Destroy();
	//UE_LOG(LogTemp, Warning, TEXT("Mina detonada"));
}

void AMina::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalagaPawn* GalagaPawn = Cast<AGalagaPawn>(Other);
		if (GalagaPawn)
		{
			UE_LOG(LogTemp, Warning, TEXT("Mina colisionada con GalagaPawn"));
			Other->Destroy();
			Detonar();
		}
}

//void AMina::NotifyActorBeginOverlap(AActor* OtherActor)
//{
//	Super::NotifyActorBeginOverlap(OtherActor);
//	
//	AGalagaPawn* GalagaPawn = Cast<AGalagaPawn>(OtherActor);
//	if (GalagaPawn)
//	{
//		UE_LOG(LogTemp, Warning, TEXT("Mina colisionada con GalagaPawn"));
//		GalagaPawn->NotifyMineCollision();
//		Detonar();
//	}
//	
//}

