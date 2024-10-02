#include "turtle_circle.h"

CirclePublisher::CirclePublisher() : TrajectoryPublisher() {
    this->message.linear.x = 0.5; // Константная скорость
}

void CirclePublisher::timer_callback() {
    this->message.angular.z = 1.0; // Угловая скорость для кругового движения
    _pub->publish(this->message);
}
