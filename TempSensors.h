#pragma once
#include <random>
#include "general.h"

class TempSensors: public general{
private:

public:
    const double MIN_TEMP = -50;
    const double MAX_TEMP = 100;

    TempSensors(){
        _value = MIN_TEMP + rand() % static_cast<int>(MAX_TEMP);
    }
};