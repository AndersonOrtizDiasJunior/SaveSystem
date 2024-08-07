// Copyright 2024, Anderson Ortiz Dias Junior.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ParentSaveGame.generated.h"


UCLASS()
class COMPLETESAVESYSTEM_API UParentSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Checkpoint System")
	TArray<FString> SavedCheckPoints;
};
