#include <iostream>
using namespace std;
class robot {
public:
  robot() {
    cout << "construct default" << endl;
    checkSensorConnection();
    readSensor();
    calibrateSensor();
    filterData();
  }
  void checkSensorConnection() { cout << "checking connection..." << endl; }
  void filterData() { cout << "filtering data..." << endl; }
  void dataAction() { cout << "jumping" << endl; }
  void calibrateSensor() { cout << "calibrating the sensor" << endl; }
  void readSensor() { cout << "reading data from the sensor" << endl; }
  void processData() { cout << "processing data" << endl; }

private:
  int NumSensors;
};
int main() {
  robot my_robot;
  // my_robot.checkSensorConnection();
  // my_robot.readSensor();
  // my_robot.calibrateSensor();
  // my_robot.filterData();
  // my_robot.processData();
  // my_robot.dataAction();
  return 0;
}