// Copyright 2024, Anderson Ortiz Dias Junior.


#include "TextureSavingFunctionLibrary.h"
#include "HAL/UnrealMemory.h"
#include "SaveTextureData.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "Engine/TextureRenderTarget2D.h"

FSaveTextureData UTextureSavingFunctionLibrary::GetTextureSaveData(UTexture2D* Texture)
{
    FTexture2DMipMap* MyMipMap = &Texture->GetPlatformData()->Mips[0];
    FByteBulkData* RawImageData = &MyMipMap->BulkData;
    uint32 Width = MyMipMap->SizeX;
    uint32 Height = MyMipMap->SizeY;

    TArray<uint8> TextureDataTarget = TArray<uint8>();
    TextureDataTarget.SetNum(RawImageData->GetBulkDataSize() * sizeof(uint8), true);
 
    FMemory::Memcpy(TextureDataTarget.GetData(), RawImageData->Lock(LOCK_READ_ONLY), RawImageData->GetBulkDataSize() * sizeof(uint8));

    RawImageData->Unlock();
    return FSaveTextureData(Texture->GetPixelFormat(), Width, Height, TextureDataTarget);
}

UTexture2D* UTextureSavingFunctionLibrary::CreateTextureFromSaveData(FSaveTextureData TextureData) {
    UTexture2D* Texture;
    Texture = UTexture2D::CreateTransient(TextureData.Width, TextureData.Height, TextureData.Format);
    int ImageSize = TextureData.Width * TextureData.Height * 4;
    if (!Texture)
    {
        UE_LOG(LogTemp, Error, TEXT("[Error:] Failed to create transient texture."));
        return nullptr;
    }
#if WITH_EDITORONLY_DATA
    Texture->MipGenSettings = TMGS_NoMipmaps;
#endif
    Texture->NeverStream = true;
    Texture->SRGB = 0;
    Texture->LODGroup = TextureGroup::TEXTUREGROUP_Pixels2D;
    
    FTexture2DMipMap& Mip = Texture->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
    FMemory::Memcpy(Data, TextureData.Buffer.GetData(), ImageSize);
    
    Mip.BulkData.Unlock();
    Texture->UpdateResource();
    return Texture;
}

UTexture2D* UTextureSavingFunctionLibrary::RenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget)
{
    if (!RenderTarget) return nullptr;

    const int32 Width = RenderTarget->SizeX;
    const int32 Height = RenderTarget->SizeY;
    if (RenderTarget->RenderTargetFormat != RTF_RGBA8)
    {
        UE_LOG(LogTemp, Error, TEXT("[Error:] Texture target is not in RGBA8 format"));
        return nullptr;
    }
    const EPixelFormat PixelFormat = RenderTarget->GetFormat();
 
    UTexture2D* NewTexture = UTexture2D::CreateTransient(Width, Height, PixelFormat);
    if (!NewTexture)
    {
        UE_LOG(LogTemp, Error, TEXT("[Error:] Render Target to Texture:Failed to create transient texture."));
        return nullptr;
    }
    
    TArray<FColor> Pixels;
    FRenderTarget* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
    RenderTargetResource->ReadPixels(Pixels);

    FTexture2DMipMap& Mip = NewTexture->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
    FMemory::Memcpy(Data, Pixels.GetData(), Pixels.Num() * sizeof(FColor));
    Mip.BulkData.Unlock();
    NewTexture->UpdateResource();

    return NewTexture;
}

void UTextureSavingFunctionLibrary::RenderTargetToTexture2D_Async(
    UTextureRenderTarget2D* RenderTarget,
    const FOnTextureCreated& OnCompleted)
{
    if (!RenderTarget)
    {
        OnCompleted.ExecuteIfBound(nullptr);
        return;
    }

    const int32 Width = RenderTarget->SizeX;
    const int32 Height = RenderTarget->SizeY;

    // Capture the render target resource (on render thread)
    FTextureRenderTargetResource* RTResource = RenderTarget->GameThread_GetRenderTargetResource();
    if (!RTResource)
    {
        OnCompleted.ExecuteIfBound(nullptr);
        return;
    }

    // Allocate buffer for pixel data
    TArray<FColor> PixelData;
    PixelData.SetNumUninitialized(Width * Height);

    // Read pixels asynchronously
    ENQUEUE_RENDER_COMMAND(ReadRenderTargetPixels)(
        [RTResource, &PixelData, Width, Height, OnCompleted](FRHICommandListImmediate& RHICmdList)
        {
            // Read pixels from render target (render thread)
            RTResource->ReadPixels(PixelData);

            // Go back to game thread to create the texture
            AsyncTask(ENamedThreads::GameThread, [PixelData = MoveTemp(PixelData), Width, Height, OnCompleted]()
                {
                    // Create transient texture
                    UTexture2D* NewTexture = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);
                    if (!NewTexture)
                    {
                        UE_LOG(LogTemp, Error, TEXT("[Error:] Failed to create transient texture."));
                        OnCompleted.ExecuteIfBound(nullptr);
                        return;
                    }

#if WITH_EDITORONLY_DATA
                    NewTexture->MipGenSettings = TMGS_NoMipmaps;
#endif
                    NewTexture->NeverStream = true;
                    NewTexture->SRGB = 0;
                    NewTexture->LODGroup = TextureGroup::TEXTUREGROUP_Pixels2D;

                    // Lock mip and copy pixel data
                    FTexture2DMipMap& Mip = NewTexture->GetPlatformData()->Mips[0];
                    void* TextureData = Mip.BulkData.Lock(LOCK_READ_WRITE);
                    FMemory::Memcpy(TextureData, PixelData.GetData(), PixelData.Num() * sizeof(FColor));
                    Mip.BulkData.Unlock();

                    // Update the texture resource
                    NewTexture->UpdateResource();

                    // Call the completion delegate
                    OnCompleted.ExecuteIfBound(NewTexture);
                });
        }
        );
}
