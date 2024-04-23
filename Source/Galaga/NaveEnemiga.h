// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class GALAGA_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString NombreNaveEnemiga;

	int VidaNaveEnemiga;

	FVector Posicion;
	FVector Velocidad;
	float VelocidadMaxima;
	

	UStaticMeshComponent* MeshNaveEnemiga;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	virtual	void Disparar();
	virtual void Moverse(float DeltaTime);
	virtual void CrearNaveEnemiga(FString NombreNave);
	FString GetNombreNaveEnemiga();
};
