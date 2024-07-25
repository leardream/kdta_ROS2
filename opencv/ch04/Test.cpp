#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

string folder = "/home/jh0933/다운로드/kdta_ROS2/opencv/data/";

void onMouse(int event, int x, int y, int flags, void *data);

struct Mydata {
    Point ptOld;
    Point ptNew;
    Mat img;
    Scalar yellow = Scalar(0, 255, 255);
    Scalar blue = Scalar(255, 0, 0);
    Scalar green = Scalar(0, 255, 0);
    Scalar red = Scalar(0, 0, 255);
    Scalar white = Scalar(255, 255, 255);
    bool flag = false;
};

int main()
{
    Mydata mydata;
    Mat img = imread(folder + "lena.bmp");

    if (img.empty()) {
        cout << "Could not load image." << endl;
        return -1;
    }

    mydata.img = img.clone();
    namedWindow("lena");
    imshow("lena", img);

    setMouseCallback("lena", onMouse, (void *)&mydata);

    waitKey(0);
    destroyWindow("lena");

    return 0;
}

void onMouse(int event, int x, int y, int flags, void *data)
{
    Mydata *ptr = (Mydata *)data;
    if (event == EVENT_MOUSEMOVE) {
        ptr->img = imread(folder + "lena.bmp").clone();
        rectangle(ptr->img, Point(x - 25, y - 25), Point(x + 25, y + 25), ptr->white, 2);
        imshow("lena", ptr->img);
    } else if (event == EVENT_LBUTTONDOWN) {
        Vec3b bgr = ptr->img.at<Vec3b>(y, x);
        cout << "BGR Value at (" << x << ", " << y << "): "
             << "B=" << static_cast<int>(bgr[0]) << ", "
             << "G=" << static_cast<int>(bgr[1]) << ", "
             << "R=" << static_cast<int>(bgr[2]) << endl;
    }
}
