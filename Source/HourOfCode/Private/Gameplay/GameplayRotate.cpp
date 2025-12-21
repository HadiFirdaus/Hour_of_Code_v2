// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/GameplayRotate.h"
#include "GameFramework/RotatingMovementComponent.h"

// Sets default values
AGameplayRotate::AGameplayRotate()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	RotateMoveComp = CreateDefaultSubobject<URotatingMovementComponent>("RotateMoveComp");
	RootComponent = RootScene;

}

// Called when the game starts or when spawned
void AGameplayRotate::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("GameplayRotate"));
	
}

// Called every frame
void AGameplayRotate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

