using GameFramework;
using System;
using System.Reflection.PortableExecutable;

namespace Game;

internal class ACSharpPlayerController : APlayerController
{
    #region Variables
    /** Time Threshold to know if it was a short press */
    float ShortPressThreshold;

    /** FX Class that we will spawn when clicking */

    UNiagaraSystem FXCursor;

    /** MappingContext */
    UInputMappingContext DefaultMappingContext;
	
	/** Jump Input Action */
    UInputAction SetDestinationClickAction;

	/** Jump Input Action */
    UInputAction SetDestinationTouchAction;

	/** True if the controlled character should navigate to the mouse cursor. */
	bool bMoveToMouseCursor;

    FVector CachedDestination;

    bool bIsTouch; // Is it a touch device
    float FollowTime; // For how long it has been pressed
    #endregion

    ACSharpPlayerController()
    {
        bShowMouseCursor = true;
        DefaultMouseCursor = EMouseCursor.Default;
        CachedDestination = FVector.ZeroVector;
        FollowTime = 0.0f;
    }

    protected override void BeginPlay()
    {
        // Call the base class  
        base.BeginPlay();

        //Add Input Mapping Context
        UEnhancedInputLocalPlayerSubsystem Subsystem = ULocalPlayer.GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
        if (Subsystem != null)
        {
            Subsystem.AddMappingContext(DefaultMappingContext, 0);
        }
    }

    public override void SetupInputComponent()
    {
        // set up gameplay key bindings
        base.SetupInputComponent();

        // Set up action bindings
        UEnhancedInputComponent EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);
        if (EnhancedInputComponent != null)
        {
            // Setup mouse input events
            EnhancedInputComponent.BindAction(SetDestinationClickAction, ETriggerEvent.Started, this, "OnInputStarted");
            EnhancedInputComponent.BindAction(SetDestinationClickAction, ETriggerEvent.Triggered, this, "OnSetDestinationTriggered");
            EnhancedInputComponent.BindAction(SetDestinationClickAction, ETriggerEvent.Completed, this, "OnSetDestinationReleased");
            EnhancedInputComponent.BindAction(SetDestinationClickAction, ETriggerEvent.Canceled, this, "OnSetDestinationReleased");

            // Setup touch input events
            EnhancedInputComponent.BindAction(SetDestinationTouchAction, ETriggerEvent.Started, this, "OnInputStarted");
            EnhancedInputComponent.BindAction(SetDestinationTouchAction, ETriggerEvent.Triggered, this, "OnTouchTriggered");
            EnhancedInputComponent.BindAction(SetDestinationTouchAction, ETriggerEvent.Completed, this, "OnTouchReleased");
            EnhancedInputComponent.BindAction(SetDestinationTouchAction, ETriggerEvent.Canceled, this, "OnTouchReleased");
        }
    }

    void OnInputStarted()
    {
        StopMovement();
    }


    // Triggered every frame when the input is held down
    void OnSetDestinationTriggered()
    {
        // We flag that the input is being pressed
        FollowTime += GetWorld().GetDeltaSeconds();

        // We look for the location in the world where the player has pressed the input
        FHitResult Hit = new FHitResult();
        bool bHitSuccessful = false;
        if (bIsTouch)
        {
            bHitSuccessful = GetHitResultUnderFinger(ETouchIndex.Touch1, ECollisionChannel.ECC_Visibility, true, Hit);
        }
        else
        {
            bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel.ECC_Visibility, true, Hit);
        }

        // If we hit a surface, cache the location
        if (bHitSuccessful)
        {
            CachedDestination = Hit.Location;
        }

        // Move towards mouse pointer or touch
        APawn ControlledPawn = GetPawn();
        if (ControlledPawn != null)
        {
            FVector WorldDirection = (CachedDestination - ControlledPawn.GetActorLocation()).GetSafeNormal();
            ControlledPawn.AddMovementInput(WorldDirection, 1.0f, false);
        }
    }

    void OnSetDestinationReleased()
    {
        // If it was a short press
        if (FollowTime <= ShortPressThreshold)
        {
            // We move there and spawn some particles
            UAIBlueprintHelperLibrary.SimpleMoveToLocation(this, CachedDestination);
            UNiagaraFunctionLibrary.SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator.ZeroRotator, new FVector(1.0f, 1.0f, 1.0f), true, true, ENCPoolMethod.None, true);
        }

        FollowTime = 0.0f;
    }

    // Triggered every frame when the input is held down
    void OnTouchTriggered()
    {
        bIsTouch = true;
        OnSetDestinationTriggered();
    }

    void OnTouchReleased()
    {
        bIsTouch = false;
        OnSetDestinationReleased();
    }

}
