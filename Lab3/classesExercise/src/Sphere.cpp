//
// Created by Yonasz on 06.11.2021.
//

#include "../include/Sphere.h"

using namespace std;

Sphere::Sphere(double radius)
:radius(radius){}

double Sphere::countVolume() {

    return (4./3.)*3.14*(radius*radius*radius);
}

