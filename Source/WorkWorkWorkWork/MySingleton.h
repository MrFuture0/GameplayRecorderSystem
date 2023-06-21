// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MySingleton.generated.h"

/**
 * 
 */
UCLASS()
class WORKWORKWORKWORK_API UMySingleton : public UObject
{
	GENERATED_BODY()


private:
	static UMySingleton* s_static;
	UMySingleton(){};
	~UMySingleton(){};

public:
	
	static UMySingleton* Get();
	void DoSomething();


};
