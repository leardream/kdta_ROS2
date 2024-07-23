#include "opencv2/opencv.hpp"
#include <string>
#include <iostream>

int main() 
{
        std::cout << "hello, world"; << std::endl;
        cv::mat img;
        ing = cv::imread("lenna.bmp");
        cv::imshow("image", img);
        cv::waitKey(0);

        return 0;
}