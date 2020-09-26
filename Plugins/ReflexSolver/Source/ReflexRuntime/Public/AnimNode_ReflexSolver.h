// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include <BoneContainer.h>
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "ReflexConstraintBase.h"
#include "AnimNode_ReflexSolver.generated.h"

/**
 * 
 */
USTRUCT(BlueprintInternalUseOnly)
struct REFLEXRUNTIME_API FAnimNode_ReflexSolver : public FAnimNode_SkeletalControlBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "Config")
	TArray<FReflexConstraintBase> Constraints;

	// FAnimNode_Base interface
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	// End of FAnimNode_Base interface

	// FAnimNode_SkeletalControlBase interface
	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;
	// End of FAnimNode_SkeletalControlBase interface
};
