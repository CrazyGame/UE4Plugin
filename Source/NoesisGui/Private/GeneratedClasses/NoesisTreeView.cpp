////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisTreeView.h"

using namespace Noesis;
using namespace Gui;

UNoesisTreeView::UNoesisTreeView(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisTreeView::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TreeView* NoesisTreeView = NsDynamicCast<Noesis::Gui::TreeView*>(InNoesisComponent);
	check(NoesisTreeView);
}

class UNoesisBaseComponent* UNoesisTreeView::GetSelectedItem()
{
	Noesis::Gui::TreeView* NoesisTreeView = NsDynamicCast<Noesis::Gui::TreeView*>(NoesisComponent.GetPtr());
	check(NoesisTreeView);
	return CastChecked<UNoesisBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(NoesisTreeView->GetSelectedItem()));
}

void UNoesisTreeView::ItemClicked(class UNoesisTreeViewItem* InTvi)
{
	Noesis::Gui::TreeView* NoesisTreeView = NsDynamicCast<Noesis::Gui::TreeView*>(NoesisComponent.GetPtr());
	check(NoesisTreeView);
	TreeViewItem* NoesisInTvi = NsDynamicCast<TreeViewItem*>(InTvi->NoesisComponent.GetPtr());
	return NoesisTreeView->ItemClicked(NoesisInTvi);
}

void UNoesisTreeView::SelectedItemChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedPropertyChangedEventArgs<Noesis::Ptr<Noesis::BaseComponent> >& InArgs)
{
	if (!SelectedItemChanged.IsBound() || !Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisBaseComponent* Sender = CastChecked<UNoesisBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisBaseComponentPropertyChangedEventArgs Args(Instance, InArgs);
	SelectedItemChanged.Broadcast(Sender, Args);
}

void UNoesisTreeView::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::TreeView* NoesisTreeView = NsDynamicCast<Noesis::Gui::TreeView*>(NoesisComponent.GetPtr());
	check(NoesisTreeView)

	SelectedItemChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisTreeView::SelectedItemChanged_Private);
	if (SelectedItemChanged.IsBound())
	{
		NoesisTreeView->SelectedItemChanged() += SelectedItemChanged_Delegate;
	}

}

void UNoesisTreeView::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::TreeView* NoesisTreeView = NsDynamicCast<Noesis::Gui::TreeView*>(NoesisComponent.GetPtr());
	check(NoesisTreeView)

	if (SelectedItemChanged.IsBound())
	{
		NoesisTreeView->SelectedItemChanged() -= SelectedItemChanged_Delegate;
	}

}

