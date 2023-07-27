#include "CSharpPlayerController.h"
ACSharpPlayerController::ACSharpPlayerController()
{
bShowMouseCursor=true;
DefaultMouseCursor=EMouseCursor::Default;
CachedDestination=FVector::ZeroVector;
FollowTime=0.0f;
}
void ACSharpPlayerController::BeginPlay()
{
Super::BeginPlay();
UEnhancedInputLocalPlayerSubsystem* Subsystem=ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
if (Subsystem!=nullptr)
{
Subsystem->AddMappingContext(DefaultMappingContext,0);
}
}
void ACSharpPlayerController::SetupInputComponent()
{
Super::SetupInputComponent();
UEnhancedInputComponent* EnhancedInputComponent=CastChecked<UEnhancedInputComponent>(InputComponent);
if (EnhancedInputComponent!=nullptr)
{
EnhancedInputComponent->BindAction(SetDestinationClickAction,ETriggerEvent::Started,this,TEXT("OnInputStarted"));
EnhancedInputComponent->BindAction(SetDestinationClickAction,ETriggerEvent::Triggered,this,TEXT("OnSetDestinationTriggered"));
EnhancedInputComponent->BindAction(SetDestinationClickAction,ETriggerEvent::Completed,this,TEXT("OnSetDestinationReleased"));
EnhancedInputComponent->BindAction(SetDestinationClickAction,ETriggerEvent::Canceled,this,TEXT("OnSetDestinationReleased"));
EnhancedInputComponent->BindAction(SetDestinationTouchAction,ETriggerEvent::Started,this,TEXT("OnInputStarted"));
EnhancedInputComponent->BindAction(SetDestinationTouchAction,ETriggerEvent::Triggered,this,TEXT("OnTouchTriggered"));
EnhancedInputComponent->BindAction(SetDestinationTouchAction,ETriggerEvent::Completed,this,TEXT("OnTouchReleased"));
EnhancedInputComponent->BindAction(SetDestinationTouchAction,ETriggerEvent::Canceled,this,TEXT("OnTouchReleased"));
}
}
void ACSharpPlayerController::OnInputStarted()
{
StopMovement();
}
void ACSharpPlayerController::OnSetDestinationTriggered()
{
FollowTime+=GetWorld()->GetDeltaSeconds();
FHitResult Hit=FHitResult();
bool bHitSuccessful=false;
if (bIsTouch)
{
bHitSuccessful=GetHitResultUnderFinger(ETouchIndex::Touch1,ECollisionChannel::ECC_Visibility,true,Hit);
}
else
{
bHitSuccessful=GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility,true,Hit);
}
if (bHitSuccessful)
{
CachedDestination=Hit.Location;
}
APawn* ControlledPawn=GetPawn();
if (ControlledPawn!=nullptr)
{
FVector WorldDirection=(CachedDestination-ControlledPawn->GetActorLocation()).GetSafeNormal();
ControlledPawn->AddMovementInput(WorldDirection,1.0f,false);
}
}
void ACSharpPlayerController::OnSetDestinationReleased()
{
if (FollowTime<=ShortPressThreshold)
{
UAIBlueprintHelperLibrary::SimpleMoveToLocation(this,CachedDestination);
UNiagaraFunctionLibrary::SpawnSystemAtLocation(this,FXCursor,CachedDestination,FRotator::ZeroRotator,FVector(1.0f,1.0f,1.0f),true,true,ENCPoolMethod::None,true);
}
FollowTime=0.0f;
}
void ACSharpPlayerController::OnTouchTriggered()
{
bIsTouch=true;
OnSetDestinationTriggered();
}
void ACSharpPlayerController::OnTouchReleased()
{
bIsTouch=false;
OnSetDestinationReleased();
}
