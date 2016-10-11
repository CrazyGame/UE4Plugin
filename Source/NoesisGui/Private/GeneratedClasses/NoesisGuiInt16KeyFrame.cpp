////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiInt16KeyFrame.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiInt16KeyFrame::UNoesisGuiInt16KeyFrame(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiInt16KeyFrame::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::KeyFrame<NsInt16>* NoesisInt16KeyFrame = NsDynamicCast<Noesis::Gui::KeyFrame<NsInt16>*>(InNoesisComponent);
	check(NoesisInt16KeyFrame);

}

	void UNoesisGuiInt16KeyFrame::BeginDestroy()
{
	Noesis::Gui::KeyFrame<NsInt16>* NoesisInt16KeyFrame = NsDynamicCast<Noesis::Gui::KeyFrame<NsInt16>*>(NoesisComponent.GetPtr());
	if (!NoesisInt16KeyFrame)
		return Super::BeginDestroy();


	Super::BeginDestroy();
}

