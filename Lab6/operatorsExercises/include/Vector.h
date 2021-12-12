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
    friend Vector operator*(const double &lhs, const Vector &rhs);
    friend Vector operator*(const Vector &lhs, const double &rhs);

public:

    friend ostream & operator<<(ostream &lhs, const Vector &rhs);

    Vector(double x, double y);

    void print();

    double length();

    Vector operator+(const Vector &rhs);

    Vector &operator+=(const Vector &rhs);

    Vector operator-(const Vector &rhs);

    Vector &operator-=(const Vector &rhs);

    double operator*(const Vector &rhs);

    bool operator==(const Vector &rhs);



};

ostream & operator<<(ostream &lhs, const Vector &rhs);
Vector operator*(const double &lhs, const Vector &rhs);
Vector operator*(const Vector &lhs, const double &rhs);

#endif //JIPP2_VECTOR_H
