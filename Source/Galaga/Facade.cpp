#include "Facade.h"
#include "Asteroides.h"
#include "Mina.h"
#include "BebeNave.h"
#include "Teletransporte.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

// Sets default values
AFacade::AFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Peligro = TArray<class AAsteroides*>();
	Lancen = TArray<class AMina*>();
	Llamada = TArray<FString>();
	AsteroideSpawnIndex = 0;

	Bebe_Peligro = TArray<class ABebeNave*>();
	Venganza = TArray<FString>();

}

// Called when the game starts or when spawned
void AFacade::BeginPlay()
{
	Super::BeginPlay();

	/*Asteroides = GetWorld()->SpawnActor<AAsteroides>(AAsteroides::StaticClass(), FVector(150.0f, 0.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
	Peligro.Add(Asteroides);
	Mina = GetWorld()->SpawnActor<AMina>(AMina::StaticClass(), FVector(500.0f, -300.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
	Lancen.Add(Mina);*/

	BebeNave = GetWorld()->SpawnActor<ABebeNave>(ABebeNave::StaticClass(), FVector(500.0f, 1000.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
	Bebe_Peligro.Add(BebeNave);
	
}

// Called every frame
void AFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacade::Comunicado(TArray<class AAsteroides*> _Peligro, TArray<class AMina*> _Lancen, TArray<FString> _LLamada)
{
	/*for (AAsteroides* VienenAsteroides : _Peligro)
	{
		VienenAsteroides->MovimientoAsteroide();
	}
	for (AMina* Lanzamiento : _Lancen)
	{
		Lanzamiento->Detonar();
	}*/
}

void AFacade::ComunicadoBebeNave(TArray<class ABebeNave*> _Bebe_Peligro, TArray<FString> _Cumplir)
{
	for (ABebeNave* Bebeeee : _Bebe_Peligro)
	{
		Bebeeee->Venganza(_Cumplir);
	}
	for (const FString& Cumplir : _Cumplir)
	{
		if (Cumplir == "Asteroides")
		{
			ComunicadoAsteroides();
		}
		else if (Cumplir == "Moriras")
		{
			ComunicadoMinas();
		}
		else if (Cumplir == "Destruir")
		{
			ComunicadoTeletransporte();
		}
	}
}

void AFacade::BebeEnPeligro()
{
	Venganza.Empty();
	Venganza.Add("Asteroides");
	Venganza.Add("Moriras");
	Venganza.Add("Destruir");
	ComunicadoBebeNave(Bebe_Peligro, Venganza);


}

void AFacade::ComunicadoMinas()
{
	Llamada.Empty();

	AgregarMinas();

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Minas Lanzadas"));
	Comunicado(Peligro, Lancen, Llamada);


}

void AFacade::ComunicadoAsteroides()
{
	//AgregarAsteroides();
	Llamada.Empty();

	GetWorld()->GetTimerManager().SetTimer(AsteroidesTimer, this, &AFacade::AgregarAsteroides, 1.0f, true);

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Asteroides en camino"));
	Comunicado(Peligro, Lancen, Llamada);
}

void AFacade::ComunicadoTeletransporte()
{
	Llamada.Empty();

	Teletransporte = GetWorld()->SpawnActor<ATeletransporte>(ATeletransporte::StaticClass(), FVector(0.0f, 0.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
	Llamada.Add("Teletransporte en camino");

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Teletransporte en camino"));
	Comunicado(Peligro, Lancen, Llamada);

}

void AFacade::AgregarAsteroides()
{
	//FVector Separar = FVector(0.0f, 300.0f, 0.0f);
	//FVector Inicio = FVector(1900.0f,0 -1800.0f, 200.0f);

	//for (int i = 0; i < 10; i++)
	//{
	//	FVector Spawn = Inicio + i * Separar;
	//	Asteroides = GetWorld()->SpawnActor<AAsteroides>(AAsteroides::StaticClass(), Spawn, FRotator(0.0f, 0.0f, 0.0f));
	//	if (Asteroides)
	//	{
	//		Peligro.Add(Asteroides);
	//	}
	//}

	if (AsteroideSpawnIndex < 10)
	{
		FVector Separar = FVector(0.0f, 300.0f, 0.0f);
		FVector Inicio = FVector(1900.0f, FMath::RandRange(-1800, 1800), 200.0f);

		FVector Spawn = Inicio + AsteroideSpawnIndex * Separar;
		Asteroides = GetWorld()->SpawnActor<AAsteroides>(AAsteroides::StaticClass(), Spawn, FRotator(0.0f, 0.0f, 0.0f));
		if (Asteroides)
		{
			Peligro.Add(Asteroides);
		}
		AsteroideSpawnIndex++;
		FString Message = FString::Printf(TEXT("Asteroides generados: %d"), AsteroideSpawnIndex);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(AsteroidesTimer);
	}
}

void AFacade::AgregarMinas()
{
	FVector Min = FVector(-1900.0f, -1800.0f, 190.0f);
	FVector Max = FVector(1900.0f, 1800.0f, 190.0f);

	FVector Separacion = FVector(0.0f, 300.0f, 0.0f);

	for (int i = 0; i < 10; i++)
	{
		FVector Random = FVector(FMath::RandRange(Min.X, Max.X), FMath::RandRange(Min.Y, Max.Y), 200.0f);
		FVector Spawn = Random + i * Separacion;
		Mina = GetWorld()->SpawnActor<AMina>(AMina::StaticClass(), Random, FRotator(0.0f, 0.0f, 0.0f));
		if (Mina)
		{
			Lancen.Add(Mina);
		}
	}	
}