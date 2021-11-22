//
// Created by Admin on 22.11.2021.
//

#include "Triangle.h"

double Triangle::area() {
    return (a*h)/2;
}

double Triangle::circuit() {
    return a+b+c;
}

Triangle::Triangle(double a, double b, double c, double h):a(a),b(b),c(c),h(h) {

}
