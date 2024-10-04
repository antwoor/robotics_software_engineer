#include "turtle_pub.h"

class SpiralPublisher : public TrajectoryPublisher {
public:
    SpiralPublisher(const int& a, const int& k);
    double r_, phi_, a_, k_;
    size_t time_;
protected:
    void timer_callback() override; 
};
