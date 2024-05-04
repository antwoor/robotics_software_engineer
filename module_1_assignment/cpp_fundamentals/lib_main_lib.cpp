#include "lib_tutorial.h"
#include <eigen3/Eigen/Dense>
#include <opencv4/opencv2/opencv.hpp>
int main() {
    vector<int> Mypins = {2, 2, 8, 1, 3, 3, 7};
    int MySens = Mypins.size();
    robot my_robot(MySens, Mypins);
    my_robot.calibrateSensor();
    my_robot.readSensor();
    my_robot.processData();
    return 0;
}