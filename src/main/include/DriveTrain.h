
#pragma once

#include <ctre\Phoenix.h>
#include <frc\WPILib.h>

class DriveTrain
{
    public:
        DriveTrain(int leftID, int rightID);
        void Update(float leftSpeed, float rightSpeed);
        float GetLeft(void);
        float GetRight(void);
        void ClearEncoders(void);
      //  void DriveStraight(float speed);
    private:
        WPI_TalonSRX a_LeftMotor;
        WPI_TalonSRX a_RightMotor;
        frc::Encoder a_LeftEncoder;
        frc::Encoder a_RightEncoder;
};