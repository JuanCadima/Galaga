#include "Facade.h"
#include "Asteroides.h"
#include "Mina.h"

// Sets default values
AFacade::AFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Peligro = TArray<class AAsteroides*>();
	Lancen = TArray<class AMina*>();
	Llamada = TArray<FString>();
}

// Called when the game starts or when spawned
void AFacade::BeginPlay()
{
	Super::BeginPlay();

	Asteroides = GetWorld()->SpawnActor<AAsteroides>(AAsteroides::StaticClass(), FVector(150.0f, 0.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
	Peligro.Add(Asteroides);
	Mina = GetWorld()->SpawnActor<AMina>(AMina::StaticClass(), FVector(500.0f, -300.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
	Lancen.Add(Mina);
	

}

// Called every frame
void AFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacade::Comunicado(TArray<class AAsteroides*> _Peligro, TArray<class AMina*> _Lancen, TArray<FString> _LLamada)
{
	for (AAsteroides* VienenAsteroides : _Peligro)
	{
		VienenAsteroides->MovimientoAsteroide();
	}
	for (AMina* Lanzamiento : _Lancen)
	{
		Lanzamiento->Detonar();
	}
}

void AFacade::ComunicadoMinas()
{
	
	Llamada.Empty();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Minas Lanzadas"));
	Comunicado(Peligro, Lancen, Llamada);

}

void AFacade::ComunicadoAsteroides()
{
	AgregarAsteroides();
	Llamada.Empty();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Asteroides en camino"));
	Comunicado(Peligro, Lancen, Llamada);
}

void AFacade::AgregarAsteroides()
{
	FVector Separar = FVector(0.0f, 300.0f, 0.0f);
	FVector Inicio = FVector(1900.0f,0 -1800.0f, 200.0f);

	for (int i = 0; i < 10; i++)
	{
		FVector Spawn = Inicio + i * Separar;
		Asteroides = GetWorld()->SpawnActor<AAsteroides>(AAsteroides::StaticClass(), Spawn, FRotator(0.0f, 0.0f, 0.0f));
		if (Asteroides)
		{
			Peligro.Add(Asteroides);
		}
	}
}

void AFacade::AgregarMinas()
{
	FVector Separacion = FVector(0.0f, 300.0f, 0.0f);
	FVector minas = FVector(1900.0f, 0 - 1800.0f, 200.0f);
	for (int i = 0; i < 10; i++)
	{
		FVector Spawn = minas + i * Separacion;
		Mina = GetWorld()->SpawnActor<AMina>(AMina::StaticClass(), Spawn, FRotator(0.0f, 0.0f, 0.0f));
		if (Mina)
		{
			Lancen.Add(Mina);
		}
	}	
}
