// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CoreGameplay.h"
#include "GameplayRotate.generated.h"

UCLASS()
class HOUROFCODE_API AGameplayRotate : public ACoreGameplay
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGameplayRotate();
	
	UPROPERTY(EditDefaultsOnly)
	class URotatingMovementComponent* RotateMoveComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
