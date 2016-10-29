////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisGuiTypes.h"
#include "GeneratedClasses/NoesisGuiAnimationTimeline.h"
#include "NoesisGuiColorAnimationUsingKeyFrames.generated.h"

UCLASS()
class NOESISGUI_API UNoesisGuiColorAnimationUsingKeyFrames : public UNoesisGuiAnimationTimeline
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

};

