// Copyright 2024, Anderson Ortiz Dias Junior.


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

	for (USaveSlotItem* SaveSlot : Slots)
	{
		SaveSlot->bIsLoad = bIsLoadGame;
		SaveSlot->MainAction.BindUFunction(this, "MainButtonAction");
		SaveSlot->DeleteAction.BindUFunction(this, "DeleteButtonAction");
	}
		
	SlotListView->SetListItems<USaveSlotItem*>(Slots);
}
