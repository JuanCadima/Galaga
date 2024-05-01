// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructoraNaveEnemiga.h"
#include "ConstruirNaveNodriza.generated.h"


UCLASS()
class GALAGA_API AConstruirNaveNodriza : public AActor, public IConstructoraNaveEnemiga
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConstruirNaveNodriza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	virtual void SetMovimiento() override;
	virtual void SetVelocidad(float maxVelocidad) override;
	virtual void SetVida(int TotalVida) override;
	virtual ANaveNodriza* Construir() override;

public:

	float Vida;
	float Velocidad;

};
