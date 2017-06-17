////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "GeneratedClasses/NoesisPath.h"
#include "NoesisCreateClass.h"
#include "NoesisCreateInterface.h"

using namespace Noesis;
using namespace Gui;

UNoesisPath::UNoesisPath(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NoesisComponentTypeClass = Noesis::Gui::Path::StaticGetClassType();
}

void UNoesisPath::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::Path* NoesisPath = NsDynamicCast<Noesis::Gui::Path*>(InNoesisComponent);
	check(NoesisPath);
}

class UNoesisGeometry* UNoesisPath::GetData()
{
	Noesis::Gui::Path* NoesisPath = NsDynamicCast<Noesis::Gui::Path*>(NoesisComponent.GetPtr());
	check(NoesisPath);
	return CastChecked<UNoesisGeometry>(CreateClassFor(NoesisPath->GetData(), nullptr), ECastCheckedType::NullAllowed);
}

void UNoesisPath::SetData(class UNoesisGeometry* InData)
{
	Noesis::Gui::Path* NoesisPath = NsDynamicCast<Noesis::Gui::Path*>(NoesisComponent.GetPtr());
	check(NoesisPath);
	NoesisPath->SetData(NsDynamicCast<Geometry*>(InData->NoesisComponent.GetPtr()));
}

void UNoesisPath::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::Path* NoesisPath = NsDynamicCast<Noesis::Gui::Path*>(NoesisComponent.GetPtr());
	check(NoesisPath);


}

void UNoesisPath::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::Path* NoesisPath = NsDynamicCast<Noesis::Gui::Path*>(NoesisComponent.GetPtr());
	check(NoesisPath);


}

