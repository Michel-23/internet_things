#pragma once
#include <random>
#include "general.h"

class PressureSensor: public general{
private:
    
public:

    PressureSensor(){
        MAXX = 900;
        MINN = 600;
        _value = MINN+rand()%static_cast<int>(MAXX - MINN);
    }
};