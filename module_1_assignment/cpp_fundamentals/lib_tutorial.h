#ifndef ROBOT_LIB
#define ROBOT_LIB
#include <iostream>
#include <vector>
using namespace std;
class robot{
 private:
     int NumSensors;
     std::vector<int> sensorPins;
     
 public:
     robot(){};
     robot(int Sensors, const std::vector<int>& Pins);
     void processData();
     void calibrateSensor();
     void readSensor();
     ~robot(){};
};
#endif //ROBOT_LIB