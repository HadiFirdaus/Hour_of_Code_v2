// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gameplay/CoreGameplay.h"
#include "EndGoal.generated.h"

UCLASS()
class HOUROFCODE_API AEndGoal : public ACoreGameplay
{
	GENERATED_BODY()
	
public:
	AEndGoal();
	
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditDefaultsOnly)
	class UStaticMeshComponent* StaticMeshShard01;
	UPROPERTY(EditDefaultsOnly)
	class UStaticMeshComponent* StaticMeshShard02;
	UPROPERTY(EditDefaultsOnly)
	class UStaticMeshComponent* StaticMeshShard03;
	
protected:
	virtual void BeginPlay() override;
	
};
