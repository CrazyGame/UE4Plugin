////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiTreeView.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiTreeView::UNoesisGuiTreeView(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiTreeView::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TreeView* NoesisTreeView = NsDynamicCast<Noesis::Gui::TreeView*>(InNoesisComponent);
	check(NoesisTreeView);
}

void UNoesisGuiTreeView::ItemClicked(class UNoesisGuiTreeViewItem* InTvi)
{
	Noesis::Gui::TreeView* NoesisTreeView = NsDynamicCast<Noesis::Gui::TreeView*>(NoesisComponent.GetPtr());
	check(NoesisTreeView);
	TreeViewItem* NoesisInTvi = NsDynamicCast<TreeViewItem*>(InTvi->NoesisComponent.GetPtr());
	return NoesisTreeView->ItemClicked(NoesisInTvi);
}

void UNoesisGuiTreeView::SelectedItemChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedPropertyChangedEventArgs<Noesis::Ptr<Noesis::BaseComponent> >& InArgs)
{
	if (!SelectedItemChanged.IsBound() || !Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiBaseComponentPropertyChangedEventArgs Args(Instance, InArgs);
	SelectedItemChanged.Broadcast(Sender, Args);
}

void UNoesisGuiTreeView::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::TreeView* NoesisTreeView = NsDynamicCast<Noesis::Gui::TreeView*>(NoesisComponent.GetPtr());
	check(NoesisTreeView)

	SelectedItemChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiTreeView::SelectedItemChanged_Private);
	if (SelectedItemChanged.IsBound())
	{
		NoesisTreeView->SelectedItemChanged() += SelectedItemChanged_Delegate;
	}

}

void UNoesisGuiTreeView::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::TreeView* NoesisTreeView = NsDynamicCast<Noesis::Gui::TreeView*>(NoesisComponent.GetPtr());
	check(NoesisTreeView)

	if (SelectedItemChanged.IsBound())
	{
		NoesisTreeView->SelectedItemChanged() -= SelectedItemChanged_Delegate;
	}

}

