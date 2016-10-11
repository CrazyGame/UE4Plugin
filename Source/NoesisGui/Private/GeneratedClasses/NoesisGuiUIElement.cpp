////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiUIElement.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiUIElement::UNoesisGuiUIElement(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiUIElement::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(InNoesisComponent);
	check(NoesisUIElement);

	FocusableChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::FocusableChanged_Private);
	NoesisUIElement->FocusableChanged() += FocusableChanged_Delegate;
	GotFocus_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::GotFocus_Private);
	NoesisUIElement->GotFocus() += GotFocus_Delegate;
	GotKeyboardFocus_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::GotKeyboardFocus_Private);
	NoesisUIElement->GotKeyboardFocus() += GotKeyboardFocus_Delegate;
	GotMouseCapture_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::GotMouseCapture_Private);
	NoesisUIElement->GotMouseCapture() += GotMouseCapture_Delegate;
	GotTouchCapture_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::GotTouchCapture_Private);
	NoesisUIElement->GotTouchCapture() += GotTouchCapture_Delegate;
	IsEnabledChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::IsEnabledChanged_Private);
	NoesisUIElement->IsEnabledChanged() += IsEnabledChanged_Delegate;
	IsHitTestVisibleChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::IsHitTestVisibleChanged_Private);
	NoesisUIElement->IsHitTestVisibleChanged() += IsHitTestVisibleChanged_Delegate;
	IsKeyboardFocusWithinChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::IsKeyboardFocusWithinChanged_Private);
	NoesisUIElement->IsKeyboardFocusWithinChanged() += IsKeyboardFocusWithinChanged_Delegate;
	IsKeyboardFocusedChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::IsKeyboardFocusedChanged_Private);
	NoesisUIElement->IsKeyboardFocusedChanged() += IsKeyboardFocusedChanged_Delegate;
	IsMouseCaptureWithinChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::IsMouseCaptureWithinChanged_Private);
	NoesisUIElement->IsMouseCaptureWithinChanged() += IsMouseCaptureWithinChanged_Delegate;
	IsMouseCapturedChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::IsMouseCapturedChanged_Private);
	NoesisUIElement->IsMouseCapturedChanged() += IsMouseCapturedChanged_Delegate;
	IsMouseDirectlyOverChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::IsMouseDirectlyOverChanged_Private);
	NoesisUIElement->IsMouseDirectlyOverChanged() += IsMouseDirectlyOverChanged_Delegate;
	IsVisibleChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::IsVisibleChanged_Private);
	NoesisUIElement->IsVisibleChanged() += IsVisibleChanged_Delegate;
	KeyDown_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::KeyDown_Private);
	NoesisUIElement->KeyDown() += KeyDown_Delegate;
	KeyUp_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::KeyUp_Private);
	NoesisUIElement->KeyUp() += KeyUp_Delegate;
	LostFocus_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::LostFocus_Private);
	NoesisUIElement->LostFocus() += LostFocus_Delegate;
	LostKeyboardFocus_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::LostKeyboardFocus_Private);
	NoesisUIElement->LostKeyboardFocus() += LostKeyboardFocus_Delegate;
	LostMouseCapture_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::LostMouseCapture_Private);
	NoesisUIElement->LostMouseCapture() += LostMouseCapture_Delegate;
	LostTouchCapture_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::LostTouchCapture_Private);
	NoesisUIElement->LostTouchCapture() += LostTouchCapture_Delegate;
	ManipulationCompleted_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::ManipulationCompleted_Private);
	NoesisUIElement->ManipulationCompleted() += ManipulationCompleted_Delegate;
	ManipulationDelta_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::ManipulationDelta_Private);
	NoesisUIElement->ManipulationDelta() += ManipulationDelta_Delegate;
	ManipulationInertiaStarting_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::ManipulationInertiaStarting_Private);
	NoesisUIElement->ManipulationInertiaStarting() += ManipulationInertiaStarting_Delegate;
	ManipulationStarted_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::ManipulationStarted_Private);
	NoesisUIElement->ManipulationStarted() += ManipulationStarted_Delegate;
	ManipulationStarting_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::ManipulationStarting_Private);
	NoesisUIElement->ManipulationStarting() += ManipulationStarting_Delegate;
	MouseDown_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::MouseDown_Private);
	NoesisUIElement->MouseDown() += MouseDown_Delegate;
	MouseEnter_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::MouseEnter_Private);
	NoesisUIElement->MouseEnter() += MouseEnter_Delegate;
	MouseLeave_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::MouseLeave_Private);
	NoesisUIElement->MouseLeave() += MouseLeave_Delegate;
	MouseLeftButtonDown_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::MouseLeftButtonDown_Private);
	NoesisUIElement->MouseLeftButtonDown() += MouseLeftButtonDown_Delegate;
	MouseLeftButtonUp_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::MouseLeftButtonUp_Private);
	NoesisUIElement->MouseLeftButtonUp() += MouseLeftButtonUp_Delegate;
	MouseMove_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::MouseMove_Private);
	NoesisUIElement->MouseMove() += MouseMove_Delegate;
	MouseRightButtonDown_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::MouseRightButtonDown_Private);
	NoesisUIElement->MouseRightButtonDown() += MouseRightButtonDown_Delegate;
	MouseRightButtonUp_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::MouseRightButtonUp_Private);
	NoesisUIElement->MouseRightButtonUp() += MouseRightButtonUp_Delegate;
	MouseUp_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::MouseUp_Private);
	NoesisUIElement->MouseUp() += MouseUp_Delegate;
	MouseWheel_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::MouseWheel_Private);
	NoesisUIElement->MouseWheel() += MouseWheel_Delegate;
	PreviewGotKeyboardFocus_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewGotKeyboardFocus_Private);
	NoesisUIElement->PreviewGotKeyboardFocus() += PreviewGotKeyboardFocus_Delegate;
	PreviewKeyDown_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewKeyDown_Private);
	NoesisUIElement->PreviewKeyDown() += PreviewKeyDown_Delegate;
	PreviewKeyUp_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewKeyUp_Private);
	NoesisUIElement->PreviewKeyUp() += PreviewKeyUp_Delegate;
	PreviewLostKeyboardFocus_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewLostKeyboardFocus_Private);
	NoesisUIElement->PreviewLostKeyboardFocus() += PreviewLostKeyboardFocus_Delegate;
	PreviewMouseDown_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewMouseDown_Private);
	NoesisUIElement->PreviewMouseDown() += PreviewMouseDown_Delegate;
	PreviewMouseLeftButtonDown_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewMouseLeftButtonDown_Private);
	NoesisUIElement->PreviewMouseLeftButtonDown() += PreviewMouseLeftButtonDown_Delegate;
	PreviewMouseLeftButtonUp_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewMouseLeftButtonUp_Private);
	NoesisUIElement->PreviewMouseLeftButtonUp() += PreviewMouseLeftButtonUp_Delegate;
	PreviewMouseMove_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewMouseMove_Private);
	NoesisUIElement->PreviewMouseMove() += PreviewMouseMove_Delegate;
	PreviewMouseRightButtonDown_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewMouseRightButtonDown_Private);
	NoesisUIElement->PreviewMouseRightButtonDown() += PreviewMouseRightButtonDown_Delegate;
	PreviewMouseRightButtonUp_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewMouseRightButtonUp_Private);
	NoesisUIElement->PreviewMouseRightButtonUp() += PreviewMouseRightButtonUp_Delegate;
	PreviewMouseUp_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewMouseUp_Private);
	NoesisUIElement->PreviewMouseUp() += PreviewMouseUp_Delegate;
	PreviewMouseWheel_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewMouseWheel_Private);
	NoesisUIElement->PreviewMouseWheel() += PreviewMouseWheel_Delegate;
	PreviewTextInput_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewTextInput_Private);
	NoesisUIElement->PreviewTextInput() += PreviewTextInput_Delegate;
	PreviewTouchDown_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewTouchDown_Private);
	NoesisUIElement->PreviewTouchDown() += PreviewTouchDown_Delegate;
	PreviewTouchMove_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewTouchMove_Private);
	NoesisUIElement->PreviewTouchMove() += PreviewTouchMove_Delegate;
	PreviewTouchUp_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::PreviewTouchUp_Private);
	NoesisUIElement->PreviewTouchUp() += PreviewTouchUp_Delegate;
	TextInput_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::TextInput_Private);
	NoesisUIElement->TextInput() += TextInput_Delegate;
	TouchDown_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::TouchDown_Private);
	NoesisUIElement->TouchDown() += TouchDown_Delegate;
	TouchEnter_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::TouchEnter_Private);
	NoesisUIElement->TouchEnter() += TouchEnter_Delegate;
	TouchLeave_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::TouchLeave_Private);
	NoesisUIElement->TouchLeave() += TouchLeave_Delegate;
	TouchMove_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::TouchMove_Private);
	NoesisUIElement->TouchMove() += TouchMove_Delegate;
	TouchUp_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiUIElement::TouchUp_Private);
	NoesisUIElement->TouchUp() += TouchUp_Delegate;
}

class UNoesisGuiCommandBindingCollection* UNoesisGuiUIElement::GetCommandBindings()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return CastChecked<UNoesisGuiCommandBindingCollection>(Instance->FindUnrealComponentForNoesisComponent(NoesisUIElement->GetCommandBindings()));
}

FNoesisGuiDrawingSize UNoesisGuiUIElement::GetDesiredSize()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return FNoesisGuiDrawingSize(NoesisUIElement->GetDesiredSize());
}

class UNoesisGuiInputBindingCollection* UNoesisGuiUIElement::GetInputBindings()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return CastChecked<UNoesisGuiInputBindingCollection>(Instance->FindUnrealComponentForNoesisComponent(NoesisUIElement->GetInputBindings()));
}

FNoesisGuiDrawingSize UNoesisGuiUIElement::GetRenderSize()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return FNoesisGuiDrawingSize(NoesisUIElement->GetRenderSize());
}

void UNoesisGuiUIElement::Arrange(FNoesisGuiDrawingRect InFinalRect)
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	const Drawing::Rect NoesisInFinalRect = InFinalRect.ToNoesis();
	return NoesisUIElement->Arrange(NoesisInFinalRect);
}

bool UNoesisGuiUIElement::CaptureMouse()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return NoesisUIElement->CaptureMouse();
}

bool UNoesisGuiUIElement::CaptureTouch(int32 InTouchDevice)
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	NsUInt32 NoesisInTouchDevice = InTouchDevice;
	return NoesisUIElement->CaptureTouch(NoesisInTouchDevice);
}

bool UNoesisGuiUIElement::Focus()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return NoesisUIElement->Focus();
}

class UNoesisGuiKeyboard* UNoesisGuiUIElement::GetKeyboard()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return CastChecked<UNoesisGuiKeyboard>(Instance->FindUnrealComponentForNoesisComponent(NoesisUIElement->GetKeyboard()));
}

class UNoesisGuiMouse* UNoesisGuiUIElement::GetMouse()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return CastChecked<UNoesisGuiMouse>(Instance->FindUnrealComponentForNoesisComponent(NoesisUIElement->GetMouse()));
}

class UNoesisGuiUIElement* UNoesisGuiUIElement::GetUIParent()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return CastChecked<UNoesisGuiUIElement>(Instance->FindUnrealComponentForNoesisComponent(NoesisUIElement->GetUIParent()));
}

class UNoesisGuiIView* UNoesisGuiUIElement::GetUIView()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return CastChecked<UNoesisGuiIView>(Instance->FindUnrealInterfaceForNoesisInterface(NoesisUIElement->GetUIView()));
}

void UNoesisGuiUIElement::InvalidateArrange()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return NoesisUIElement->InvalidateArrange();
}

void UNoesisGuiUIElement::InvalidateMeasure()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return NoesisUIElement->InvalidateMeasure();
}

void UNoesisGuiUIElement::InvalidateVisual()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return NoesisUIElement->InvalidateVisual();
}

bool UNoesisGuiUIElement::IsArrangeValid()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return NoesisUIElement->IsArrangeValid();
}

bool UNoesisGuiUIElement::IsMeasureValid()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return NoesisUIElement->IsMeasureValid();
}

void UNoesisGuiUIElement::Measure(FNoesisGuiDrawingSize InAvailableSize)
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	const Drawing::Size NoesisInAvailableSize = InAvailableSize.ToNoesis();
	return NoesisUIElement->Measure(NoesisInAvailableSize);
}

void UNoesisGuiUIElement::ReleaseAllTouchCaptures()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return NoesisUIElement->ReleaseAllTouchCaptures();
}

void UNoesisGuiUIElement::ReleaseMouseCapture()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return NoesisUIElement->ReleaseMouseCapture();
}

bool UNoesisGuiUIElement::ReleaseTouchCapture(int32 InTouchDevice)
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	NsUInt32 NoesisInTouchDevice = InTouchDevice;
	return NoesisUIElement->ReleaseTouchCapture(NoesisInTouchDevice);
}

void UNoesisGuiUIElement::UpdateLayout()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	check(NoesisUIElement);
	return NoesisUIElement->UpdateLayout();
}

	void UNoesisGuiUIElement::FocusableChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::DependencyPropertyChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiDependencyPropertyChangedEventArgs Args(Instance, InArgs);
	FocusableChanged.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::GotFocus_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiRoutedEventArgs Args(Instance, InArgs);
	GotFocus.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::GotKeyboardFocus_Private(Noesis::Core::BaseComponent* InSender, const Noesis::KeyboardFocusChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiKeyboardFocusChangedEventArgs Args(Instance, InArgs);
	GotKeyboardFocus.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::GotMouseCapture_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseEventArgs Args(Instance, InArgs);
	GotMouseCapture.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::GotTouchCapture_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TouchEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTouchEventArgs Args(Instance, InArgs);
	GotTouchCapture.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::IsEnabledChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::DependencyPropertyChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiDependencyPropertyChangedEventArgs Args(Instance, InArgs);
	IsEnabledChanged.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::IsHitTestVisibleChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::DependencyPropertyChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiDependencyPropertyChangedEventArgs Args(Instance, InArgs);
	IsHitTestVisibleChanged.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::IsKeyboardFocusWithinChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::DependencyPropertyChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiDependencyPropertyChangedEventArgs Args(Instance, InArgs);
	IsKeyboardFocusWithinChanged.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::IsKeyboardFocusedChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::DependencyPropertyChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiDependencyPropertyChangedEventArgs Args(Instance, InArgs);
	IsKeyboardFocusedChanged.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::IsMouseCaptureWithinChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::DependencyPropertyChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiDependencyPropertyChangedEventArgs Args(Instance, InArgs);
	IsMouseCaptureWithinChanged.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::IsMouseCapturedChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::DependencyPropertyChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiDependencyPropertyChangedEventArgs Args(Instance, InArgs);
	IsMouseCapturedChanged.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::IsMouseDirectlyOverChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::DependencyPropertyChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiDependencyPropertyChangedEventArgs Args(Instance, InArgs);
	IsMouseDirectlyOverChanged.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::IsVisibleChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::DependencyPropertyChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiDependencyPropertyChangedEventArgs Args(Instance, InArgs);
	IsVisibleChanged.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::KeyDown_Private(Noesis::Core::BaseComponent* InSender, const Noesis::KeyEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiKeyEventArgs Args(Instance, InArgs);
	KeyDown.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::KeyUp_Private(Noesis::Core::BaseComponent* InSender, const Noesis::KeyEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiKeyEventArgs Args(Instance, InArgs);
	KeyUp.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::LostFocus_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiRoutedEventArgs Args(Instance, InArgs);
	LostFocus.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::LostKeyboardFocus_Private(Noesis::Core::BaseComponent* InSender, const Noesis::KeyboardFocusChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiKeyboardFocusChangedEventArgs Args(Instance, InArgs);
	LostKeyboardFocus.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::LostMouseCapture_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseEventArgs Args(Instance, InArgs);
	LostMouseCapture.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::LostTouchCapture_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TouchEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTouchEventArgs Args(Instance, InArgs);
	LostTouchCapture.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::ManipulationCompleted_Private(Noesis::Core::BaseComponent* InSender, const Noesis::ManipulationCompletedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiManipulationCompletedEventArgs Args(Instance, InArgs);
	ManipulationCompleted.Broadcast(Sender, Args);
	Args.ToNoesis(InArgs);
}

	void UNoesisGuiUIElement::ManipulationDelta_Private(Noesis::Core::BaseComponent* InSender, const Noesis::ManipulationDeltaEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiManipulationDeltaEventArgs Args(Instance, InArgs);
	ManipulationDelta.Broadcast(Sender, Args);
	Args.ToNoesis(InArgs);
}

	void UNoesisGuiUIElement::ManipulationInertiaStarting_Private(Noesis::Core::BaseComponent* InSender, const Noesis::ManipulationInertiaStartingEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiManipulationInertiaStartingEventArgs Args(Instance, InArgs);
	ManipulationInertiaStarting.Broadcast(Sender, Args);
	Args.ToNoesis(InArgs);
}

	void UNoesisGuiUIElement::ManipulationStarted_Private(Noesis::Core::BaseComponent* InSender, const Noesis::ManipulationStartedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiManipulationStartedEventArgs Args(Instance, InArgs);
	ManipulationStarted.Broadcast(Sender, Args);
	Args.ToNoesis(InArgs);
}

	void UNoesisGuiUIElement::ManipulationStarting_Private(Noesis::Core::BaseComponent* InSender, const Noesis::ManipulationStartingEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiManipulationStartingEventArgs Args(Instance, InArgs);
	ManipulationStarting.Broadcast(Sender, Args);
	Args.ToNoesis(InArgs);
}

	void UNoesisGuiUIElement::MouseDown_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	MouseDown.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::MouseEnter_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseEventArgs Args(Instance, InArgs);
	MouseEnter.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::MouseLeave_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseEventArgs Args(Instance, InArgs);
	MouseLeave.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::MouseLeftButtonDown_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	MouseLeftButtonDown.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::MouseLeftButtonUp_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	MouseLeftButtonUp.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::MouseMove_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseEventArgs Args(Instance, InArgs);
	MouseMove.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::MouseRightButtonDown_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	MouseRightButtonDown.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::MouseRightButtonUp_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	MouseRightButtonUp.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::MouseUp_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	MouseUp.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::MouseWheel_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseWheelEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseWheelEventArgs Args(Instance, InArgs);
	MouseWheel.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewGotKeyboardFocus_Private(Noesis::Core::BaseComponent* InSender, const Noesis::KeyboardFocusChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiKeyboardFocusChangedEventArgs Args(Instance, InArgs);
	PreviewGotKeyboardFocus.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewKeyDown_Private(Noesis::Core::BaseComponent* InSender, const Noesis::KeyEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiKeyEventArgs Args(Instance, InArgs);
	PreviewKeyDown.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewKeyUp_Private(Noesis::Core::BaseComponent* InSender, const Noesis::KeyEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiKeyEventArgs Args(Instance, InArgs);
	PreviewKeyUp.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewLostKeyboardFocus_Private(Noesis::Core::BaseComponent* InSender, const Noesis::KeyboardFocusChangedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiKeyboardFocusChangedEventArgs Args(Instance, InArgs);
	PreviewLostKeyboardFocus.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewMouseDown_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	PreviewMouseDown.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewMouseLeftButtonDown_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	PreviewMouseLeftButtonDown.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewMouseLeftButtonUp_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	PreviewMouseLeftButtonUp.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewMouseMove_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseEventArgs Args(Instance, InArgs);
	PreviewMouseMove.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewMouseRightButtonDown_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	PreviewMouseRightButtonDown.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewMouseRightButtonUp_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	PreviewMouseRightButtonUp.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewMouseUp_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseButtonEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseButtonEventArgs Args(Instance, InArgs);
	PreviewMouseUp.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewMouseWheel_Private(Noesis::Core::BaseComponent* InSender, const Noesis::MouseWheelEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiMouseWheelEventArgs Args(Instance, InArgs);
	PreviewMouseWheel.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewTextInput_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TextCompositionEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTextCompositionEventArgs Args(Instance, InArgs);
	PreviewTextInput.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewTouchDown_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TouchEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTouchEventArgs Args(Instance, InArgs);
	PreviewTouchDown.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewTouchMove_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TouchEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTouchEventArgs Args(Instance, InArgs);
	PreviewTouchMove.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::PreviewTouchUp_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TouchEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTouchEventArgs Args(Instance, InArgs);
	PreviewTouchUp.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::TextInput_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TextCompositionEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTextCompositionEventArgs Args(Instance, InArgs);
	TextInput.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::TouchDown_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TouchEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTouchEventArgs Args(Instance, InArgs);
	TouchDown.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::TouchEnter_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TouchEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTouchEventArgs Args(Instance, InArgs);
	TouchEnter.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::TouchLeave_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TouchEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTouchEventArgs Args(Instance, InArgs);
	TouchLeave.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::TouchMove_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TouchEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTouchEventArgs Args(Instance, InArgs);
	TouchMove.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::TouchUp_Private(Noesis::Core::BaseComponent* InSender, const Noesis::TouchEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiTouchEventArgs Args(Instance, InArgs);
	TouchUp.Broadcast(Sender, Args);
}

	void UNoesisGuiUIElement::BeginDestroy()
{
	Noesis::Gui::UIElement* NoesisUIElement = NsDynamicCast<Noesis::Gui::UIElement*>(NoesisComponent.GetPtr());
	if (!NoesisUIElement)
		return Super::BeginDestroy();

	NoesisUIElement->FocusableChanged() -= FocusableChanged_Delegate;
	NoesisUIElement->GotFocus() -= GotFocus_Delegate;
	NoesisUIElement->GotKeyboardFocus() -= GotKeyboardFocus_Delegate;
	NoesisUIElement->GotMouseCapture() -= GotMouseCapture_Delegate;
	NoesisUIElement->GotTouchCapture() -= GotTouchCapture_Delegate;
	NoesisUIElement->IsEnabledChanged() -= IsEnabledChanged_Delegate;
	NoesisUIElement->IsHitTestVisibleChanged() -= IsHitTestVisibleChanged_Delegate;
	NoesisUIElement->IsKeyboardFocusWithinChanged() -= IsKeyboardFocusWithinChanged_Delegate;
	NoesisUIElement->IsKeyboardFocusedChanged() -= IsKeyboardFocusedChanged_Delegate;
	NoesisUIElement->IsMouseCaptureWithinChanged() -= IsMouseCaptureWithinChanged_Delegate;
	NoesisUIElement->IsMouseCapturedChanged() -= IsMouseCapturedChanged_Delegate;
	NoesisUIElement->IsMouseDirectlyOverChanged() -= IsMouseDirectlyOverChanged_Delegate;
	NoesisUIElement->IsVisibleChanged() -= IsVisibleChanged_Delegate;
	NoesisUIElement->KeyDown() -= KeyDown_Delegate;
	NoesisUIElement->KeyUp() -= KeyUp_Delegate;
	NoesisUIElement->LostFocus() -= LostFocus_Delegate;
	NoesisUIElement->LostKeyboardFocus() -= LostKeyboardFocus_Delegate;
	NoesisUIElement->LostMouseCapture() -= LostMouseCapture_Delegate;
	NoesisUIElement->LostTouchCapture() -= LostTouchCapture_Delegate;
	NoesisUIElement->ManipulationCompleted() -= ManipulationCompleted_Delegate;
	NoesisUIElement->ManipulationDelta() -= ManipulationDelta_Delegate;
	NoesisUIElement->ManipulationInertiaStarting() -= ManipulationInertiaStarting_Delegate;
	NoesisUIElement->ManipulationStarted() -= ManipulationStarted_Delegate;
	NoesisUIElement->ManipulationStarting() -= ManipulationStarting_Delegate;
	NoesisUIElement->MouseDown() -= MouseDown_Delegate;
	NoesisUIElement->MouseEnter() -= MouseEnter_Delegate;
	NoesisUIElement->MouseLeave() -= MouseLeave_Delegate;
	NoesisUIElement->MouseLeftButtonDown() -= MouseLeftButtonDown_Delegate;
	NoesisUIElement->MouseLeftButtonUp() -= MouseLeftButtonUp_Delegate;
	NoesisUIElement->MouseMove() -= MouseMove_Delegate;
	NoesisUIElement->MouseRightButtonDown() -= MouseRightButtonDown_Delegate;
	NoesisUIElement->MouseRightButtonUp() -= MouseRightButtonUp_Delegate;
	NoesisUIElement->MouseUp() -= MouseUp_Delegate;
	NoesisUIElement->MouseWheel() -= MouseWheel_Delegate;
	NoesisUIElement->PreviewGotKeyboardFocus() -= PreviewGotKeyboardFocus_Delegate;
	NoesisUIElement->PreviewKeyDown() -= PreviewKeyDown_Delegate;
	NoesisUIElement->PreviewKeyUp() -= PreviewKeyUp_Delegate;
	NoesisUIElement->PreviewLostKeyboardFocus() -= PreviewLostKeyboardFocus_Delegate;
	NoesisUIElement->PreviewMouseDown() -= PreviewMouseDown_Delegate;
	NoesisUIElement->PreviewMouseLeftButtonDown() -= PreviewMouseLeftButtonDown_Delegate;
	NoesisUIElement->PreviewMouseLeftButtonUp() -= PreviewMouseLeftButtonUp_Delegate;
	NoesisUIElement->PreviewMouseMove() -= PreviewMouseMove_Delegate;
	NoesisUIElement->PreviewMouseRightButtonDown() -= PreviewMouseRightButtonDown_Delegate;
	NoesisUIElement->PreviewMouseRightButtonUp() -= PreviewMouseRightButtonUp_Delegate;
	NoesisUIElement->PreviewMouseUp() -= PreviewMouseUp_Delegate;
	NoesisUIElement->PreviewMouseWheel() -= PreviewMouseWheel_Delegate;
	NoesisUIElement->PreviewTextInput() -= PreviewTextInput_Delegate;
	NoesisUIElement->PreviewTouchDown() -= PreviewTouchDown_Delegate;
	NoesisUIElement->PreviewTouchMove() -= PreviewTouchMove_Delegate;
	NoesisUIElement->PreviewTouchUp() -= PreviewTouchUp_Delegate;
	NoesisUIElement->TextInput() -= TextInput_Delegate;
	NoesisUIElement->TouchDown() -= TouchDown_Delegate;
	NoesisUIElement->TouchEnter() -= TouchEnter_Delegate;
	NoesisUIElement->TouchLeave() -= TouchLeave_Delegate;
	NoesisUIElement->TouchMove() -= TouchMove_Delegate;
	NoesisUIElement->TouchUp() -= TouchUp_Delegate;

	Super::BeginDestroy();
}

