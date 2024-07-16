// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PixelFormat.h"
#include "SaveTextureData.generated.h"

USTRUCT(BlueprintType)
struct FSaveTextureData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Parameters")
	TEnumAsByte<EPixelFormat> Format;
	
	UPROPERTY(BlueprintReadOnly, Category = "Parameters")
	int Width;
	
	UPROPERTY(BlueprintReadOnly, Category = "Parameters")
	int Height;
	
	UPROPERTY(BlueprintReadOnly, Category = "Parameters")
	TArray<uint8> Buffer;

	FSaveTextureData()
	{
		Format = PF_ETC2_RGBA;
		Width = 0;
		Height = 0;
		Buffer = TArray<uint8>();
	}
	
	FSaveTextureData(EPixelFormat NewFormat, uint32 NewWidth, uint32 NewHeight, TArray<uint8> NewBuffer) {
		Format = NewFormat;
		Width = NewWidth;
		Height = NewHeight;
		Buffer = NewBuffer;
	}
};