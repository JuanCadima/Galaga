// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveNodriza.generated.h"

UCLASS()
class GALAGA_API ANaveNodriza : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveNodriza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UStaticMeshComponent* Mesh;

	void SetMovimiento();
	void SetVida(float TotalVida);
	void SetVelocidad(float maxVelocidad);

	
	void LanzarNaves();

public:

	float Vida;
	float Velocidad;
	float Energia;

	
	float SpawnOffset = 100.0f;
	float MovimiwentoVelocidadX = 100.0f;
	float LimiteDerecho = 200.0f;
	float LimiteIzquierdo = -200.0f;
	int MovimientoY = 1;

	FTimerHandle TemporizadorSpawn;

};
