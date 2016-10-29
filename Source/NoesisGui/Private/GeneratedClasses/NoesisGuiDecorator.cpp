////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiDecorator.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiDecorator::UNoesisGuiDecorator(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiDecorator::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::Decorator* NoesisDecorator = NsDynamicCast<Noesis::Gui::Decorator*>(InNoesisComponent);
	check(NoesisDecorator);
}

class UNoesisGuiUIElement* UNoesisGuiDecorator::GetChild()
{
	Noesis::Gui::Decorator* NoesisDecorator = NsDynamicCast<Noesis::Gui::Decorator*>(NoesisComponent.GetPtr());
	check(NoesisDecorator);
	return CastChecked<UNoesisGuiUIElement>(Instance->FindUnrealComponentForNoesisComponent(NoesisDecorator->GetChild()));
}

void UNoesisGuiDecorator::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::Decorator* NoesisDecorator = NsDynamicCast<Noesis::Gui::Decorator*>(NoesisComponent.GetPtr());
	check(NoesisDecorator)


}

void UNoesisGuiDecorator::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::Decorator* NoesisDecorator = NsDynamicCast<Noesis::Gui::Decorator*>(NoesisComponent.GetPtr());
	check(NoesisDecorator)


}

