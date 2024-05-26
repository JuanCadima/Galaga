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

	TArray<FString> Llamada;

	TArray<class AAsteroides*> Peligro;
	TArray<class AMina*> Lancen;

	TArray<FString> Venganza;
	TArray<class ABebeNave*> Bebe_Peligro;

	FTimerHandle AsteroidesTimer;
	int32 AsteroideSpawnIndex;


public:

	class AAsteroides* Asteroides;
	class AMina* Mina;
	class ATeletransporte* Teletransporte;

	class ABebeNave* BebeNave;


	void Comunicado(TArray<class AAsteroides*> _Peligro, TArray<class AMina*> _Lancen, TArray<FString> _LLamada);

	void ComunicadoBebeNave(TArray<class ABebeNave*> _BebeNave, TArray<FString> _Cumplir);
	void BebeEnPeligro();

	void ComunicadoMinas();
	void ComunicadoAsteroides();
	void ComunicadoTeletransporte();


	void AgregarAsteroides();
	void AgregarMinas();
};
