// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveSlotsList.h"

#include "SaveSlotItem.h"
#include "Components/ListView.h"

void USaveSlotsList::NativeConstruct()
{
	Super::NativeConstruct();
	UpdateSlotList();
}

void USaveSlotsList::UpdateSlotList()
{
	if (!bIsLoadGame)
	{
		USaveSlotItem* NewSlot = GetNewSlotData();
		if (NewSlot != nullptr)
		{
			Slots.Add(NewSlot);
		}
	}

	for (USaveSlotItem* Slot : Slots)
	{
		Slot->bIsLoad = bIsLoadGame;
		Slot->MainAction.BindUFunction(this, "MainButtonAction");
		Slot->DeleteAction.BindUFunction(this, "DeleteButtonAction");
	}
		
	SlotListView->SetListItems<USaveSlotItem*>(Slots);
}
