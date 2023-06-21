// Fill out your copyright notice in the Description page of Project Settings.


#include "ReplayGameInstance.h"


UReplayGameInstance::UReplayGameInstance()
{
	RecordingGame = "MyReplay";
	FriendlyRecordingGame = "My Replay";
}

void UReplayGameInstance::StartRecording()
{
	StartRecordingReplay(RecordingGame, FriendlyRecordingGame);
}

void UReplayGameInstance::StopRecording()
{
}

void UReplayGameInstance::StartReplay()
{
	PlayReplay(RecordingGame, nullptr);
}
