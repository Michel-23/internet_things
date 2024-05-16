#include "general.h"

class SensorsHandler{
private:
    general** Temp_array;
    
    size_t Temp_size = 10;
    size_t count=0;
    
public:
    SensorsHandler(){
        Temp_array = new general*[Temp_size];
    }

    void add_SensorsTemp(general* temp){
        if (count < Temp_size){
            Temp_array[count] = temp;
            count ++;
        }
        

    }

    friend std::ostream& operator<<(std::ostream& os, const SensorsHandler& temp){
        for (int i = 0; i < temp.Temp_size; i++){
            if (temp.Temp_array[i] == nullptr){
                break;
            }
            os << "TempSensors" <<i<<": "<< (*temp.Temp_array[i])() << std::endl;
        }

        return os;
    }
};