////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisImage.h"

using namespace Noesis;
using namespace Gui;

UNoesisImage::UNoesisImage(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisImage::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::Image* NoesisImage = NsDynamicCast<Noesis::Gui::Image*>(InNoesisComponent);
	check(NoesisImage);
}

class UNoesisImageSource* UNoesisImage::GetSource()
{
	Noesis::Gui::Image* NoesisImage = NsDynamicCast<Noesis::Gui::Image*>(NoesisComponent.GetPtr());
	check(NoesisImage);
	return CastChecked<UNoesisImageSource>(Instance->FindUnrealComponentForNoesisComponent(NoesisImage->GetSource()));
}

void UNoesisImage::SetSource(class UNoesisImageSource* InSource)
{
	Noesis::Gui::Image* NoesisImage = NsDynamicCast<Noesis::Gui::Image*>(NoesisComponent.GetPtr());
	check(NoesisImage);
	NoesisImage->SetSource(NsDynamicCast<ImageSource*>(InSource->NoesisComponent.GetPtr()));
}

ENoesisStretch UNoesisImage::GetStretch()
{
	Noesis::Gui::Image* NoesisImage = NsDynamicCast<Noesis::Gui::Image*>(NoesisComponent.GetPtr());
	check(NoesisImage);
	return (ENoesisStretch)NoesisImage->GetStretch();
}

void UNoesisImage::SetStretch(ENoesisStretch InStretch)
{
	Noesis::Gui::Image* NoesisImage = NsDynamicCast<Noesis::Gui::Image*>(NoesisComponent.GetPtr());
	check(NoesisImage);
	NoesisImage->SetStretch((Noesis::Gui::Stretch)InStretch);
}

ENoesisStretchDirection UNoesisImage::GetStretchDirection()
{
	Noesis::Gui::Image* NoesisImage = NsDynamicCast<Noesis::Gui::Image*>(NoesisComponent.GetPtr());
	check(NoesisImage);
	return (ENoesisStretchDirection)NoesisImage->GetStretchDirection();
}

void UNoesisImage::SetStretchDirection(ENoesisStretchDirection InStretchDirection)
{
	Noesis::Gui::Image* NoesisImage = NsDynamicCast<Noesis::Gui::Image*>(NoesisComponent.GetPtr());
	check(NoesisImage);
	NoesisImage->SetStretchDirection((Noesis::Gui::StretchDirection)InStretchDirection);
}

void UNoesisImage::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::Image* NoesisImage = NsDynamicCast<Noesis::Gui::Image*>(NoesisComponent.GetPtr());
	check(NoesisImage)


}

void UNoesisImage::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::Image* NoesisImage = NsDynamicCast<Noesis::Gui::Image*>(NoesisComponent.GetPtr());
	check(NoesisImage)


}

