// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructoraNaveEnemiga.h"
#include "ConstruirNaveNodriza.h"
#include "DirectorNave.generated.h"

UCLASS()
class GALAGA_API ADirectorNave : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorNave();

	//IConstructoraNaveEnemiga* NaveNodriza;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void Construirlo(IConstructoraNaveEnemiga* constructor);

};
