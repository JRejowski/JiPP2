

#ifndef JIPP2_FIGURE_H
#define JIPP2_FIGURE_H

#include "Point.h"
#include <iostream>

using namespace std;

class Figure0 {
public:
    int numbersOfVertices=0;
    Point *points;
    points = new Point[numbersOfVertices];
    Figure0(int numberOfVertices);



};


#endif //JIPP2_FIGURE_H
