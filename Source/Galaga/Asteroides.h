// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Asteroides.generated.h"

UCLASS()
class GALAGA_API AAsteroides : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAsteroides();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UStaticMeshComponent* AsteroideMesh;

	FTimerHandle TimeAsteroide;

	FString TipoAsteroide;

	TArray<AAsteroides*> AsteroideArray;

	int DanoAsteroide;
	int PuntosAsteroide;
	int VidaAsteroide;
	int32 MaxAsteroide;
	
	//float IntervaloSpawn;
	float IntervaloMax;
	float IntervaloMin;
	float Velocidad;

public:


	void MovimientoAsteroide();
	void SpawnAsteroide();
	void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);

	

};
