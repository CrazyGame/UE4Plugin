////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiColorAnimationUsingKeyFrames.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiColorAnimationUsingKeyFrames::UNoesisGuiColorAnimationUsingKeyFrames(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiColorAnimationUsingKeyFrames::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Color>* NoesisColorAnimationUsingKeyFrames = NsDynamicCast<Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Color>*>(InNoesisComponent);
	check(NoesisColorAnimationUsingKeyFrames);
}

void UNoesisGuiColorAnimationUsingKeyFrames::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Color>* NoesisColorAnimationUsingKeyFrames = NsDynamicCast<Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Color>*>(NoesisComponent.GetPtr());
	check(NoesisColorAnimationUsingKeyFrames)


}

void UNoesisGuiColorAnimationUsingKeyFrames::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Color>* NoesisColorAnimationUsingKeyFrames = NsDynamicCast<Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Color>*>(NoesisComponent.GetPtr());
	check(NoesisColorAnimationUsingKeyFrames)


}

