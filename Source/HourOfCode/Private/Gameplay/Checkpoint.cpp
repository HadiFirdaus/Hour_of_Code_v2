// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/Checkpoint.h"
#include "Components/ArrowComponent.h"

ACheckpoint::ACheckpoint()
{
	SM_ButtonARing = CreateDefaultSubobject<UStaticMeshComponent>("SM_ButtonARing");
	Arrow = CreateDefaultSubobject<UArrowComponent>("Arrow");
	
	RootComponent = RootScene;
	SM_ButtonARing->SetupAttachment(StaticMeshRoot);
	Arrow->SetupAttachment(RootScene);
}

void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Checkpoint++"));
}

void ACheckpoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}