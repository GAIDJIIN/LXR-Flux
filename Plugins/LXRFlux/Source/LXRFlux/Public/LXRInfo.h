#pragma once

#include "CoreMinimal.h"

UENUM(Blueprintable)
enum class ECalculationLuminanceMode : uint8
{
	Brightest, // Save brightest
	Average // Save average
};