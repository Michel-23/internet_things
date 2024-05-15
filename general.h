#include "TempSensors.h"

class general{
protected:
    double _value;
    double MAXX;
    double MINN;
    void AAAAA(){
            double del=-10+rand()%20;
            _value+=del;
            if (_value>MAXX)
                _value=MAXX;
            else if (_value<MINN)
                _value=MINN;
        }
    double operator()(){
        AAAAA();
        return _value;
    }
public:

};