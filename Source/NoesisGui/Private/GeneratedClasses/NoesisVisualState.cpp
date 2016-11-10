////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisVisualState.h"

using namespace Noesis;
using namespace Gui;

UNoesisVisualState::UNoesisVisualState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisVisualState::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::VisualState* NoesisVisualState = NsDynamicCast<Noesis::Gui::VisualState*>(InNoesisComponent);
	check(NoesisVisualState);
}

FName UNoesisVisualState::GetName()
{
	Noesis::Gui::VisualState* NoesisVisualState = NsDynamicCast<Noesis::Gui::VisualState*>(NoesisComponent.GetPtr());
	check(NoesisVisualState);
	return FName(NoesisVisualState->GetName().GetStr());
}

void UNoesisVisualState::SetName(FName InName)
{
	Noesis::Gui::VisualState* NoesisVisualState = NsDynamicCast<Noesis::Gui::VisualState*>(NoesisComponent.GetPtr());
	check(NoesisVisualState);
	NoesisVisualState->SetName(Noesis::Core::Symbol(InName.GetPlainANSIString()));
}

class UNoesisStoryboard* UNoesisVisualState::GetStoryboard()
{
	Noesis::Gui::VisualState* NoesisVisualState = NsDynamicCast<Noesis::Gui::VisualState*>(NoesisComponent.GetPtr());
	check(NoesisVisualState);
	return CastChecked<UNoesisStoryboard>(Instance->FindUnrealComponentForNoesisComponent(NoesisVisualState->GetStoryboard()));
}

void UNoesisVisualState::SetStoryboard(class UNoesisStoryboard* InStoryboard)
{
	Noesis::Gui::VisualState* NoesisVisualState = NsDynamicCast<Noesis::Gui::VisualState*>(NoesisComponent.GetPtr());
	check(NoesisVisualState);
	NoesisVisualState->SetStoryboard(NsDynamicCast<Storyboard*>(InStoryboard->NoesisComponent.GetPtr()));
}

void UNoesisVisualState::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::VisualState* NoesisVisualState = NsDynamicCast<Noesis::Gui::VisualState*>(NoesisComponent.GetPtr());
	check(NoesisVisualState)


}

void UNoesisVisualState::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::VisualState* NoesisVisualState = NsDynamicCast<Noesis::Gui::VisualState*>(NoesisComponent.GetPtr());
	check(NoesisVisualState)


}

