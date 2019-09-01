
#include <Auto.h>
#include <DriveTrain.h>

Auto::Auto(DriveTrain *driveIn):
a_DriveTrain(driveIn),
a_AutoOne(kAutoIdle)
{
    
} 

void Auto::AutoPathOneInit()
{
    a_AutoOne = kAutoMove;
    a_DriveTrain->ClearEncoders();
}

void Auto::AutoPathOnePeriodic(int leftDistance, int rightDistance)
{
    switch(a_AutoOne)
    {
        case kAutoIdle:
            a_DriveTrain->Update(0, 0);  
            break;
        case kAutoMove:
            int distanceDriven = (leftDistance + rightDistance) / 2;
            if(distanceDriven <= 100) // Placeholder distance
            { // Please do not ignore the drivetrain name <3
                a_DriveTrain->Update(-0.3, -0.3);
            }
            else
            {
                a_DriveTrain->Update(0, 0);
                a_AutoOne = kAutoIdle;
            }
            break;
    }
}