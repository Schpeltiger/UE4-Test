// Fill out your copyright notice in the Description page of Project Settings.


#include "FocusGameViewportClient.h"
#include "FocusGameInstance.h"

void UFocusGameViewportClient::LostFocus(FViewport* MyViewport)
{
    static_cast<UFocusGameInstance*>(GameInstance)->OnLostFocus.Broadcast();
    Super::LostFocus(MyViewport);
}