// Copyright 2024, Anderson Ortiz Dias Junior.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextureSavingFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class COMPLETESAVESYSTEM_API UTextureSavingFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
private:
	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category="File Deleting")
	static bool DeleteFile(const FString& FullPath);
};
