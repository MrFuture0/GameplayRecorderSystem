// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "WorkWorkWorkWorkHUD.generated.h"

UCLASS()
class AWorkWorkWorkWorkHUD : public AHUD
{
	GENERATED_BODY()

public:
	AWorkWorkWorkWorkHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

