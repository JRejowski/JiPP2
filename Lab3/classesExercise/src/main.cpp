//
// Created by Yonasz on 04.11.2021.
//
#include <iostream>
#include "../include/Cuboid.h"
#include "../include/Sphere.h"
#include "../include/QuadraticFunction.h"
using namespace std;

int main()
{
    Cuboid c1(1,2,3);
    Sphere s1(3);
    QuadraticFunction q1(2,4,6);

    cout<<c1.countArea()<<endl;
    cout<<s1.countVolume()<<endl;
    q1.showFunction();

    return 0;
}
