////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiRectAnimationUsingKeyFrames.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiRectAnimationUsingKeyFrames::UNoesisGuiRectAnimationUsingKeyFrames(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiRectAnimationUsingKeyFrames::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Rect>* NoesisRectAnimationUsingKeyFrames = NsDynamicCast<Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Rect>*>(InNoesisComponent);
	check(NoesisRectAnimationUsingKeyFrames);
}

void UNoesisGuiRectAnimationUsingKeyFrames::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Rect>* NoesisRectAnimationUsingKeyFrames = NsDynamicCast<Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Rect>*>(NoesisComponent.GetPtr());
	check(NoesisRectAnimationUsingKeyFrames)


}

void UNoesisGuiRectAnimationUsingKeyFrames::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Rect>* NoesisRectAnimationUsingKeyFrames = NsDynamicCast<Noesis::Gui::AnimationUsingKeyFrames<Noesis::Drawing::Rect>*>(NoesisComponent.GetPtr());
	check(NoesisRectAnimationUsingKeyFrames)


}

