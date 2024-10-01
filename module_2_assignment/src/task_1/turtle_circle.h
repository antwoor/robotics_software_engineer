#include "turtle_pub.h"

class CirclePublisher : public TrajectoryPublisher {
public:
    CirclePublisher() : TrajectoryPublisher(){};
protected:
    void timer_callback() override; 
};
