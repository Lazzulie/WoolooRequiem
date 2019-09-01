
#pragma once
#include <DriveTrain.h>

enum AutoPathOne
{
    kAutoIdle = 0,
    kAutoMove
};

class Auto
{
    public:
        Auto(DriveTrain *driveIn);
        void AutoPathOneInit();
        void AutoPathOnePeriodic(int leftDistance, int rightDistance);
    private:
        DriveTrain *a_DriveTrain;
        AutoPathOne a_AutoOne;
};