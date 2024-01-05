#include <iostream>
#include <opencv2/opencv.hpp>
#include <thread>
#include <chrono>

using namespace cv;
using namespace std;

string pixelToASCII(int pixel_intensity)
{
    const string ASCII_CHARS = "@%#!*+=-.    ";
    //const string ASCII_CHARS = "  ._-=+*!&#%@";
    string s = string(1, ASCII_CHARS[pixel_intensity * ASCII_CHARS.length() / 256]);
    return s;
}

int main()
{
    string video_path = "/Users/zcj/work/c_workspace/hello/video.mp4";
    VideoCapture cap(video_path);
    double fps = cap.get(CAP_PROP_FPS);
    cout << fps << endl;

    int frame_duration_ms = 1000 / fps;
    int width = 150, height = 50;

    int frame_width = cap.get(CAP_PROP_FRAME_WIDTH);
    int frame_height = cap.get(CAP_PROP_FRAME_HEIGHT);

    height = (width * frame_height / frame_width) * 0.4194;

    cv::Mat frame, gray_frame, resized_frame;
    while (true)
    {
        cap >> frame;
        if (frame.empty())
        {
            break;
        }

        cv::cvtColor(frame, gray_frame, cv::COLOR_BGR2GRAY);
        resize(gray_frame, resized_frame, Size(width, height), 0, 0, INTER_LINEAR);
        string ascii_frame;

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                ascii_frame += pixelToASCII(resized_frame.at<uchar>(i, j));
            }
            ascii_frame += "\n";
        }

        system("clear");
        cout << ascii_frame;
        std::this_thread::sleep_for(std::chrono::milliseconds(frame_duration_ms - 10));
    }
    return 0;
}