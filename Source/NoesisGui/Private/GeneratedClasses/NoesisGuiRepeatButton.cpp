////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiRepeatButton.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiRepeatButton::UNoesisGuiRepeatButton(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiRepeatButton::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::RepeatButton* NoesisRepeatButton = NsDynamicCast<Noesis::Gui::RepeatButton*>(InNoesisComponent);
	check(NoesisRepeatButton);

}

	void UNoesisGuiRepeatButton::BeginDestroy()
{
	Super::BeginDestroy();

	Noesis::Gui::RepeatButton* NoesisRepeatButton = NsDynamicCast<Noesis::Gui::RepeatButton*>(NoesisComponent.GetPtr());
	if (!NoesisRepeatButton)
		return;

}

