// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaSquad.generated.h"

class ANaveEnemiga;

UCLASS()
class GALAGA_API ANaveEnemigaSquad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemigaSquad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	
	void AgregarNaveEnemiga(ANaveEnemiga* NaveEnemiga, FVector Separacion);
	//void EliminarNaveEnemiga(ANaveEnemiga* NaveEnemiga);


public:

	TArray<ANaveEnemiga*> NavesEnemigas;
};