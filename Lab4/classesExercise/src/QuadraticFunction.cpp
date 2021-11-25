//
// Created by Yonasz on 06.11.2021.
//


#include "../include/QuadraticFunction.h"



QuadraticFunction::QuadraticFunction(double a, double b, double c):a(a),b(b),c(c){

}

void QuadraticFunction::showFunction() {
    cout<<"f(x) = "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
}

double QuadraticFunction::getA() {
    return a;
}
double QuadraticFunction::getB() {
    return b;
}
double QuadraticFunction::getC() {
    return c;
}

void QuadraticFunction::setA(double a) {
    this->a = a;
}
void QuadraticFunction::setB(double b) {
    this->b = b;
}
void QuadraticFunction::setC(double c) {
    this->c = c;
}
