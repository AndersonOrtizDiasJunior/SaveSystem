// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ParentSaveGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class COMPLETESAVESYSTEM_API UParentSaveGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Save System")
	int CachedSlot = -1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Detroyable System")
	TArray<FName> ObjectsToDestroy;

	UFUNCTION(BlueprintCallable, Category = "Detroyable System")
	bool IsOnDestroyList(FName name);

	UFUNCTION(BlueprintCallable, Category = "Detroyable System")
	void AddToDestroyList(FName name);

	UFUNCTION(BlueprintCallable, Category = "Detroyable System")
	bool RemoveFromDestroyList(FName name);
};