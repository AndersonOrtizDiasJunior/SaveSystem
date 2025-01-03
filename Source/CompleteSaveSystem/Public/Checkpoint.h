// Copyright 2024, Anderson Ortiz Dias Junior.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Checkpoint.generated.h"

UCLASS()
class COMPLETESAVESYSTEM_API ACheckpoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACheckpoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Default")
	class USphereComponent* Collision;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	FString CheckpointName;
};
