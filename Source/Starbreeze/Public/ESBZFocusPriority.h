#pragma once
#include "CoreMinimal.h"
#include "ESBZFocusPriority.generated.h"

UENUM(BlueprintType)
enum class ESBZFocusPriority : uint8 {
    AI = 0x3,
    Attack,
    Override,
    Default = 0,
};

