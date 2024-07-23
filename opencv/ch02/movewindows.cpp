#include <iostream>
#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

string folder = "/home/jh0933/다운로드/kdta_ROS2/opencv/data/";
int main()
{
    Mat img;
    img = imread(folder + "lenna.bmp");
    namedWindow("lenna");
    imshow("lenna", img);
    while (waitKey(0) != -1)
    {
        //int key = waitKey(0);
        //cout << key << endl;
        moveWindow("lenna", 50, 0);
    }
    return 0;
}