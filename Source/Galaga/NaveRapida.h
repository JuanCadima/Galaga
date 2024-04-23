// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveRapida.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_API ANaveRapida : public ANaveEnemiga
{
	GENERATED_BODY()

public:

	ANaveRapida();


public:

	virtual void BeginPlay() override;

public:

	virtual void CrearNaveEnemiga(FString NombreNave) override;
	
};
