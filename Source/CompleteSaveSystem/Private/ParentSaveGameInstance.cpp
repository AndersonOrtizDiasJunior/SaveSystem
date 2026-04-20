 // Fill out your copyright notice in the Description page of Project Settings.


#include "ParentSaveGameInstance.h"

bool UParentSaveGameInstance::IsOnDestroyList(FName name) 
{
    return ObjectsToDestroy.Contains(name);
}

void UParentSaveGameInstance::AddToDestroyList(FName name) 
{
    ObjectsToDestroy.AddUnique(name);
}

bool UParentSaveGameInstance::RemoveFromDestroyList(FName name) 
{
    if (IsOnDestroyList(name))
    {
        ObjectsToDestroy.Remove(name);
        return true;
    } else 
    {
        return false;
    }
}