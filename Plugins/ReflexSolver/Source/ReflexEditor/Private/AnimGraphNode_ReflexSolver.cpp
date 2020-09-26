// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimGraphNode_ReflexSolver.h"

#define LOCTEXT_NAMESPACE "A3Nodes"

void UAnimGraphNode_ReflexSolver::LoadConfiguration()
{
}

FText UAnimGraphNode_ReflexSolver::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("ReflexSolver", "Reflex Solver");
}

FText UAnimGraphNode_ReflexSolver::GetTooltipText() const
{
	return LOCTEXT("RelfexSolver_Tooltip", "Reflex constraints which drive certain bones.");
}

#undef LOCTEXT_NAMESPACE
