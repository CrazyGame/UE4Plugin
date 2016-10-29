////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiTriggerCollection.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiTriggerCollection::UNoesisGuiTriggerCollection(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiTriggerCollection::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TriggerCollection* NoesisTriggerCollection = NsDynamicCast<Noesis::Gui::TriggerCollection*>(InNoesisComponent);
	check(NoesisTriggerCollection);
}

void UNoesisGuiTriggerCollection::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::TriggerCollection* NoesisTriggerCollection = NsDynamicCast<Noesis::Gui::TriggerCollection*>(NoesisComponent.GetPtr());
	check(NoesisTriggerCollection)


}

void UNoesisGuiTriggerCollection::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::TriggerCollection* NoesisTriggerCollection = NsDynamicCast<Noesis::Gui::TriggerCollection*>(NoesisComponent.GetPtr());
	check(NoesisTriggerCollection)


}

