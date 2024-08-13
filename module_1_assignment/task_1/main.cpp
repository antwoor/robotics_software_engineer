#include "robot_class.h"
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
    fastRobots::F1 = std::make_unique<robot>();
    slowRobots::S1 = std::make_unique<robot>();
    fastRobots::F1->moveBackward();
    slowRobots::S1->stop();
    std::vector<short unsigned int> params = {1, 2, 3, 4};
    fastRobots::F2 = std::make_unique<robot>("SlowPock", params[0], params[1], params[2], params[3]);
    fastRobots::F2->moveForward();
    fastRobots::F1->stop();
    fastRobots::F2->stop();
    return 0;
}