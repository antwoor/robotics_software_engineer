#include "line_follower.h"

line_follower::line_follower() : Node("LineFollowingNode") {
    this->declare_parameter<std::string>("camera_topic", "/camera/image_raw");
    std::string camera_topic = this->get_parameter("camera_topic").as_string();
    this->declare_parameter<int>("lower_threshold", 200);
    this->declare_parameter<int>("upper_threshold", 250);
    _publisher = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
    _subscription = this->create_subscription<sensor_msgs::msg::Image>(
      camera_topic, 10,
      std::bind(&line_follower::cameraCallback, this, std::placeholders::_1));
    RCLCPP_INFO(this->get_logger(), "\n------ Node Started -----\n");
};
void line_follower::cameraCallback(const sensor_msgs::msg::Image::SharedPtr cameraMsg){
    auto velocityMsg = geometry_msgs::msg::Twist();
    cv_bridge::CvImagePtr cvPtr;
    cvPtr = cv_bridge::toCvCopy(cameraMsg, "bgr8");
    cv::Mat grayImage, cannyImage;
    cv::cvtColor(cvPtr->image, grayImage, cv::COLOR_BGR2GRAY);

    int upperThreshold = this->get_parameter("upper_threshold").as_int();
    int lowerThreshold = this->get_parameter("lower_threshold").as_int();
    cv::Canny(grayImage, cannyImage, lowerThreshold, upperThreshold);

    // Process Canny image to find the line's midpoint
    int row = 150, column = 0;
    cv::Mat roi = cannyImage(cv::Range(row, row + 240), cv::Range(column, column + 640));

    std::vector<int> edge;
    for (int i = 0; i < 640; ++i) {
      if (roi.at<uchar>(160, i) == 255) {
        edge.push_back(i);
      }
    }
    RCLCPP_INFO(this->get_logger(), "\n------ Image Not Received -----\n");
    if (!edge.empty()) {
      int midArea = edge.back() - edge.front();
      int midPoint = edge.front() + midArea / 2;
      int robotMidPoint = 640 / 2;

      // Calculate error and adjust robot's direction
      double error = robotMidPoint - midPoint;
      velocityMsg.linear.x = 0.1;
      if (error < 0) {
        velocityMsg.angular.z = -_angularVel;
      } else {
        velocityMsg.angular.z = _angularVel;
      }

      _publisher->publish(velocityMsg);

      // Visualization
      cv::circle(roi, cv::Point(midPoint, 160), 2, cv::Scalar(255, 255, 255), -1);
      cv::circle(roi, cv::Point(robotMidPoint, 160), 5, cv::Scalar(255, 255, 255), -1);
      cv::imshow("Image", roi);
      RCLCPP_INFO(this->get_logger(), "\n------ Image Received -----\n");
      cv::waitKey(1);
    }
}