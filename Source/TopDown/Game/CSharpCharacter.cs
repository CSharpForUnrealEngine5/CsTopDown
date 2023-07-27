namespace Game;

using GameFramework;

public class ACSharpCharacter : ACharacter
{
    /** Top down camera */
    UCameraComponent TopDownCameraComponent;

    /** Camera boom positioning the camera above the character */
    USpringArmComponent CameraBoom;

    ACSharpCharacter()
    {
        // Set size for player capsule
        GetCapsuleComponent().InitCapsuleSize(42.0f, 96.0f);

        // Don't rotate character to camera direction
        bUseControllerRotationPitch = false;
        bUseControllerRotationYaw = false;
        bUseControllerRotationRoll = false;

        // Configure character movement
        GetCharacterMovement().bOrientRotationToMovement = true; // Rotate character to moving direction
        GetCharacterMovement().RotationRate = new FRotator(0.0f, 640.0f, 0.0f);
        GetCharacterMovement().bConstrainToPlane = true;
        GetCharacterMovement().bSnapToPlaneAtStart = true;

        // Create a camera boom...
        CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
        CameraBoom.SetupAttachment(RootComponent);
        CameraBoom.SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
        CameraBoom.TargetArmLength = 800.0f;
        CameraBoom.SetRelativeRotation(new FRotator(-60.0f, 0.0f, 0.0f));
        CameraBoom.bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

        // Create a camera...
        TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>("TopDownCamera");
        TopDownCameraComponent.SetupAttachment(CameraBoom, USpringArmComponent.SocketName);
        TopDownCameraComponent.bUsePawnControlRotation = false; // Camera does not rotate relative to arm

        // Activate ticking in order to update the cursor every frame.
        PrimaryActorTick.bCanEverTick = true;
        PrimaryActorTick.bStartWithTickEnabled = true;
    }
}