#include "cvxFont.h"
#include <iostream>
int main(int argc, char *argv[])
{
    cvx::CvxFont font("./simsun.ttf");
    cv::Mat img(400, 800, CV_8UC3, cv::Scalar(255, 255, 255)); // create a black background
    cv::String msg6 = "文字:[主要功能】:可紧致头发磷层，从而达到";
    //cv::String msg6 = "aaaaaaaaaaaaaaaaa";
     // be careful to use the font that support Chinese
    std::cout<<msg6<<std::endl;
    cvx::putText(img, msg6, cv::Point(10, 40), font, 18,  cv::Scalar(255, 0, 0));

    cv::imwrite("./test.jpg",img);
    //cv::imshow("test", img);
    //cv::waitKey(0);
    return 0;
}

