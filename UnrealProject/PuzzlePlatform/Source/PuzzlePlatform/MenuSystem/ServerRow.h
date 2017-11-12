// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ServerRow.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORM_API UServerRow : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ServerName;
	
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ConnectionFraction;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* HostUser;


	void Setup(class UMainMenu* Parent, uint32 Index);

	UPROPERTY(BlueprintReadOnly)
	bool Selected = false;

private:
	UPROPERTY()
	class UMainMenu* Parent;
	uint32 Index;

	UPROPERTY(meta = (BindWidget))
	class UButton* RowButton;

	UFUNCTION()
	void OnClicked();
};
