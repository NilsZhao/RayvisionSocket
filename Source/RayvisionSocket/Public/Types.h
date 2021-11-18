// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Types.generated.h"


USTRUCT(BlueprintType)
struct FJoyMoveMessage
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category="JoyMove", SaveGame)
	FName EventName;
	UPROPERTY(BlueprintReadOnly, Category="JoyMove", SaveGame)
	int64 Timestamp;
	UPROPERTY(BlueprintReadOnly, Category="JoyMove", SaveGame)
	float X;
	UPROPERTY(BlueprintReadOnly, Category="JoyMove", SaveGame)
	float Y;
};


UCLASS()
class RAYVISIONSOCKET_API UTypes : public UObject
{
	GENERATED_BODY()
	
};
