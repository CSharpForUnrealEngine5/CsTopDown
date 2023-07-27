#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NiagaraSystem.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraFunctionLibrary.h"
#include "CSharpPlayerController.generated.h"
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ACSharpPlayerController : public APlayerController {
GENERATED_BODY()
public:
UPROPERTY(BlueprintReadWrite,EditAnywhere)
float ShortPressThreshold;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UNiagaraSystem* FXCursor;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UInputMappingContext* DefaultMappingContext;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UInputAction* SetDestinationClickAction;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UInputAction* SetDestinationTouchAction;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
bool bMoveToMouseCursor;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
FVector CachedDestination;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
bool bIsTouch;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
float FollowTime;
ACSharpPlayerController();
UFUNCTION(BlueprintCallable)
virtual void BeginPlay();
UFUNCTION(BlueprintCallable)
virtual void SetupInputComponent();
UFUNCTION(BlueprintCallable)
virtual void OnInputStarted();
UFUNCTION(BlueprintCallable)
virtual void OnSetDestinationTriggered();
UFUNCTION(BlueprintCallable)
virtual void OnSetDestinationReleased();
UFUNCTION(BlueprintCallable)
virtual void OnTouchTriggered();
UFUNCTION(BlueprintCallable)
virtual void OnTouchReleased();
};
