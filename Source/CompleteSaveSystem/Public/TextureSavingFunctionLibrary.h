// Copyright 2024, Anderson Ortiz Dias Junior.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextureSavingFunctionLibrary.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTextureCreated, UTexture2D*, NewTexture);

UCLASS()
class COMPLETESAVESYSTEM_API UTextureSavingFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
private:
	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category="Texture Saving")
	static struct FSaveTextureData GetTextureSaveData(UTexture2D* Texture);

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category="Texture Saving")
	static UTexture2D* CreateTextureFromSaveData(struct FSaveTextureData TextureData);

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category="Texture Saving")
	static UTexture2D* RenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget);

	UFUNCTION(BlueprintCallable, Category = "Texture Saving")
	static void RenderTargetToTexture2D_Async(UTextureRenderTarget2D* RenderTarget, const FOnTextureCreated& OnCompleted);
};
