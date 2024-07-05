// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "ConfirmationModal.generated.h"

/**
 * 
 */
UCLASS()
class COMPLETESAVESYSTEM_API UConfirmationModal : public UUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActionDelegate, int, Index);

	UPROPERTY(BlueprintAssignable, Category = "Action")
	FActionDelegate YesAction;

	UFUNCTION(BlueprintCallable) void SetParameters(FText Title, FText Content, int Index, bool HasYesButton);
	
protected:

	UPROPERTY(meta=(BindWidget))
	class UTextBlock* TitleLabel;
	
	UPROPERTY(meta=(BindWidget))
	UTextBlock* ContentLabel;

	UPROPERTY(meta=(BindWidget))
	class UButton* YesButton;

	UPROPERTY(meta=(BindWidget))
	UButton* NoButton;

	UPROPERTY(BlueprintReadOnly)
	bool isLoading = false;
	
	UPROPERTY(BlueprintReadOnly)
	bool bHasYesButton;

	UFUNCTION()
	void OnClickYes();
	
	int SlotIndex;
};