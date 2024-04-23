// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreacionNavesEnemigas.h"
#include "NavesdeVelocidades.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_API ANavesdeVelocidades : public ACreacionNavesEnemigas
{
	GENERATED_BODY()
	
public:

	virtual ANaveEnemiga* CreaNavesEnemigas(FString NombreNave) override;
};
