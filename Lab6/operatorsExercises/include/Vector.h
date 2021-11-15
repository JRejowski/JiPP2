//
// Created by Admin on 15.11.2021.
//

#ifndef JIPP2_VECTOR_H
#define JIPP2_VECTOR_H

#include <iostream>
#include <math.h>

using namespace std;

class Vector {
private:
    double x, y;

public:
    Vector(double x, double y);

    void print();

    double length();

    Vector operator+(const Vector &rhs);

    Vector &operator+=(const Vector &rhs);

    Vector operator-(const Vector &rhs);

    Vector &operator-=(const Vector &rhs);

};

#endif //JIPP2_VECTOR_H
