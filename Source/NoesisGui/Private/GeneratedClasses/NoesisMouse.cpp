////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisMouse.h"

using namespace Noesis;
using namespace Gui;

UNoesisMouse::UNoesisMouse(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisMouse::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::Mouse* NoesisMouse = NsDynamicCast<Noesis::Gui::Mouse*>(InNoesisComponent);
	check(NoesisMouse);
}

class UNoesisUIElement* UNoesisMouse::GetCaptured()
{
	Noesis::Gui::Mouse* NoesisMouse = NsDynamicCast<Noesis::Gui::Mouse*>(NoesisComponent.GetPtr());
	check(NoesisMouse);
	return CastChecked<UNoesisUIElement>(Instance->FindUnrealComponentForNoesisComponent(NoesisMouse->GetCaptured()));
}

FNoesisDrawingPointi UNoesisMouse::GetPosition()
{
	Noesis::Gui::Mouse* NoesisMouse = NsDynamicCast<Noesis::Gui::Mouse*>(NoesisComponent.GetPtr());
	check(NoesisMouse);
	return FNoesisDrawingPointi(NoesisMouse->GetPosition());
}

void UNoesisMouse::ResetState()
{
	Noesis::Gui::Mouse* NoesisMouse = NsDynamicCast<Noesis::Gui::Mouse*>(NoesisComponent.GetPtr());
	check(NoesisMouse);
	return NoesisMouse->ResetState();
}

void UNoesisMouse::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::Mouse* NoesisMouse = NsDynamicCast<Noesis::Gui::Mouse*>(NoesisComponent.GetPtr());
	check(NoesisMouse)


}

void UNoesisMouse::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::Mouse* NoesisMouse = NsDynamicCast<Noesis::Gui::Mouse*>(NoesisComponent.GetPtr());
	check(NoesisMouse)


}

