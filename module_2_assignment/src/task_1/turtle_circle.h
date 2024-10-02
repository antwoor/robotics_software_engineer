#include "turtle_pub.h"

class CirclePublisher : public TrajectoryPublisher {
public:
    CirclePublisher();
protected:
    void timer_callback() override; 
};
