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
    imshow("lena", img);
    int key = waitKey(0);
    cout << key << endl;
    //Size szie;
    //size.height = 100;
    //size.width = 100;
    destroyWindow("lenna");
    //resizeWindow("lenna", szie);
    imshow("lenna", img);
    waitKey(0);
    return 0;
}