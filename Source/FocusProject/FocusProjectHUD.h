// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FocusProjectHUD.generated.h"

UCLASS()
class AFocusProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFocusProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

