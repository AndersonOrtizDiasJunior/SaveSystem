// Copyright 2024, Anderson Ortiz Dias Junior.

#include "ConfirmationModal.h"

#include "Components/Button.h"
#include "Components/TextBlock.h"

void UConfirmationModal::SetParameters(FText Title, FText Content, int Index, bool HasYesButton)
{
	isLoading = false;
	bHasYesButton = HasYesButton;
	TitleLabel->SetText(Title);
	ContentLabel->SetText(Content);
	SlotIndex = Index;
	YesButton->OnClicked.AddDynamic(this, &UConfirmationModal::OnClickYes);
}

void UConfirmationModal::OnClickYes()
{
	isLoading = true;
	YesAction.Broadcast(SlotIndex);
}
