// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveOnHexGridComponent.h"

#include "ACPP_HexTilemap.h"

// Sets default values for this component's properties
UMoveOnHexGridComponent::UMoveOnHexGridComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMoveOnHexGridComponent::BeginPlay()
{
	Super::BeginPlay();
	Start = GetRelativeLocation();
	Path = {};
	Interpolation = 0;
}


// Called every frame
void UMoveOnHexGridComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if(!Path.IsEmpty())
	{
		const FIntVector2 TargetPos = Path[0];
		const ACPP_Tile* TargetTile = Grid->GetTile(TargetPos.X, TargetPos.Y);
		FVector TargetPosition = TargetTile->GetActorLocation();
		Interpolation += DeltaTime / SecondsPerTile;
		Interpolation = FMath::Clamp(Interpolation, 0, 1);
		FVector NewPosition = FMath::Lerp(Start, TargetPosition, Interpolation);
		if(NewPosition.Equals(TargetPosition))
		{
			Interpolation = 0;
			Path.RemoveAt(0);
		}
	}
}

void UMoveOnHexGridComponent::AddWaypoint(int X, int Y)
{
	Path.Add(FIntVector2(X, Y));
}
