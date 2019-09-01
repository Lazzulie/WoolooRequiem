
#include <Robot.h>
Robot::Robot():
a_Controller(1),
a_ChooChoo(0, 2),
a_Auto(&a_ChooChoo)
{
  frc::SmartDashboard::init();
}

void Robot::RobotInit()
{

}

void Robot::RobotPeriodic()
{
    frc::SmartDashboard::PutNumber("Left Encoder", a_ChooChoo.GetLeft());
    frc::SmartDashboard::PutNumber("Right Encoder", a_ChooChoo.GetRight());
}

void Robot::TeleopInit()
{

}

void Robot::TeleopPeriodic()
{
    a_ChooChoo.Update(a_Controller.GetRawAxis(1), a_Controller.GetRawAxis(5));
    frc::SmartDashboard::PutNumber("Top Left Joystick", a_Controller.GetRawAxis(1));
    frc::SmartDashboard::PutNumber("Bottom Right Joystick", a_Controller.GetRawAxis(5));
    
}

void Robot::AutonomousInit() 
{
  a_Auto.AutoPathOneInit();
}

void Robot::AutonomousPeriodic()
{
  int leftEncoder = a_ChooChoo.GetLeft(); // Please ignore the
  int rightEncoder = a_ChooChoo.GetRight(); // drivetrain name <3

  a_Auto.AutoPathOnePeriodic(leftEncoder, rightEncoder);
}

int main() {return frc::StartRobot<Robot>();} 
 
 