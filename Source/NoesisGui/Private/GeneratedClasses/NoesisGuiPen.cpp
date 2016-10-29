////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiPen.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiPen::UNoesisGuiPen(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiPen::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::Pen* NoesisPen = NsDynamicCast<Noesis::Gui::Pen*>(InNoesisComponent);
	check(NoesisPen);
}

bool UNoesisGuiPen::IsRenderable()
{
	Noesis::Gui::Pen* NoesisPen = NsDynamicCast<Noesis::Gui::Pen*>(NoesisComponent.GetPtr());
	check(NoesisPen);
	return NoesisPen->IsRenderable();
}

void UNoesisGuiPen::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::Pen* NoesisPen = NsDynamicCast<Noesis::Gui::Pen*>(NoesisComponent.GetPtr());
	check(NoesisPen)


}

void UNoesisGuiPen::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::Pen* NoesisPen = NsDynamicCast<Noesis::Gui::Pen*>(NoesisComponent.GetPtr());
	check(NoesisPen)


}

