#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/jh0933/다운로드/kdta_ROS2/opencv/data/";

int main()
{
    float data1[] = {1, 1, 2, 3};
    float *data2 = new float[4];
    data2[0] = 1;
    data2[1] = 1;
    data2[2] = 3;
    data2[3] = 4;

    Mat mat1(2, 2, CV_32FC1, data1);
    Mat mat2(2, 2, CV_32FC1, data2);

    cout << "mat1: \n" << endl;
    cout << "mat2: \n" << endl;

    delete data2;
    return 0;
}