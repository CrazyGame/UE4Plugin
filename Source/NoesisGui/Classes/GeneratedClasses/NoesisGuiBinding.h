////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisGuiTypes.h"
#include "GeneratedClasses/NoesisGuiBaseBinding.h"
#include "NoesisGuiBinding.generated.h"

UCLASS()
class NOESISGUI_API UNoesisGuiBinding : public UNoesisGuiBaseBinding
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	// Property ConverterParameter
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisGuiBaseComponent* GetConverterParameter();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetConverterParameter(class UNoesisGuiBaseComponent* InConverterParameter);

	// Property ElementName
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	FString GetElementName();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetElementName(FString InElementName);

	// Property Mode
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	ENoesisGuiBindingMode GetMode();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetMode(ENoesisGuiBindingMode InMode);

	// Property Path
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisGuiPropertyPath* GetPath();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetPath(class UNoesisGuiPropertyPath* InPath);

	// Property RelativeSource
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisGuiRelativeSource* GetRelativeSource();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetRelativeSource(class UNoesisGuiRelativeSource* InRelativeSource);

	// Property Source
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	class UNoesisGuiBaseComponent* GetSource();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetSource(class UNoesisGuiBaseComponent* InSource);

	// Property UpdateSourceTrigger
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	ENoesisGuiUpdateSourceTrigger GetUpdateSourceTrigger();
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	void SetUpdateSourceTrigger(ENoesisGuiUpdateSourceTrigger InUpdateSourceTrigger);

	// UObject interface
	virtual void BeginDestroy() override;
	// End of UObject interface
};

