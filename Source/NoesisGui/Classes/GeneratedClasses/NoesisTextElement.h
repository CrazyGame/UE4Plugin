////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisEnums.h"
#include "NoesisStructs.h"
#include "NoesisEvents.h"
#include "GeneratedClasses/NoesisDependencyObject.h"
#include "NoesisTextElement.generated.h"

UCLASS(BlueprintType)
class NOESISGUI_API UNoesisTextElement : public UNoesisDependencyObject
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	// Property Background
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisBrush* GetBackground();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetBackground(class UNoesisBrush* InBackground);

	// Property FontFamily
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisFontFamily* GetFontFamily();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetFontFamily(class UNoesisFontFamily* InFontFamily);

	// Property FontSize
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	float GetFontSize();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetFontSize(float InFontSize);

	// Property FontStretch
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	ENoesisFontStretch GetFontStretch();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetFontStretch(ENoesisFontStretch InFontStretch);

	// Property FontStyle
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	ENoesisFontStyle GetFontStyle();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetFontStyle(ENoesisFontStyle InFontStyle);

	// Property FontWeight
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	ENoesisFontWeight GetFontWeight();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetFontWeight(ENoesisFontWeight InFontWeight);

	// Property Foreground
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisBrush* GetForeground();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetForeground(class UNoesisBrush* InForeground);

	// Property Stroke
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisBrush* GetStroke();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetStroke(class UNoesisBrush* InStroke);

	// Property StrokeThickness
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	float GetStrokeThickness();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetStrokeThickness(float InStrokeThickness);

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

};

