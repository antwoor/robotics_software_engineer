#include "lib_tutorial.h"  
    robot::robot(int Sensors, const vector<int>& Pins): NumSensors(Sensors), sensorPins(Pins) 
    {
        cout << "created robot with " << NumSensors << " sensors on ";
        for (int i : sensorPins)
        {
            cout << i << " " ;
        }
        cout << "pins" << endl; 
    };
    void robot::calibrateSensor(){
        cout << "calibrating the sensor" << endl;
     }
    void robot::readSensor(){
         cout << "reading data from the sensor" << endl;
     }
    void robot::processData(){
         cout << "processing data" << endl;
     }