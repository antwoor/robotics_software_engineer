#include <iostream>
using namespace std;
namespace Digital
{
   namespace D1 {
    void calibrateSensor(){
        cout << "calibrating the sensor" << endl;
     }
     void readSensor(){
         cout << "reading data from the sensor" << endl;
     }
     void processData(){
         cout << "processing data" << endl;
     }
    } 
   namespace D2 {
    void calibrateSensor(){
        cout << "calibrating the sensor" << endl;
     }
     void readSensor(){
         cout << "reading data from the sensor" << endl;
     }
     void processData(){
         cout << "processing data" << endl;
     }
    } 
} // namespace DIgital


namespace Analog::A1 {
void calibrateSensor(){
    cout << "calibrating the sensor" << endl;
 }
 void readSensor(){
     cout << "reading data from the sensor" << endl;
 }
 void processData(){
     cout << "processing data" << endl;
 }
}
namespace Analog::A2 {
void calibrateSensor(){
    cout << "calibrating the sensor" << endl;
 }
 void readSensor(){
     cout << "reading data from the sensor" << endl;
 }
 void processData(){
     cout << "processing data" << endl;
 }
}
int main() {
    Digital::D1::calibrateSensor(); 
    Analog::A1::calibrateSensor();
    Digital::D2::calibrateSensor(); 
    Analog::A2::calibrateSensor();
    Digital::D1::readSensor();
    Analog::A1::readSensor();
    Analog::A2::readSensor();
    Digital::D2::readSensor();
    return 0;
}