#ifndef ROBOT_LIB
#define ROBOT_LIB
#include <iostream>
#include <vector>
class robot{
 public:
    robot(){std::cout << "robot created" << std::endl;}
    robot(const std::string& name, 
    unsigned short int& speed,
    unsigned short int& weight,
    unsigned short int& size,
    unsigned short int& num_sensors
    );
    void moveForward();
    void moveBackward();
    void stop();
    template <typename T, typename U>
    void processData(T data1, U data2){
        std::cout << "processed data " << data1<<" and "<<data2<< std::endl;
        }
    void processData(){
        std::cout << "processed data: temperature is " << this->temp <<"\n and distance is "<< this->dist << std::endl;
        }
    ~robot(){};
 private:
     std::string Name;
     unsigned short int Speed;     
     unsigned short int Weight;     
     unsigned short int Size;     
     unsigned short int NumSensors;
 protected:
     float temp = 20;
     float dist = 100;
};
#endif //ROBOT_LIB