#include "TempSensors.h"

class general{
protected:
    double _value;
    void AAAAA(){
            double del=-10+rand()%20;
            _value+=del;
            if (_value>MAX_PRESSURE)
                _value=MAX_PRESSURE;
            else if (_value<MIN_PRESSURE)
                _value=MIN_PRESSURE;
        }
    void New_temp(){
        double del = -10 + rand() % 20;
        _value += del / 10;
        if (_value > MAX_TEMP)
            _value  = MAX_TEMP;
        else if (_value  < MIN_TEMP)
            _value  = MIN_TEMP;
    }

public:


};