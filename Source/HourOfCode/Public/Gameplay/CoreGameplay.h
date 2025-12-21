// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoreGameplay.generated.h"

UCLASS()
class HOUROFCODE_API ACoreGameplay : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoreGameplay();
	
	UPROPERTY(EditDefaultsOnly)
	class USceneComponent* RootScene;
	UPROPERTY(EditDefaultsOnly)
	class UStaticMeshComponent* StaticMeshRoot;
	UPROPERTY(EditDefaultsOnly)
	class USphereComponent* SphereComRoot;
	UPROPERTY(EditDefaultsOnly)
	class UTextRenderComponent* TextRenderRoot;
	
	UPROPERTY(EditDefaultsOnly, Category = "CoreGameplay")
	FName GameplayName = "Gameplay";

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION()
	void SphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void SphereEndOverlap(UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
