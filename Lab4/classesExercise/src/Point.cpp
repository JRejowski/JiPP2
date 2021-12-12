//
// Created by Yonasz on 25.11.2021.
//

#include "../include/Point.h"
#include <math.h>

Point::Point(double x, double y):x(x),y(y) {

}

double distanceBetweenPoints(Point A, Point B) {
    return sqrt(pow(B.x-A.x,2)+pow(B.y-A.y,2));
}
