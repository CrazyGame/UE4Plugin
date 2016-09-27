////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiCompositeTransform.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiCompositeTransform::UNoesisGuiCompositeTransform(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiCompositeTransform::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::CompositeTransform* NoesisCompositeTransform = NsDynamicCast<Noesis::Gui::CompositeTransform*>(InNoesisComponent);
	check(NoesisCompositeTransform);

}

	void UNoesisGuiCompositeTransform::BeginDestroy()
{
	Super::BeginDestroy();

	Noesis::Gui::CompositeTransform* NoesisCompositeTransform = NsDynamicCast<Noesis::Gui::CompositeTransform*>(NoesisComponent.GetPtr());
	if (!NoesisCompositeTransform)
		return;

}

