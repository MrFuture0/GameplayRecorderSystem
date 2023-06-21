
// Fill out your copyright notice in the Description page of Project Settings.


#include "MySingleton.h"


UMySingleton* UMySingleton::s_static = nullptr;

UMySingleton* UMySingleton::Get()
{
	if (s_static == nullptr)
	{
		s_static = NewObject<UMySingleton>();
	}
	return s_static;
}

void UMySingleton::DoSomething()
{
	UE_LOG(LogTemp, Warning, TEXT("Created Singleton Method"));
}



