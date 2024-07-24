#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/jh0933/다운로드/kdta_ROS2/opencv/data/";

int main()
{
   Mat mat1 = Mat::zeros(3, 4, CV_8UC1);
   cout <<"Before mat1 : " << mat1 << endl;

    for(int j = 0; j < mat1.rows; j++) {
        for (int i = 0; i < mat1.cols; i++) {
            mat1.at<uchar>(j, i)++;
        }
    }
    cout <<"After mat1 : " << mat1 << endl;
    waitKey(0);

    return 0;
}