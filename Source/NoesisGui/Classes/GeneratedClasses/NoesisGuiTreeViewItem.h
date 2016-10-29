////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisGuiTypes.h"
#include "GeneratedClasses/NoesisGuiHeaderedItemsControl.h"
#include "NoesisGuiTreeViewItem.generated.h"

UCLASS()
class NOESISGUI_API UNoesisGuiTreeViewItem : public UNoesisGuiHeaderedItemsControl
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

	UPROPERTY(BlueprintAssignable, Category="NoesisGui")
	FNoesisGuiRoutedEventHandler Collapsed;

	UPROPERTY(BlueprintAssignable, Category="NoesisGui")
	FNoesisGuiRoutedEventHandler Expanded;

	UPROPERTY(BlueprintAssignable, Category="NoesisGui")
	FNoesisGuiRoutedEventHandler Selected;

	UPROPERTY(BlueprintAssignable, Category="NoesisGui")
	FNoesisGuiRoutedEventHandler Unselected;

	void Collapsed_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs);

	void Expanded_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs);

	void Selected_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs);

	void Unselected_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs);

	Noesis::Core::Delegate<void (Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs)> Collapsed_Delegate;

	Noesis::Core::Delegate<void (Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs)> Expanded_Delegate;

	Noesis::Core::Delegate<void (Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs)> Selected_Delegate;

	Noesis::Core::Delegate<void (Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs)> Unselected_Delegate;

};

