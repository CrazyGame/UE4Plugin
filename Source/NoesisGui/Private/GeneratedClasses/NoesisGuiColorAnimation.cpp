////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiColorAnimation.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiColorAnimation::UNoesisGuiColorAnimation(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiColorAnimation::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::Animation<Noesis::Drawing::Color>* NoesisColorAnimation = NsDynamicCast<Noesis::Gui::Animation<Noesis::Drawing::Color>*>(InNoesisComponent);
	check(NoesisColorAnimation);

}

	void UNoesisGuiColorAnimation::BeginDestroy()
{
	Noesis::Gui::Animation<Noesis::Drawing::Color>* NoesisColorAnimation = NsDynamicCast<Noesis::Gui::Animation<Noesis::Drawing::Color>*>(NoesisComponent.GetPtr());
	if (!NoesisColorAnimation)
		return Super::BeginDestroy();


	Super::BeginDestroy();
}

