// Fill out your copyright notice in the Description page of Project Settings.


#include "ExportingTextureAsync.h"
#include "ImageWriteBlueprintLibrary.h"
#include <Engine/TextureRenderTarget.h>
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "Engine/TextureRenderTarget2D.h"
#include "RenderingThread.h"

UExportingTextureAsync* UExportingTextureAsync::ExportTextureAsync(UObject* WorldContextObject, UTexture* Texture, FString Name) 
{
	UExportingTextureAsync* AsyncTask = NewObject<UExportingTextureAsync>();
	AsyncTask->WorldContextObject = WorldContextObject;
	AsyncTask->Texture = Texture;
	AsyncTask->Name = Name;
	return AsyncTask;
}

void UExportingTextureAsync::Activate()
{
	Super::Activate();
	UTextureRenderTarget2D* RenderTarget = Cast<UTextureRenderTarget2D>(Texture);
	if (RenderTarget)
	{
		FRenderTarget* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
		if (!RenderTargetResource)
		{
			OnFailure.Broadcast();
			return;
		}

		// Force GPU to finish all pending rendering commands
		FlushRenderingCommands();
	}

	FImageWriteOptions ImageOptions = FImageWriteOptions();
	ImageOptions.bAsync = true;
	ImageOptions.Format = EDesiredImageFormat::PNG;
	ImageOptions.bOverwriteFile = true;
	Path = FPaths::ProjectSavedDir() / Name;
	ImageOptions.OnComplete.BindUFunction(this, "OnComplete");
	UImageWriteBlueprintLibrary::ExportToDisk(Texture, Path, ImageOptions);
}

void UExportingTextureAsync::OnComplete(bool bSuccess)
{
if (bSuccess)
	{
		OnSuccess.Broadcast(Path);
	}
	else
	{
		OnFailure.Broadcast();
	}
}


