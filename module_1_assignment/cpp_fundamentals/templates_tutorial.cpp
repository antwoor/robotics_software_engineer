#include <iostream>
using namespace std;
class robot{
public:
    template <typename T, typename U>
    void processData(T data1, U data2){
        cout << "processed data " << data1<<" and "<<data2<< endl;
        }
    // void processData(float data1, float data2){
    //     cout << "processed data " << data1+data2<< endl;
    //     }
    // void processData(const string& data1, const string& data2){
    //     cout << "processed data " << data1+data2<< endl;
    //     }
private:
    int NumSensors;
};
int main() {
    robot my_robot;
    my_robot.processData(3.14, 23);
    my_robot.processData("my", "robot"); 
    my_robot.processData(3, "d");
    return 0;
}