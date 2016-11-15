// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MLFileManager.generated.h"

/**
 * 
 */
UCLASS()
class VRPLAYER_API UMLFileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "ML")
	static TArray<FString> GetAllFileNameInDirectory(const FString Directory, const FString Extension);
	UFUNCTION(BlueprintPure, Category = "ML")
	static bool FileLoadString(FString FileNameA, FString& SaveTextA);
	
};
