// Copyright 2024, Anderson Ortiz Dias Junior.


#include "TextureSavingFunctionLibrary.h"

bool UTextureSavingFunctionLibrary::DeleteFile(const FString& FullPath)
{
	return IFileManager::Get().Delete(*FullPath);
}