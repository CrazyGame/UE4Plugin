////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisObjectKeyFrameCollection.h"

using namespace Noesis;
using namespace Gui;

UNoesisObjectKeyFrameCollection::UNoesisObjectKeyFrameCollection(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisObjectKeyFrameCollection::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<Noesis::Ptr<Noesis::Core::BaseComponent> >>* NoesisObjectKeyFrameCollection = NsDynamicCast<Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<Noesis::Ptr<Noesis::Core::BaseComponent> >>*>(InNoesisComponent);
	check(NoesisObjectKeyFrameCollection);
}

void UNoesisObjectKeyFrameCollection::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<Noesis::Ptr<Noesis::Core::BaseComponent> >>* NoesisObjectKeyFrameCollection = NsDynamicCast<Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<Noesis::Ptr<Noesis::Core::BaseComponent> >>*>(NoesisComponent.GetPtr());
	check(NoesisObjectKeyFrameCollection)


}

void UNoesisObjectKeyFrameCollection::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<Noesis::Ptr<Noesis::Core::BaseComponent> >>* NoesisObjectKeyFrameCollection = NsDynamicCast<Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<Noesis::Ptr<Noesis::Core::BaseComponent> >>*>(NoesisComponent.GetPtr());
	check(NoesisObjectKeyFrameCollection)


}

