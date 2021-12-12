//
// Created by Yonasz on 25.11.2021.
//

#ifndef JIPP2_POINT_H
#define JIPP2_POINT_H

#include "Figure0.h"

class Point {
public:
    friend class Figure0;
    friend double distanceBetweenPoints(Point A, Point B);
    double x;
    double y;
    Point(double x, double y);


};
double distanceBetweenPoints(Point A, Point B);

#endif //JIPP2_POINT_H
