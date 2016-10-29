////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiStringKeyFrame.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiStringKeyFrame::UNoesisGuiStringKeyFrame(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiStringKeyFrame::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::KeyFrame<NsString>* NoesisStringKeyFrame = NsDynamicCast<Noesis::Gui::KeyFrame<NsString>*>(InNoesisComponent);
	check(NoesisStringKeyFrame);
}

void UNoesisGuiStringKeyFrame::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::KeyFrame<NsString>* NoesisStringKeyFrame = NsDynamicCast<Noesis::Gui::KeyFrame<NsString>*>(NoesisComponent.GetPtr());
	check(NoesisStringKeyFrame)


}

void UNoesisGuiStringKeyFrame::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::KeyFrame<NsString>* NoesisStringKeyFrame = NsDynamicCast<Noesis::Gui::KeyFrame<NsString>*>(NoesisComponent.GetPtr());
	check(NoesisStringKeyFrame)


}

