////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisBooleanKeyFrameCollection.h"

using namespace Noesis;
using namespace Gui;

UNoesisBooleanKeyFrameCollection::UNoesisBooleanKeyFrameCollection(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisBooleanKeyFrameCollection::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<NsBool>>* NoesisBooleanKeyFrameCollection = NsDynamicCast<Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<NsBool>>*>(InNoesisComponent);
	check(NoesisBooleanKeyFrameCollection);
}

void UNoesisBooleanKeyFrameCollection::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<NsBool>>* NoesisBooleanKeyFrameCollection = NsDynamicCast<Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<NsBool>>*>(NoesisComponent.GetPtr());
	check(NoesisBooleanKeyFrameCollection)


}

void UNoesisBooleanKeyFrameCollection::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<NsBool>>* NoesisBooleanKeyFrameCollection = NsDynamicCast<Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<NsBool>>*>(NoesisComponent.GetPtr());
	check(NoesisBooleanKeyFrameCollection)


}

