// Copyright 2024, Anderson Ortiz Dias Junior.

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

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Slots")
	class UListView* SlotListView;

	UPROPERTY(BlueprintReadWrite, meta=(ExposeOnSpawn = true), Category = "Slots")
	TArray<USaveSlotItem*> Slots;
	
	UPROPERTY(BlueprintReadWrite, meta=(ExposeOnSpawn = true), Category = "Parameters")
    bool bIsLoadGame;

	UFUNCTION(BlueprintCallable, Category = "Slots")
	void UpdateSlotList();
	// MARK: - Blueprint side functions
protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "Slots")
	USaveSlotItem* GetNewSlotData();

	UFUNCTION(BlueprintImplementableEvent, Category = "Slots")
	void MainButtonAction(int Index);

	UFUNCTION(BlueprintImplementableEvent, Category = "Slots")
	void DeleteButtonAction(int Index);
};
