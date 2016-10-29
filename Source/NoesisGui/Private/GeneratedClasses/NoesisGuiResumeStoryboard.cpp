////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiResumeStoryboard.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiResumeStoryboard::UNoesisGuiResumeStoryboard(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiResumeStoryboard::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::ResumeStoryboard* NoesisResumeStoryboard = NsDynamicCast<Noesis::Gui::ResumeStoryboard*>(InNoesisComponent);
	check(NoesisResumeStoryboard);
}

void UNoesisGuiResumeStoryboard::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::ResumeStoryboard* NoesisResumeStoryboard = NsDynamicCast<Noesis::Gui::ResumeStoryboard*>(NoesisComponent.GetPtr());
	check(NoesisResumeStoryboard)


}

void UNoesisGuiResumeStoryboard::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::ResumeStoryboard* NoesisResumeStoryboard = NsDynamicCast<Noesis::Gui::ResumeStoryboard*>(NoesisComponent.GetPtr());
	check(NoesisResumeStoryboard)


}

