//
// Created by Yonasz on 06.11.2021.
//


#include "../include/QuadraticFunction.h"



QuadraticFunction::QuadraticFunction(double a, double b, double c):a(a),b(b),c(c){

}

void QuadraticFunction::showFunction() {
    cout<<"f(x) = "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
}
