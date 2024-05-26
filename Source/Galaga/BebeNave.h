// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BebeNave.generated.h"

UCLASS()
class GALAGA_API ABebeNave : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABebeNave();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UStaticMeshComponent* BbMesh;

	class AFacade* Facade;

	int Vida;
	int DanoRecibido;

	void Mover();
	void Llanto();
	void Morir();

	void Venganza(const TArray<FString>& _Cumplir);
	void Comienzo(const FString& _Cumplir);

	//void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
};
