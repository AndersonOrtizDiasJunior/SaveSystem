#pragma once

#include "SaveSlotItem.generated.h"

UCLASS(BlueprintType)
class USaveSlotItem: public  UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
	UMaterialInterface* Image;

	UPROPERTY(BlueprintReadWrite)
	FText Title;

	UPROPERTY(BlueprintReadWrite)
	FText Subtitle;

	UPROPERTY(BlueprintReadWrite)
	FText TimeStamp;

	UPROPERTY(BlueprintReadWrite)
	int Index;

	UPROPERTY(BlueprintReadWrite)
	bool bCanBeDeleted;

	UPROPERTY(BlueprintReadWrite)
	bool bIsLoad;

	DECLARE_DELEGATE_OneParam(SlotActionDelegate, int);

	SlotActionDelegate DeleteAction;
	
	SlotActionDelegate MainAction;
	
	UFUNCTION(BlueprintCallable)
	void SetParameters(int NewIndex, UMaterialInterface* NewImage, FText NewTitle, FText NewSubtitle, FText NewTimeStamp, bool NewCanBeDeleted, bool NewIsLoad);
};
