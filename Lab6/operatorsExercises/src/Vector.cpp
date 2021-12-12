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

double Vector::operator*(const Vector &rhs) {
    return x*rhs.x+y*rhs.y;
}

Vector operator*(const double &lhs, const Vector &rhs) {
    return {lhs*rhs.x,lhs*rhs.y};
}

Vector operator*(const Vector &lhs, const double &rhs) {
    return Vector(lhs.x*rhs, lhs.y*rhs);
}

ostream &operator<<(ostream &lhs, const Vector &rhs) {
    lhs<<rhs.x<<"  "<<rhs.y;
    return lhs;
}

bool Vector::operator==(const Vector &rhs) {
    if (x == rhs.x && y == rhs.y) {
        return true;
    } else {
        return false;
    }
}





