////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiScaleTransform.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiScaleTransform::UNoesisGuiScaleTransform(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiScaleTransform::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::ScaleTransform* NoesisScaleTransform = NsDynamicCast<Noesis::Gui::ScaleTransform*>(InNoesisComponent);
	check(NoesisScaleTransform);
}

void UNoesisGuiScaleTransform::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::ScaleTransform* NoesisScaleTransform = NsDynamicCast<Noesis::Gui::ScaleTransform*>(NoesisComponent.GetPtr());
	check(NoesisScaleTransform)


}

void UNoesisGuiScaleTransform::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::ScaleTransform* NoesisScaleTransform = NsDynamicCast<Noesis::Gui::ScaleTransform*>(NoesisComponent.GetPtr());
	check(NoesisScaleTransform)


}

