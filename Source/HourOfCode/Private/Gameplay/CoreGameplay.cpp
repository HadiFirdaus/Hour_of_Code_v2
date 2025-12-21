// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/CoreGameplay.h"
#include "Components/SphereComponent.h"
#include "Components/TextRenderComponent.h"

// Sets default values
ACoreGameplay::ACoreGameplay()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>("RootScene");
	StaticMeshRoot = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshRoot");
	SphereComRoot = CreateDefaultSubobject<USphereComponent>("SphereComRoot");
	TextRenderRoot = CreateDefaultSubobject<UTextRenderComponent>("TextRenderRoot");
	
	RootComponent = RootScene;
	StaticMeshRoot->SetupAttachment(RootScene);
	SphereComRoot->SetupAttachment(RootScene);
	TextRenderRoot->SetupAttachment(RootScene);
	
}

// Called when the game starts or when spawned
void ACoreGameplay::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello World"));
	if (SphereComRoot != nullptr)
	{
		SphereComRoot->OnComponentBeginOverlap.AddDynamic(this, &ACoreGameplay::SphereBeginOverlap);
		SphereComRoot->OnComponentEndOverlap.AddDynamic(this, &ACoreGameplay::SphereEndOverlap);
	}
}

// Called every frame
void ACoreGameplay::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACoreGameplay::SphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

void ACoreGameplay::SphereEndOverlap(UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
}
