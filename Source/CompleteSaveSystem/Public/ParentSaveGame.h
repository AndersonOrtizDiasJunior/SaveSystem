// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ParentSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class COMPLETESAVESYSTEM_API UParentSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Checkpoint System")
	TArray<FString> SavedCheckPoints;
};
