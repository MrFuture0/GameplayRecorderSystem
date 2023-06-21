// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ReplayGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class WORKWORKWORKWORK_API UReplayGameInstance : public UGameInstance
{
	GENERATED_BODY()

		UReplayGameInstance();

	UPROPERTY(EditDefaultsOnly, Category = "Replay")
		FString RecordingGame;

	UPROPERTY(EditDefaultsOnly, Category = "Replay")
		FString FriendlyRecordingGame;

	UFUNCTION(BlueprintCallable, Category = "Replay")
		void StartRecording();

	UFUNCTION(BlueprintCallable, Category = "Replay")
		void StopRecording();

	UFUNCTION(BlueprintCallable, Category = "Replay")
		void StartReplay();

};
