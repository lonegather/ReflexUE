// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <BoneContainer.h>
#include "ReflexConstraintBase.generated.h"

/**
 * 
 */
USTRUCT(BlueprintInternalUseOnly)
struct REFLEXRUNTIME_API FReflexConstraintBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	FBoneReference TargetBone;
};
