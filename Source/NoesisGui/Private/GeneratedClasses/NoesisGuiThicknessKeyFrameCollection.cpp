////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiThicknessKeyFrameCollection.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiThicknessKeyFrameCollection::UNoesisGuiThicknessKeyFrameCollection(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiThicknessKeyFrameCollection::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<Noesis::Drawing::Thickness>>* NoesisThicknessKeyFrameCollection = NsDynamicCast<Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<Noesis::Drawing::Thickness>>*>(InNoesisComponent);
	check(NoesisThicknessKeyFrameCollection);

}

	void UNoesisGuiThicknessKeyFrameCollection::BeginDestroy()
{
	Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<Noesis::Drawing::Thickness>>* NoesisThicknessKeyFrameCollection = NsDynamicCast<Noesis::Gui::TypedFreezableCollection<Noesis::Gui::KeyFrame<Noesis::Drawing::Thickness>>*>(NoesisComponent.GetPtr());
	if (!NoesisThicknessKeyFrameCollection)
		return Super::BeginDestroy();


	Super::BeginDestroy();
}

