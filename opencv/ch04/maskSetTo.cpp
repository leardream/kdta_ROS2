#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

String folder = "/home/jh0933/다운로드/kdta_ROS2/opencv/data/";

int main()
{
    Scalar yellow = Scalar(0, 255, 255);
    Scalar blue = Scalar(255, 0, 0);
    Scalar green = Scalar(0, 255, 0);
    Scalar red = Scalar(0, 0, 255);
    Scalar white = Scalar(255, 255, 255);
    Mat lenaimg = imread(folder + "lena.bmp");
    Mat maskSmile = imread(folder + "make_smile.bmp", IMREAD_GRAYSCALE);

    lenaimg.setTo(yellow, maskSmile);

    imshow("img", lenaimg);
    waitKey(0);

    Mat airplainImg = imread(folder + "airplain.bmp");
    Mat maskAirplain = imread(folder + "mask_plain.bmp", IMREAD_GRAYSCALE);
    Mat sky = imread(folder + "field.bmp");

    airplainImg.copyTo(sky, maskAirplain);

    imshow("img", sky);
    waitKey(0);

    return 0;
}
