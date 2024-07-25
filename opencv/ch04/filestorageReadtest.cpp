#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/jh0933/다운로드/kdta_ROS2/opencv/data";

int main()
{
    FileStorage fs;
    String name;
    String age;
    Mat img;

    fs.open(folder + "myData.json", FileStorage::READ);
    if (!fs.isOpened()) {
        cerr << "file open failed" << endl;
        return 1;
    }
    fs["name"] >> name;
    fs["mat1"] >> img;
    fs["age"] >> age;

    fs.release();

    cout << name << endl;
    imshow("img", img);
    waitKey(0);


    return 0;
}