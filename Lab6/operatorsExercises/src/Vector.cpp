//
// Created by Admin on 15.11.2021.
//

#include "Vector.h"



Vector::Vector(double x,double y):x(x),y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

void Vector::print() {
    cout<<"x: "<<x<<" y: "<<y<<endl;
}


Vector Vector::operator+(const Vector &rhs) {
    return {x + rhs.x, y + rhs.y};
}

Vector &Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) {
    return {x - rhs.x, y - rhs.y};
}

Vector &Vector::operator-=(const Vector &rhs) {
    this->x = this->x - rhs.x;
    this->y = this->y - rhs.y;
    return *this;
}


