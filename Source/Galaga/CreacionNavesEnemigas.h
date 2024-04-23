// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "CreacionNavesEnemigas.generated.h"

UCLASS()
class GALAGA_API ACreacionNavesEnemigas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreacionNavesEnemigas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual ANaveEnemiga* CreaNavesEnemigas(FString NombreNave) PURE_VIRTUAL(ACreacionNavesEnemigas::CreaNavesEnemigas, return nullptr;);

};
