#pragma once
#include <iostream>
#include <random>
#include "general.h"

class HumiditySensor: public general{
private:

public:

    HumiditySensor(){
        MAXX = 100;
        MINN = 0;
        _value = rand() % static_cast<int>(MAXX);
    }

};