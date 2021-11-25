//
// Created by Yonasz on 06.11.2021.
//

#ifndef JIPP2_QUADRATICFUNCTION_H
#define JIPP2_QUADRATICFUNCTION_H

#include <iostream>

using namespace std;

class QuadraticFunction {
private:
    double a;
    double b;
    double c;
public:
    QuadraticFunction(double a,double b,double c);
    void showFunction();

    double getA();
    double getB();
    double getC();

    void setA(double a);
    void setB(double b);
    void setC(double c);

};


#endif //JIPP2_QUADRATICFUNCTION_H
