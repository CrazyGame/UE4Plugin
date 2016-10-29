////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiResourceDictionaryCollection.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiResourceDictionaryCollection::UNoesisGuiResourceDictionaryCollection(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiResourceDictionaryCollection::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TypedCollection<Noesis::Gui::ResourceDictionary>* NoesisResourceDictionaryCollection = NsDynamicCast<Noesis::Gui::TypedCollection<Noesis::Gui::ResourceDictionary>*>(InNoesisComponent);
	check(NoesisResourceDictionaryCollection);
}

void UNoesisGuiResourceDictionaryCollection::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::TypedCollection<Noesis::Gui::ResourceDictionary>* NoesisResourceDictionaryCollection = NsDynamicCast<Noesis::Gui::TypedCollection<Noesis::Gui::ResourceDictionary>*>(NoesisComponent.GetPtr());
	check(NoesisResourceDictionaryCollection)


}

void UNoesisGuiResourceDictionaryCollection::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::TypedCollection<Noesis::Gui::ResourceDictionary>* NoesisResourceDictionaryCollection = NsDynamicCast<Noesis::Gui::TypedCollection<Noesis::Gui::ResourceDictionary>*>(NoesisComponent.GetPtr());
	check(NoesisResourceDictionaryCollection)


}

