//
// Created by Yonasz on 04.11.2021.
//

#include "../include/Cuboid.h"

double Cuboid::countArea()
{
    double area = 2*(width*length+width*height+length*height);
    return area;
}

Cuboid::Cuboid(double width, double length, double height)
:width(width),length(length),height(height)
{

}


