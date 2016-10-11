////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiSizeAnimation.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiSizeAnimation::UNoesisGuiSizeAnimation(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiSizeAnimation::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::Animation<Noesis::Drawing::Size>* NoesisSizeAnimation = NsDynamicCast<Noesis::Gui::Animation<Noesis::Drawing::Size>*>(InNoesisComponent);
	check(NoesisSizeAnimation);

}

	void UNoesisGuiSizeAnimation::BeginDestroy()
{
	Noesis::Gui::Animation<Noesis::Drawing::Size>* NoesisSizeAnimation = NsDynamicCast<Noesis::Gui::Animation<Noesis::Drawing::Size>*>(NoesisComponent.GetPtr());
	if (!NoesisSizeAnimation)
		return Super::BeginDestroy();


	Super::BeginDestroy();
}

