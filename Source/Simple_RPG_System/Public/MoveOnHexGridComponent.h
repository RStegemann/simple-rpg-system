// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MoveOnHexGridComponent.generated.h"


class ACPP_HexTilemap;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMPLE_RPG_SYSTEM_API UMoveOnHexGridComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMoveOnHexGridComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
		float SecondsPerTile = 1.0f;
	UPROPERTY(EditAnywhere)
		ACPP_HexTilemap* Grid;
	FVector Start;
	TArray<FIntVector2> Path;
	float Interpolation;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)
	virtual void AddWaypoint(int X, int Y);		
};
