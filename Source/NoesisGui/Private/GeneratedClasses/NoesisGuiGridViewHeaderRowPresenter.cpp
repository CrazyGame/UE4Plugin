////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiGridViewHeaderRowPresenter.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiGridViewHeaderRowPresenter::UNoesisGuiGridViewHeaderRowPresenter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiGridViewHeaderRowPresenter::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::GridViewHeaderRowPresenter* NoesisGridViewHeaderRowPresenter = NsDynamicCast<Noesis::Gui::GridViewHeaderRowPresenter*>(InNoesisComponent);
	check(NoesisGridViewHeaderRowPresenter);

}

	void UNoesisGuiGridViewHeaderRowPresenter::BeginDestroy()
{
	Super::BeginDestroy();

	Noesis::Gui::GridViewHeaderRowPresenter* NoesisGridViewHeaderRowPresenter = NsDynamicCast<Noesis::Gui::GridViewHeaderRowPresenter*>(NoesisComponent.GetPtr());
	if (!NoesisGridViewHeaderRowPresenter)
		return;

}

