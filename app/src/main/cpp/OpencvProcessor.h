#include <jni.h>
#include <opencv2/core/types.hpp>
#include <opencv2/opencv.hpp>

//
// Created by Devilsen on 2019/07/14 0014.
//
#ifndef CZXING_OPENCVPROCESSOR_H
#define CZXING_OPENCVPROCESSOR_H

using namespace cv;

class OpencvProcessor {
public:
    void init(const char *path);

    std::vector<cv::Rect> processData(jbyte *data, jint w, jint h);

    void processData2(int *data, jint w, jint h, Point *point);
};

#endif //CZXING_OPENCVPROCESSOR_H