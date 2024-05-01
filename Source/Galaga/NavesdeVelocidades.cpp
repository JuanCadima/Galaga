// Fill out your copyright notice in the Description page of Project Settings.


#include "NavesdeVelocidades.h"
#include "NaveRapida.h"

ANaveEnemiga* ANavesdeVelocidades::CreaNavesEnemigas(FString NombreNave)
{
	if (NombreNave == "NaveRapida")
	{
		FVector SpawnLocation = FVector(0.0f, 0.0f, 200.0f);
		return GetWorld()->SpawnActor<ANaveRapida>(SpawnLocation, FRotator(0, 0, 0));

	}
	//if (NombreNave == "NaveLenta")
	//{
	//	FVector SpawnLocation = FVector(0.0f, 0.0f, 250.0f);
	//	return GetWorld()->SpawnActor<ANaveLenta>(SpawnLocation, FRotator(0, 0, 0));
	//}
	//if (NombreNave == "NaveMedia")
	//{
	//	FVector SpawnLocation = FVector(0.0f, 0.0f, 250.0f);
	//	return GetWorld()->SpawnActor<ANaveMedia>(SpawnLocation, FRotator(0, 0, 0));
	//}
	else return nullptr;
}
