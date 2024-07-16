// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Blueprint/UserWidget.h"
#include "SaveSlotElement.generated.h"

/**
 * 
 */
UCLASS()
class COMPLETESAVESYSTEM_API USaveSlotElement : public UUserWidget,  public IUserObjectListEntry
{
	GENERATED_BODY()

	//MARK: - Delegates
public:
	DECLARE_DELEGATE_OneParam(SlotActionDelegate, int);

	SlotActionDelegate DeleteAction;
	
	SlotActionDelegate MainAction;

	UFUNCTION()
	void CallOnDelete();

	UFUNCTION()
	void CallMainAction();
	
	// MARK: - Bind Widgets
protected:
	UPROPERTY(meta=(BindWidget))
	class UTextBlock* TitleLabel;
	
	UPROPERTY(meta=(BindWidget))
	 UTextBlock* SubtitleLabel;
	
	UPROPERTY(meta=(BindWidget))
	 UTextBlock* TimeStampLabel;

	UPROPERTY(meta=(BindWidget))
	class UImage* Thumbnail;

	UPROPERTY(meta=(BindWidget))
	class UButton* DeleteSlotButton;

	UPROPERTY(meta=(BindWidget))
	UButton* ActionButton;
	
	UPROPERTY(BlueprintReadWrite, Category = "Parameters")
	int Index;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters")
	bool bIsLoad;
	
	// MARK: - IUserObjectListEntry
protected:
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;
};
