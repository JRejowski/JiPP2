//
// Created by Yonasz on 12.12.2021.
//

#ifndef JIPP2_CIRCLE1_H
#define JIPP2_CIRCLE1_H
#include "Figure1.h"

class Circle1 : public Figure1{
public:
    double getArea();
    Circle1(double r);
private:
    double r;
};


#endif //JIPP2_CIRCLE1_H
