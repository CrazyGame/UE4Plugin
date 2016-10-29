////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiGradientStop.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiGradientStop::UNoesisGuiGradientStop(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiGradientStop::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::GradientStop* NoesisGradientStop = NsDynamicCast<Noesis::Gui::GradientStop*>(InNoesisComponent);
	check(NoesisGradientStop);
}

void UNoesisGuiGradientStop::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::GradientStop* NoesisGradientStop = NsDynamicCast<Noesis::Gui::GradientStop*>(NoesisComponent.GetPtr());
	check(NoesisGradientStop)


}

void UNoesisGuiGradientStop::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::GradientStop* NoesisGradientStop = NsDynamicCast<Noesis::Gui::GradientStop*>(NoesisComponent.GetPtr());
	check(NoesisGradientStop)


}

