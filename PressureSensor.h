#pragma once
#include <random>
#include "general.h"

class PressureSensor: public general{
private:
    
public:
    const double MAX_PRESSURE = 900;
    const double MIN_PRESSURE = 600;
    PressureSensor(){
        _value = MIN_PRESSURE+rand()%static_cast<int>(MAX_PRESSURE-MIN_PRESSURE);
    }
};