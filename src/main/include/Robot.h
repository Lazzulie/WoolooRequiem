
#pragma once
#include <ctre/Phoenix.h>
#include <frc/WPILib.h>
#include "Auto.h"

#include <frc\WPILib.h>
#include <DriveTrain.h>
class Robot : public frc::TimedRobot {
 public:

  Robot(); // PUBLIC
  void RobotInit(); // PUBLIC
  void RobotPeriodic(); // PUBLIC
  void AutonomousInit(); // PUBLIC
  void AutonomousPeriodic(); // PUBLIC
  void TeleopInit(); // PUBLIC
  void TeleopPeriodic(); // PUBLIC

 private:
    frc::Joystick a_Controller;
    DriveTrain a_ChooChoo;
    Auto a_Auto; 
};
