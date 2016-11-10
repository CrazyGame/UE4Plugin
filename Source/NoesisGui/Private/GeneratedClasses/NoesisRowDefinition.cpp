////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisRowDefinition.h"

using namespace Noesis;
using namespace Gui;

UNoesisRowDefinition::UNoesisRowDefinition(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisRowDefinition::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::RowDefinition* NoesisRowDefinition = NsDynamicCast<Noesis::Gui::RowDefinition*>(InNoesisComponent);
	check(NoesisRowDefinition);
}

FNoesisGridLength UNoesisRowDefinition::GetHeight()
{
	Noesis::Gui::RowDefinition* NoesisRowDefinition = NsDynamicCast<Noesis::Gui::RowDefinition*>(NoesisComponent.GetPtr());
	check(NoesisRowDefinition);
	return FNoesisGridLength(NoesisRowDefinition->GetHeight());
}

void UNoesisRowDefinition::SetHeight(FNoesisGridLength InHeight)
{
	Noesis::Gui::RowDefinition* NoesisRowDefinition = NsDynamicCast<Noesis::Gui::RowDefinition*>(NoesisComponent.GetPtr());
	check(NoesisRowDefinition);
	NoesisRowDefinition->SetHeight(InHeight.ToNoesis());
}

float UNoesisRowDefinition::GetMaxHeight()
{
	Noesis::Gui::RowDefinition* NoesisRowDefinition = NsDynamicCast<Noesis::Gui::RowDefinition*>(NoesisComponent.GetPtr());
	check(NoesisRowDefinition);
	return (float)NoesisRowDefinition->GetMaxHeight();
}

void UNoesisRowDefinition::SetMaxHeight(float InMaxHeight)
{
	Noesis::Gui::RowDefinition* NoesisRowDefinition = NsDynamicCast<Noesis::Gui::RowDefinition*>(NoesisComponent.GetPtr());
	check(NoesisRowDefinition);
	NoesisRowDefinition->SetMaxHeight(InMaxHeight);
}

float UNoesisRowDefinition::GetMinHeight()
{
	Noesis::Gui::RowDefinition* NoesisRowDefinition = NsDynamicCast<Noesis::Gui::RowDefinition*>(NoesisComponent.GetPtr());
	check(NoesisRowDefinition);
	return (float)NoesisRowDefinition->GetMinHeight();
}

void UNoesisRowDefinition::SetMinHeight(float InMinHeight)
{
	Noesis::Gui::RowDefinition* NoesisRowDefinition = NsDynamicCast<Noesis::Gui::RowDefinition*>(NoesisComponent.GetPtr());
	check(NoesisRowDefinition);
	NoesisRowDefinition->SetMinHeight(InMinHeight);
}

void UNoesisRowDefinition::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::RowDefinition* NoesisRowDefinition = NsDynamicCast<Noesis::Gui::RowDefinition*>(NoesisComponent.GetPtr());
	check(NoesisRowDefinition)


}

void UNoesisRowDefinition::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::RowDefinition* NoesisRowDefinition = NsDynamicCast<Noesis::Gui::RowDefinition*>(NoesisComponent.GetPtr());
	check(NoesisRowDefinition)


}

