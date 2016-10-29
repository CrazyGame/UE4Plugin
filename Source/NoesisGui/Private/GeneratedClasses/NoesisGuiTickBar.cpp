////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiTickBar.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiTickBar::UNoesisGuiTickBar(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiTickBar::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TickBar* NoesisTickBar = NsDynamicCast<Noesis::Gui::TickBar*>(InNoesisComponent);
	check(NoesisTickBar);
}

void UNoesisGuiTickBar::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::TickBar* NoesisTickBar = NsDynamicCast<Noesis::Gui::TickBar*>(NoesisComponent.GetPtr());
	check(NoesisTickBar)


}

void UNoesisGuiTickBar::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::TickBar* NoesisTickBar = NsDynamicCast<Noesis::Gui::TickBar*>(NoesisComponent.GetPtr());
	check(NoesisTickBar)


}

