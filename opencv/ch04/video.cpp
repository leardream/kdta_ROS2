#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/jh0933/다운로드/kdta_ROS2/opencv/data";

int main()
{
    Mat frame, doubleFrame, reshapeFrame;
    VideoCapture cap(folder + "vtest.avi");

    double fps = cap.get(CAP_PROP_FPS);
    int delay = cvRound(1000 / fps);
    Size sz1(cap.get(CAP_PROP_FRAME_WIDTH), cap.get(CAP_PROP_FRAME_HEIGHT));
    std::vector <int> shape = {sz1.height * 2, sz1.width / 2};
     
    if (!cap.isOpened()) {
        cerr << "Video open failed " << endl;
        return -1;
    }
    cout << "Video open" << endl;
    int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X');
    VideoWriter outputVideo(folder + "output10.avi", fourcc, fps, sz1); 


    while(true) {
        cap >> frame;
        if (frame.empty())
            break;

        resize(frame, doubleFrame, sz1 * 2);
        reshapeFrame = frame.reshape(3,shape);

        imshow("frame", frame);
        imshow("doubleFrame", doubleFrame);
        imshow("rashape", reshapeFrame);
        
        outputVideo << frame;

        if (waitKey(delay) == 27)
            break;
    }
    cap.release();
    outputVideo.release();

    return 0;
}