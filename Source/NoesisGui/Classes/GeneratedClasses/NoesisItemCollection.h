////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisEnums.h"
#include "NoesisStructs.h"
#include "NoesisEvents.h"
#include "NoesisBaseComponent.h"
#include "NoesisItemCollection.generated.h"

UCLASS()
class NOESISGUI_API UNoesisItemCollection : public UNoesisBaseComponent
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
bool IsReadOnly();

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
void SetItemsControlOwner(class UNoesisItemsControl* ItemsControl);

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
void SetView(class UNoesisCollectionView* View);

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

};

