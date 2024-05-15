#pragma once
#include <iostream>
#include <random>
#include "general.h"

class Co2Sensors: public general{
private:

public:
    const double MAX_PERCENT = 100;
    const double MIN_PERCENT = 0;

    Co2Sensors(){
        _value = rand()% static_cast<int>(MAX_PERCENT);
    }

};