// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveSlotElement.h"

#include "SaveSlotItem.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void USaveSlotElement::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	if (USaveSlotItem* SlotItem = Cast<USaveSlotItem>(ListItemObject)) {
		Thumbnail->SetBrushFromMaterial(SlotItem->Image);
		TitleLabel->SetText(SlotItem->Title);
		SubtitleLabel->SetText(SlotItem->Subtitle);
		TimeStampLabel->SetText(SlotItem->TimeStamp);
		Index = SlotItem->Index;
		bIsLoad = SlotItem->bIsLoad;
		
		ESlateVisibility DeleteVisibility = SlotItem->bCanBeDeleted ? ESlateVisibility::Visible : ESlateVisibility::Hidden;
		DeleteSlotButton->SetVisibility(DeleteVisibility);

		DeleteAction = SlotItem->DeleteAction;
		MainAction = SlotItem->MainAction;
		
		ActionButton->OnClicked.AddDynamic(this,&USaveSlotElement::USaveSlotElement::CallMainAction);
		DeleteSlotButton->OnClicked.AddDynamic(this,&USaveSlotElement::USaveSlotElement::CallOnDelete);
	}
}

void USaveSlotElement::CallMainAction()
{
	MainAction.Execute(Index);
}

void USaveSlotElement::CallOnDelete()
{
	DeleteAction.Execute(Index);
}



