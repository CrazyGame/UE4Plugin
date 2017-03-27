////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisEnums.h"
#include "NoesisStructs.h"
#include "NoesisEvents.h"
#include "GeneratedClasses/NoesisPointKeyFrame.h"
#include "NoesisSplinePointKeyFrame.generated.h"

UCLASS(BlueprintType)
class NOESISGUI_API UNoesisSplinePointKeyFrame : public UNoesisPointKeyFrame
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	// Property KeySpline
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisKeySpline* GetKeySpline();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetKeySpline(class UNoesisKeySpline* InKeySpline);

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

};

