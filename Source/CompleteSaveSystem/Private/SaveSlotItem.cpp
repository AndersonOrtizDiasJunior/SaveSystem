#include "SaveSlotItem.h"

void USaveSlotItem::SetParameters(int NewIndex, UMaterialInterface* NewImage, FText NewTitle, FText NewSubtitle, FText NewTimeStamp, bool NewCanBeDeleted, bool NewIsLoad)
{
	Index = NewIndex;
	Image = NewImage;
	Title = NewTitle;
	Subtitle = NewSubtitle;
	TimeStamp = NewTimeStamp;
	bCanBeDeleted = NewCanBeDeleted;
	bIsLoad = NewIsLoad;
}