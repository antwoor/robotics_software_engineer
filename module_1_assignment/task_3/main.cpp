#include "robot_class.h"
#include "lib_sensors.h"
#include <memory>
namespace fastRobots {
    std::unique_ptr<robot> F1;
    std::unique_ptr<robot> F2;
}

namespace slowRobots {
    std::unique_ptr<robot> S1;
    std::unique_ptr<robot> S2;
}
int main(int argc, char** argv){
    slowRobots::S2 = std::make_unique<robot>();
    lib_sensors<float, std::string> sensor(slowRobots::S2->getTemp<float>(), "big");
    sensor.printData(); 
    return 0;
}