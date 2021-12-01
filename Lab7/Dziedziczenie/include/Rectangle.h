
#ifndef JIPP2_RECTANGLE_H
#define JIPP2_RECTANGLE_H


#include "Figure.h"

class Rectangle : public Figure {
private:
    double a;
    double b;
public:
    Rectangle(string name, string color, double a, double b);
    double area();
    double circuit();
    void printRectangleData();

};


#endif //JIPP2_RECTANGLE_H
