#pragma once
#include <iostream>
#include <random>
#include "general.h"

class HumiditySensor: public general{
private:

public:
    const double MAX_HUMIDITY = 100;
    const double MIN_HUMIDITY = 0;
    HumiditySensor(){
        _value = rand() % static_cast<int>(MAX_HUMIDITY);
    }

};