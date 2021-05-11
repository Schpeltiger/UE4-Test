// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "FocusGameViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class FOCUSPROJECT_API UFocusGameViewportClient : public UGameViewportClient
{
	GENERATED_BODY()
	

public:

	// Override lost focus function.
	virtual void LostFocus(FViewport* Viewport) override;

};
