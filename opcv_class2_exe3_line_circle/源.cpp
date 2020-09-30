#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	

	cv::Mat dispMat = imread("D:\\1233.jpg");

		cv::Point pt1;
		cv::Point pt2;
		cv::Rect rect;
		rect.x = 10;
		rect.y = 10;
		rect.width = 100;
		rect.height = 200;
		pt1.x = 100;
		pt1.y = 100;
		pt2.x = 100;
		pt2.y = 200;		
		line(dispMat, pt1, pt2, CV_RGB(255, 0, 0), 12, 8, 0);
		circle(dispMat, pt1, 5, CV_RGB(0,58, 0), 8, 8, 0);
		rectangle(dispMat, rect, CV_RGB(0, 0, 233), 1, 8, 0);

	imshow("src", dispMat);
	waitKey(0);
	return 0;

}