// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ExportingTextureAsync.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExportingSuccess, FString, Path);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FExportingFailure);

UCLASS()
class COMPLETESAVESYSTEM_API UExportingTextureAsync : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FExportingSuccess OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FExportingFailure OnFailure;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", category = "AsyncTimer"))
	static UExportingTextureAsync* ExportTextureAsync(UObject* WorldContextObject, UTexture* Texture, FString Name);

	virtual void Activate() override;

private:
	UPROPERTY()
	UObject* WorldContextObject;

	UTexture* Texture;
	FString Name;
	FString Path;

	UFUNCTION()
	void OnComplete(bool bSuccess);
};
