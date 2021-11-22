//
// Created by Admin on 22.11.2021.
//

#ifndef JIPP2_TRIANGLE_H
#define JIPP2_TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {
private:
    double a;
    double b;
    double c;
    double h;
public:
    Triangle(double a, double b, double c, double h);
    double area();
    double circuit();

};


#endif //JIPP2_TRIANGLE_H
