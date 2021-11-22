//
// Created by Admin on 22.11.2021.
//

#ifndef JIPP2_CIRCLE_H
#define JIPP2_CIRCLE_H


#include "Figure.h"

class Circle : public Figure{
private:
    double r;
public:
    double area();
    double circuit();

};


#endif //JIPP2_CIRCLE_H
