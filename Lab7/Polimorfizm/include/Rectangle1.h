//
// Created by Yonasz on 12.12.2021.
//

#ifndef JIPP2_RECTANGLE1_H
#define JIPP2_RECTANGLE1_H
#include "Figure1.h"

class Rectangle1 : public Figure1{
public:
    double getArea();
    Rectangle1(double a,double b);
private:
    double a;
    double b;

};


#endif //JIPP2_RECTANGLE1_H
