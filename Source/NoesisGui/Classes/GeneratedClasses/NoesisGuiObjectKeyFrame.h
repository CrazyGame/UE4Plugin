////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisGuiTypes.h"
#include "GeneratedClasses/NoesisGuiFreezable.h"
#include "NoesisGuiObjectKeyFrame.generated.h"

UCLASS()
class NOESISGUI_API UNoesisGuiObjectKeyFrame : public UNoesisGuiFreezable
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	// UObject interface
	virtual void BeginDestroy() override;
	// End of UObject interface
};

