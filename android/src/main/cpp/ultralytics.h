//
// Created by Sergio Sánchez on 23/11/23.
//

#ifndef ANDROID_ULTRALYTICS_H
#define ANDROID_ULTRALYTICS_H

#include <opencv2/core/core.hpp>

struct DetectedObject {
    cv::Rect_<float> rect;
    float rotation;
    int index;
    float confidence;
};

#endif //ANDROID_ULTRALYTICS_H
