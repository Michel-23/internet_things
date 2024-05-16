#pragma once
#include <random>
#include "general.h"

class TempSensors: public general{
private:

public:

    TempSensors(){
        MAXX = 100;
        MINN = -50;
        _value = MINN + rand() % static_cast<int>(MAXX);
    }
};