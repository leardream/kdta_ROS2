#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

String folder = "/home/jh0933/다운로드/kdta_ROS2/opencv/data/";

int main()
{
    Mat img = imread(folder + "milkdrop.bmp");
    Mat bin;
    threshold(img, bin, 120, 255, THRESH_BINARY);
    
    Mat dst1, dst2, dst3, dst4, dst5, dst6;
    morphologyEx(bin, dst1, MORPH_OPEN, Mat(), Point(), 3);
    morphologyEx(bin, dst2, MORPH_CLOSE, Mat(), Point(), 3);
    morphologyEx(bin, dst3, MORPH_GRADIENT, Mat(), Point(), 3);
    morphologyEx(bin, dst4, MORPH_TOPHAT, Mat(), Point(), 3);
    morphologyEx(bin, dst5, MORPH_BLACKHAT, Mat(), Point(), 3);
    
    imshow("img", img);
    imshow("bin", bin);
    imshow("dst1", dst1);
    imshow("dst2", dst2);
    imshow("dst3", dst3);
    imshow("dst4", dst4);
    imshow("dst5", dst5);

    waitKey(0);

    return 0;
}