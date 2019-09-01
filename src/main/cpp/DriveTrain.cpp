
#include <DriveTrain.h>

DriveTrain::DriveTrain(int leftID, int rightID):
a_LeftMotor(leftID),
a_RightMotor(rightID),
a_LeftEncoder(8, 9),
a_RightEncoder(6, 7)
{

}

void DriveTrain::Update(float leftSpeed, float rightSpeed)
{
    float scalar = 1;
    a_LeftMotor.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, scalar * -1 * leftSpeed);
    a_RightMotor.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, scalar * rightSpeed);
}

float DriveTrain::GetLeft()
{
    return -1 * a_LeftEncoder.Get();
}

float DriveTrain::GetRight()
{
    return a_RightEncoder.Get();
}

void DriveTrain::ClearEncoders(void)
{
    a_LeftEncoder.Reset();
    a_RightEncoder.Reset();
}