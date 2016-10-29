////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiSeparator.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiSeparator::UNoesisGuiSeparator(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiSeparator::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::Separator* NoesisSeparator = NsDynamicCast<Noesis::Gui::Separator*>(InNoesisComponent);
	check(NoesisSeparator);
}

void UNoesisGuiSeparator::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::Separator* NoesisSeparator = NsDynamicCast<Noesis::Gui::Separator*>(NoesisComponent.GetPtr());
	check(NoesisSeparator)


}

void UNoesisGuiSeparator::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::Separator* NoesisSeparator = NsDynamicCast<Noesis::Gui::Separator*>(NoesisComponent.GetPtr());
	check(NoesisSeparator)


}

