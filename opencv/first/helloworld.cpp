#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
 
    std::cout << "hello, world" << std::endl;

    cv::Mat image = cv::imread("lenna.bmp");

    cv::imshow("Display window", image);
    cv::waitKey(0);

    return 0;
}
