// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FocusGameInstance.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLostFocusSignature);

UCLASS()
class FOCUSPROJECT_API UFocusGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
		UPROPERTY(BlueprintAssignable, Category = "LostFocus")
		FLostFocusSignature OnLostFocus;
};
