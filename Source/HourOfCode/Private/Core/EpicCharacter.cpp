// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/EpicCharacter.h"

// Sets default values
AEpicCharacter::AEpicCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEpicCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEpicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEpicCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

