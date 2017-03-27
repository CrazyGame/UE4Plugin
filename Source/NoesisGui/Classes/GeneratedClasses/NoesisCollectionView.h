////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisEnums.h"
#include "NoesisStructs.h"
#include "NoesisEvents.h"
#include "NoesisBaseComponent.h"
#include "NoesisCollectionView.generated.h"

UCLASS(BlueprintType)
class NOESISGUI_API UNoesisCollectionView : public UNoesisBaseComponent
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	int32 Count();

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisBaseComponent* GetItemAt(int32 Index);

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisIList* GetSourceCollection();

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	int32 IndexOf(class UNoesisBaseComponent* Item);

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

};

