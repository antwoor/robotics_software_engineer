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
    cv::cvtColor(cvPtr->image, grayImage, cv::COLOR_BGR2GRAY); //Change the colorscheme of Image from cvBridge & save it to GrayImage

    //Define the tresholds for Canny
    static int lowerThreshold = this->get_parameter("lower_threshold").as_int();
    static int upperThreshold = this->get_parameter("upper_threshold").as_int();
    //Apply Canny filter to find all of the contours 
    cv::Canny(grayImage , cannyImage, lowerThreshold, upperThreshold);
    cv::Mat roi = cannyImage(cv::Range(row, row+200), cv::Range(column, column+500));
    
    static std::vector<int> edges(5);//here we are checking how many white pixels
    for(int i=0; i<500; ++i){// along the almost whole X-axis of an  croppedimage 
      if(roi.at<uchar>(160,i)==255){// img is already cropped so we have to measure relative numbers of pixels
        edges[0]++;
        //RCLCPP_INFO(this->get_logger(), "\n count of  edges: %i \n", i);
      }
    }
    switch (edges[0]){
      case 1:
        edges[1]++;
        break;
      case 2:
        edges[2]++;
        break;
      case 3:
        edges[3]++;
        break;
      case 4:
        edges[4]++;
        break;
    }
    edges[0] = 0; //clear only holder to see the drift of an error
    RCLCPP_INFO(this->get_logger(), "\n count of 1 edge: %i \n", edges[1]);
    RCLCPP_INFO(this->get_logger(), "\n count of 2 edge: %i \n", edges[2]);
    RCLCPP_INFO(this->get_logger(), "\n count of 3 edge: %i \n", edges[3]);
    RCLCPP_INFO(this->get_logger(), "\n count of 4 edge: %i \n", edges[4]);
    cv::imshow("Image", roi);
    cv::waitKey(1);
}