////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisGuiTypes.h"
#include "GeneratedClasses/NoesisGuiControl.h"
#include "NoesisGuiRangeBase.generated.h"

UCLASS()
class NOESISGUI_API UNoesisGuiRangeBase : public UNoesisGuiControl
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

	UPROPERTY(BlueprintAssignable, Category="NoesisGui")
	FNoesisGuiFloatPropertyChangedEventHandler ValueChanged;

	void ValueChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedPropertyChangedEventArgs<NsFloat32>& InArgs);

	Noesis::Core::Delegate<void (Noesis::Core::BaseComponent* InSender, const Noesis::RoutedPropertyChangedEventArgs<NsFloat32>& InArgs)> ValueChanged_Delegate;

};

