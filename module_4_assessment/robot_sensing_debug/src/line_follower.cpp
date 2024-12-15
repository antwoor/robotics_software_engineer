#include "line_follower.h"

line_follower::line_follower() : Node("LineFollowingNode") {
    this->declare_parameter<std::string>("camera_topic", "/camera/image_raw");
    std::string camera_topic = this->get_parameter("camera_topic").as_string();
    this->declare_parameter<int>("lower_threshold", 50);
    this->declare_parameter<int>("upper_threshold", 100);
    _publisher = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
    _subscription = this->create_subscription<sensor_msgs::msg::Image>(
      camera_topic, 10,
      std::bind(&line_follower::cameraCallback, this, std::placeholders::_1));
    RCLCPP_INFO(this->get_logger(), "\n------ Node Started -----\n");
};
void line_follower::cameraCallback(const sensor_msgs::msg::Image::SharedPtr cameraMsg){
    
    auto velocityMsg = geometry_msgs::msg::Twist();
    static cv_bridge::CvImagePtr cvPtr; //Create OpenCv Image pointer
    cvPtr = cv_bridge::toCvCopy(cameraMsg, "bgr8"); //translate ROS cameraMSG to OpenCv image
    cv::Mat grayImage, cannyImage; //creates two colorFrames for the next filtering & scanning operations
    cv::cvtColor(cvPtr->image, grayImage, cv::COLOR_BGR2GRAY); //Change the colorscheme of Image from cvBridge & save it to GrayUmage

    //Define the tresholds for Canny
    static int lowerThreshold = this->get_parameter("lower_threshold").as_int();
    static int upperThreshold = this->get_parameter("upper_threshold").as_int();

    //Apply Canny filet 
    cv::Canny(grayImage , cannyImage, lowerThreshold, upperThreshold);

    cv::imshow("Image", cannyImage);
    cv::waitKey(1);
}