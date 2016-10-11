////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiDiscretePointKeyFrame.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiDiscretePointKeyFrame::UNoesisGuiDiscretePointKeyFrame(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiDiscretePointKeyFrame::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::DiscreteKeyFrame<Noesis::Drawing::Point>* NoesisDiscretePointKeyFrame = NsDynamicCast<Noesis::Gui::DiscreteKeyFrame<Noesis::Drawing::Point>*>(InNoesisComponent);
	check(NoesisDiscretePointKeyFrame);

}

	void UNoesisGuiDiscretePointKeyFrame::BeginDestroy()
{
	Noesis::Gui::DiscreteKeyFrame<Noesis::Drawing::Point>* NoesisDiscretePointKeyFrame = NsDynamicCast<Noesis::Gui::DiscreteKeyFrame<Noesis::Drawing::Point>*>(NoesisComponent.GetPtr());
	if (!NoesisDiscretePointKeyFrame)
		return Super::BeginDestroy();


	Super::BeginDestroy();
}

