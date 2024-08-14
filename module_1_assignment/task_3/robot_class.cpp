#include "robot_class.h"
robot::robot(const std::string& name, 
    unsigned short int& speed,
    unsigned short int& weight,
    unsigned short int& size,
    unsigned short int& num_sensors)
    : Name(name), Speed(speed), Weight(weight),
    Size(size), NumSensors(num_sensors)
    {
      std::cout << "robot created with params" << std::endl;
      std::cout << "Name: " << Name << std::endl;
      std::cout << "Speed: " << Speed << std::endl;
      std::cout << "Weight: " << Weight << std::endl;
      std::cout << "Size: " << Size << std::endl;
      std::cout << "NumSensors: " << NumSensors << std::endl;
    }
void robot::moveForward(){
  std::cout << "moving forward with speed: " << Speed << std::endl;
}
void robot::moveBackward(){
  std::cout << "moving Backward with speed: " << Speed << std::endl;
}
void robot::stop()
{
  std::cout << "robot " << Name << "stopped" << std::endl;
}