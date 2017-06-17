////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "GeneratedClasses/NoesisExpression.h"
#include "NoesisCreateClass.h"
#include "NoesisCreateInterface.h"

using namespace Noesis;
using namespace Gui;

UNoesisExpression::UNoesisExpression(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NoesisComponentTypeClass = Noesis::Gui::Expression::StaticGetClassType();
}

void UNoesisExpression::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::Expression* NoesisExpression = NsDynamicCast<Noesis::Gui::Expression*>(InNoesisComponent);
	check(NoesisExpression);
}

void UNoesisExpression::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::Expression* NoesisExpression = NsDynamicCast<Noesis::Gui::Expression*>(NoesisComponent.GetPtr());
	check(NoesisExpression);


}

void UNoesisExpression::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::Expression* NoesisExpression = NsDynamicCast<Noesis::Gui::Expression*>(NoesisComponent.GetPtr());
	check(NoesisExpression);


}

