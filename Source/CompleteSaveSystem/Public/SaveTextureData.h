// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SaveTextureData.generated.h"

USTRUCT(BlueprintType)
struct FSaveTextureData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly)
	TEnumAsByte<EPixelFormat> Format;
	
	UPROPERTY(BlueprintReadOnly)
	int Width;
	
	UPROPERTY(BlueprintReadOnly)
	int Height;
	
	UPROPERTY(BlueprintReadOnly)
	TArray<uint8> Buffer;

	FSaveTextureData() {}
	FSaveTextureData(EPixelFormat NewFormat, uint32 NewWidth, uint32 NewHeight, TArray<uint8> NewBuffer) {
		Format = NewFormat;
		Width = NewWidth;
		Height = NewHeight;
		Buffer = NewBuffer;
	}
};