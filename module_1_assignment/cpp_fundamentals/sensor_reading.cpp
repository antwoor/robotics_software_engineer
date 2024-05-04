#include <iostream>
 int calcSum(int reading[5])
 {
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
       sum+=reading[i];
    }
    return sum;
 }
 int calacAverage(int sum)
 {
    int average = sum/5;
    return average;
 }
 void checkTH(int sum)
 {
    if (calacAverage(sum) > 33)
     {
       std::cout <<"Sensor reading sum is above treshold " << std::endl;
     }
     else 
     {
        std::cout <<"Sensor reading sum is alright" << std::endl;
     }
}
int main(){
 //std::cout << "sensor is reading" << std::endl;
 int sensorReadings1[5] = {7,23,34,45,56};
 int sum = calcSum(sensorReadings1); 
 std::cout <<"Sensor reading sum is " << sum << std::endl;
 std::cout <<"Sensor reading average is " << calacAverage(sum)<< std::endl;
 checkTH(sum);
 int sensorReadings2[5] = {44,43,44,45,56};
 sum = calcSum(sensorReadings2); 
 std::cout <<"Sensor reading sum is " << sum << std::endl;
 std::cout <<"Sensor reading average is " << calacAverage(sum)<< std::endl;
 checkTH(sum);
}
 