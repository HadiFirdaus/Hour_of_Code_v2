// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gameplay/CoreGameplay.h"
#include "Checkpoint.generated.h"

/**
 * 
 */
UCLASS()
class HOUROFCODE_API ACheckpoint : public ACoreGameplay
{
	GENERATED_BODY()
	
public:
	
	ACheckpoint();

	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditDefaultsOnly)
	class UStaticMeshComponent* SM_ButtonARing;
	UPROPERTY(EditDefaultsOnly)
	class UArrowComponent* Arrow;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool CheckpointEnabled = false;
	UPROPERTY(EditDefaultsOnly)
	class UPaperSpriteComponent* CheckpointTransform;
	
protected:
	
	virtual void BeginPlay() override;
};
