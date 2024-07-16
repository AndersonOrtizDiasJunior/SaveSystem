#pragma once

#include "SaveSlotItem.generated.h"

UCLASS(BlueprintType)
class USaveSlotItem: public  UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, Category = "Parameters")
	UMaterialInterface* Image;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters")
	FText Title;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters")
	FText Subtitle;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters")
	FText TimeStamp;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters")
	int Index;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters")
	bool bCanBeDeleted;

	UPROPERTY(BlueprintReadWrite, Category = "Parameters")
	bool bIsLoad;

	DECLARE_DELEGATE_OneParam(SlotActionDelegate, int);

	SlotActionDelegate DeleteAction;
	
	SlotActionDelegate MainAction;
	
	UFUNCTION(BlueprintCallable, Category = "Parameters")
	void SetParameters(int NewIndex, UMaterialInterface* NewImage, FText NewTitle, FText NewSubtitle, FText NewTimeStamp, bool NewCanBeDeleted, bool NewIsLoad);
};
