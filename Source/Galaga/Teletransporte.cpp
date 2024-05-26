// Fill out your copyright notice in the Description page of Project Settings.


#include "Teletransporte.h"
#include "Kismet/GameplayStatics.h"
#include "GalagaPawn.h"

// Sets default values
ATeletransporte::ATeletransporte()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> TeleportMeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	TeleportMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleportMesh"));
	RootComponent = TeleportMesh;
	TeleportMesh->SetStaticMesh(TeleportMeshAsset.Object);
	

}

// Called when the game starts or when spawned
void ATeletransporte::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATeletransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATeletransporte::Teleport()
{
	AGalagaPawn* GalagaPawn = Cast<AGalagaPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	FVector Tp = FVector(GetActorLocation().X, GetActorLocation().Y, 200.0f);	
	if (GalagaPawn)
	{
		FVector TMax = FVector(1900.0f, 1000.0f, 200.0f);
		FVector TMin = FVector(-1900.0f, -1000.0f, 200.0f);
		TeleportLocation.X = FMath::RandRange(TMin.X, TMax.X);
		GalagaPawn->SetActorLocation(TeleportLocation);
	}
}

void ATeletransporte::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalagaPawn* GalagaPawn = Cast<AGalagaPawn>(Other);
	if (GalagaPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("Teletransportan a la nave"));
		Teleport();
	}
}
