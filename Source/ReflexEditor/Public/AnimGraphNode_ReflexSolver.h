// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AnimNode_ReflexSolver.h"
#include "AnimGraphNode_SkeletalControlBase.h"
#include "AnimGraphNode_ReflexSolver.generated.h"

/**
 * 
 */
UCLASS()
class REFLEXEDITOR_API UAnimGraphNode_ReflexSolver : public UAnimGraphNode_SkeletalControlBase
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Config")
	void LoadConfiguration();

	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_ReflexSolver Node;

public:

	// UEdGraphNode interface
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	// End of UEdGraphNode interface

	// UAnimGraphNode_SkeletalControlBase interface
	virtual const FAnimNode_SkeletalControlBase* GetNode() const override { return &Node; }
	// End of UAnimGraphNode_SkeletalControlBase interface

};