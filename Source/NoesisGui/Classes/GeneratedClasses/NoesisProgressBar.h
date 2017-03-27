////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisEnums.h"
#include "NoesisStructs.h"
#include "NoesisEvents.h"
#include "GeneratedClasses/NoesisRangeBase.h"
#include "NoesisProgressBar.generated.h"

UCLASS(BlueprintType)
class NOESISGUI_API UNoesisProgressBar : public UNoesisRangeBase
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	// Property IsIndeterminate
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	bool GetIsIndeterminate();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetIsIndeterminate(bool InIsIndeterminate);

	// Property Orientation
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	ENoesisOrientation GetOrientation();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetOrientation(ENoesisOrientation InOrientation);

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

};

