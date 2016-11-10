////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisColorAnimation.h"

using namespace Noesis;
using namespace Gui;

UNoesisColorAnimation::UNoesisColorAnimation(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisColorAnimation::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::Animation<Noesis::Drawing::Color>* NoesisColorAnimation = NsDynamicCast<Noesis::Gui::Animation<Noesis::Drawing::Color>*>(InNoesisComponent);
	check(NoesisColorAnimation);
}

void UNoesisColorAnimation::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::Animation<Noesis::Drawing::Color>* NoesisColorAnimation = NsDynamicCast<Noesis::Gui::Animation<Noesis::Drawing::Color>*>(NoesisComponent.GetPtr());
	check(NoesisColorAnimation)


}

void UNoesisColorAnimation::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::Animation<Noesis::Drawing::Color>* NoesisColorAnimation = NsDynamicCast<Noesis::Gui::Animation<Noesis::Drawing::Color>*>(NoesisComponent.GetPtr());
	check(NoesisColorAnimation)


}

