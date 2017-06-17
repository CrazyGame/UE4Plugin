////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "GeneratedClasses/NoesisBaseBinding.h"
#include "NoesisCreateClass.h"
#include "NoesisCreateInterface.h"

using namespace Noesis;
using namespace Gui;

UNoesisBaseBinding::UNoesisBaseBinding(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NoesisComponentTypeClass = Noesis::Gui::BaseBinding::StaticGetClassType();
}

void UNoesisBaseBinding::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::BaseBinding* NoesisBaseBinding = NsDynamicCast<Noesis::Gui::BaseBinding*>(InNoesisComponent);
	check(NoesisBaseBinding);
}

class UNoesisBaseComponent* UNoesisBaseBinding::GetFallbackValue()
{
	Noesis::Gui::BaseBinding* NoesisBaseBinding = NsDynamicCast<Noesis::Gui::BaseBinding*>(NoesisComponent.GetPtr());
	check(NoesisBaseBinding);
	return CastChecked<UNoesisBaseComponent>(CreateClassFor(NoesisBaseBinding->GetFallbackValue(), nullptr), ECastCheckedType::NullAllowed);
}

void UNoesisBaseBinding::SetFallbackValue(class UNoesisBaseComponent* InFallbackValue)
{
	Noesis::Gui::BaseBinding* NoesisBaseBinding = NsDynamicCast<Noesis::Gui::BaseBinding*>(NoesisComponent.GetPtr());
	check(NoesisBaseBinding);
	NoesisBaseBinding->SetFallbackValue(NsDynamicCast<Core::BaseComponent*>(InFallbackValue->NoesisComponent.GetPtr()));
}

FString UNoesisBaseBinding::GetStringFormat()
{
	Noesis::Gui::BaseBinding* NoesisBaseBinding = NsDynamicCast<Noesis::Gui::BaseBinding*>(NoesisComponent.GetPtr());
	check(NoesisBaseBinding);
	return NsStringToFString(NoesisBaseBinding->GetStringFormat());
}

void UNoesisBaseBinding::SetStringFormat(FString InStringFormat)
{
	Noesis::Gui::BaseBinding* NoesisBaseBinding = NsDynamicCast<Noesis::Gui::BaseBinding*>(NoesisComponent.GetPtr());
	check(NoesisBaseBinding);
	NoesisBaseBinding->SetStringFormat(StringCast<NsChar>(*InStringFormat).Get());
}

void UNoesisBaseBinding::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::BaseBinding* NoesisBaseBinding = NsDynamicCast<Noesis::Gui::BaseBinding*>(NoesisComponent.GetPtr());
	check(NoesisBaseBinding);


}

void UNoesisBaseBinding::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::BaseBinding* NoesisBaseBinding = NsDynamicCast<Noesis::Gui::BaseBinding*>(NoesisComponent.GetPtr());
	check(NoesisBaseBinding);


}

