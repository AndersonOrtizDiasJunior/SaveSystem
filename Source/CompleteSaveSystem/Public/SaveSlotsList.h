// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SaveSlotsList.generated.h"

class USaveSlotItem;
/**
 * 
 */

UCLASS()
class COMPLETESAVESYSTEM_API USaveSlotsList : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UListView* SlotListView;

	UPROPERTY(BlueprintReadWrite, meta=(ExposeOnSpawn = true))
	TArray<USaveSlotItem*> Slots;
	
	UPROPERTY(BlueprintReadWrite, meta=(ExposeOnSpawn = true))
    bool bIsLoadGame;

	UFUNCTION(BlueprintCallable)
	void UpdateSlotList();
	// MARK: - Blueprint side functions
protected:
	UFUNCTION(BlueprintImplementableEvent)
	USaveSlotItem* GetNewSlotData();

	UFUNCTION(BlueprintImplementableEvent)
	void MainButtonAction(int Index);

	UFUNCTION(BlueprintImplementableEvent)
	void DeleteButtonAction(int Index);
};
