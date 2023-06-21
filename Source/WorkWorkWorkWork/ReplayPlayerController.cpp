// Fill out your copyright notice in the Description page of Project Settings.


#include "ReplayPlayerController.h"
#include "Engine/World.h"
#include "Engine/DemoNetDriver.h"

void AReplayPlayerController::RestartRecording()
{
	if (UWorld * World = GetWorld())
	{
		if (UDemoNetDriver * DemoDriver = World->DemoNetDriver)
		{
			DemoDriver->GotoTimeInSeconds(0.f);
		}
	}
}
