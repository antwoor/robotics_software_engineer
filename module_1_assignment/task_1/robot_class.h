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
    ~robot(){};
 private:
     std::string Name;
     unsigned short int Speed;     
     unsigned short int Weight;     
     unsigned short int Size;     
     unsigned short int NumSensors;     
};
#endif //ROBOT_LIB