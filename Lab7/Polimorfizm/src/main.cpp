//
// Created by Yonasz on 05.12.2021.
//
#include <iostream>
#include "Figure1.h"
#include "Circle1.h"
#include "Rectangle1.h"

using namespace std;

int main() {
    Figure1 *circle = new Circle1(5);
    Figure1 *rectangle = new Rectangle1(5, 18);

    cout << "Circle area: " << circle->getArea() << endl;
    cout << "Rectangle area: " << rectangle->getArea() << endl;

    return 0;
}