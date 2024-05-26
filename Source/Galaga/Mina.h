// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "Mina.generated.h"

UCLASS()
class GALAGA_API AMina : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMina();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UStaticMeshComponent* MinaMesh;

	FString Tipo;

	bool bIsActivada;
	float Activacion;
	float Detonacion;
	int Dano;

	void Activar();
	void Desactivar();
	void Detonar();


	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

};
