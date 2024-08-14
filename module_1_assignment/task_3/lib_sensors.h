#ifndef SENSORS_LIB
template <typename T, typename U>
class lib_sensors
{
private:
    T sensor_data1;
    U sensor_data2;

public:
    lib_sensors(const T& data1, const U& data2){
        sensor_data1 = data1;
        sensor_data2 = data2;
    };
    void printData(){

        std::cout << "processed data: temperature is " << this->sensor_data1 <<"\n and distance is "<< this->sensor_data2 << std::endl;
        }
};

#define SENSORS_LIB
#endif //SENSORS_LIB