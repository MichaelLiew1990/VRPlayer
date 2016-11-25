// Fill out your copyright notice in the Description page of Project Settings.

#include "iTweenPCH.h"
#include "iTSpline.h"

AiTSpline::AiTSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	spline = ObjectInitializer.CreateDefaultSubobject<USplineComponent>(this, TEXT("Spline"));

	RootComponent = spline;
}


