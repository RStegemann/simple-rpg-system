// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Tilemap.h"
#include "ACPP_HexTilemap.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SIMPLE_RPG_SYSTEM_API ACPP_HexTilemap : public ACPP_Tilemap
{
	GENERATED_BODY()
protected:
	virtual void PlaceTileInGrid(int XIndex, int YIndex, float HeightOffset, ACPP_Tile* Tile) override;
public:
	ACPP_HexTilemap();
};
