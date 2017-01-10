////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisEnums.h"
#include "NoesisStructs.h"
#include "NoesisEvents.h"
#include "NoesisInterface.h"
#include "NoesisISealable.generated.h"

UCLASS()
class NOESISGUI_API UNoesisISealable : public UNoesisInterface
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisInterface(Noesis::Core::Interface* NoesisInterface) override;

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
bool CanSeal();

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
bool IsSealed();

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
void Seal();

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

};

