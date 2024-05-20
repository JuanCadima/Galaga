// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Facade.generated.h"

UCLASS()
class GALAGA_API AFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void Inicializar();
	void SpwanAsteroide();
	void SpwanMina();

public:

	class AAsteroides* Asteroides;
	class AMina* Mina;

};
