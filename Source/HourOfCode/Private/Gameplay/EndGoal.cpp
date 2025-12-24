// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/EndGoal.h"
#include "Components/StaticMeshComponent.h"

AEndGoal::AEndGoal()
{
	StaticMeshShard01 = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshShard01");
	StaticMeshShard02 = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshShard02");
	StaticMeshShard03 = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshShard03");
	
	RootComponent = RootScene;
	StaticMeshShard01->SetupAttachment(RootScene);
	StaticMeshShard02->SetupAttachment(RootScene);
	StaticMeshShard03->SetupAttachment(RootScene);
}

void AEndGoal::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("EndGoal++"));
	PlayTheShardAnimation();
}

void AEndGoal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
