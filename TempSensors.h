#pragma once
#include <random>
#include "general.h"

class TempSensors: public general{
private:

    void New_temp(){
        double del = -10 + rand() % 20;
        _value += del / 10;
        if (_value > MAX_TEMP)
            _value  = MAX_TEMP;
        else if (_value  < MIN_TEMP)
            _value  = MIN_TEMP;
    }
public:
    const double MIN_TEMP = -50;
    const double MAX_TEMP = 100;

    TempSensors(){
        _value = MIN_TEMP + rand() % static_cast<int>(MAX_TEMP);
    }

    double operator()(){
        New_temp();
        return _value;
    }
};