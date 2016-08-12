//
//  main.cpp
//  FbyCharacterNormalization

//
//  Created by Boyuan Feng on 13-1-24.

//  Copyright (c) 2013年 Boyuan Feng. All rights reserved.

//

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv/cvaux.hpp>
#include <fstream>
using namespace std;

#define BYTE unsigned char

int main(int argc, const char * argv[])

{
    // insert code here...
#if 1
//    cvLoadImage( filename, -1 ); 默认读取图像的原通道数
//    cvLoadImage( filename, 0 );强制转化读取图像为灰度图
//    cvLoadImage( filename, 1 );读取彩色图
    //get the image from the directed path
    IplImage* img = cvLoadImage("/Users/yxy/Desktop/meng.jpeg", -1);
    //NSLog(img);
    //create a window to display the image
    cvNamedWindow("picture", 1);;//创建窗口
    //show the image in the window
    cvShowImage("picture", img);//显示图像
    //wait for the user to hit a key
    cvWaitKey(0);//等待按键
    //delete the image and window
    cvReleaseImage(&img);//释放图像
    cvDestroyWindow("picture");//销毁窗口
#endif
    //return
    return 0;
}