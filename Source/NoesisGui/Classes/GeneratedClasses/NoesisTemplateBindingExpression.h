////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisEnums.h"
#include "NoesisStructs.h"
#include "NoesisEvents.h"
#include "GeneratedClasses/NoesisExpression.h"
#include "NoesisTemplateBindingExpression.generated.h"

UCLASS()
class NOESISGUI_API UNoesisTemplateBindingExpression : public UNoesisExpression
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	// Property TemplateBindingExtension
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisTemplateBindingExtension* GetTemplateBindingExtension();

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
class UNoesisBaseComponent* Evaluate();

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
class UNoesisIExpression* Reapply(class UNoesisDependencyObject* TargetObject, const class UNoesisDependencyProperty* TargetProperty);

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

};

