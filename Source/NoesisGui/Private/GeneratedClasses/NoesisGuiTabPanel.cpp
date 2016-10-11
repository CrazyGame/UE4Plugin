////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiTabPanel.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiTabPanel::UNoesisGuiTabPanel(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiTabPanel::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TabPanel* NoesisTabPanel = NsDynamicCast<Noesis::Gui::TabPanel*>(InNoesisComponent);
	check(NoesisTabPanel);

}

	void UNoesisGuiTabPanel::BeginDestroy()
{
	Noesis::Gui::TabPanel* NoesisTabPanel = NsDynamicCast<Noesis::Gui::TabPanel*>(NoesisComponent.GetPtr());
	if (!NoesisTabPanel)
		return Super::BeginDestroy();


	Super::BeginDestroy();
}

