#pragma once
#include <iostream>
#include <random>
#include "general.h"

class Co2Sensors: public general{
private:

public:

    Co2Sensors(){
        MAXX = 100;
        MINN = 0;
        _value = rand()% static_cast<int>(MAXX);
    }

};