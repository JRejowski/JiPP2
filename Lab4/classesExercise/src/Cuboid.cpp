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

double Cuboid::getWidth() {
    return width;
}
double Cuboid::getLength() {
    return length;
}
double Cuboid::getHeight() {
    return height;
}

void Cuboid::setWidth(double width) {
    this->width = width;
}
void Cuboid::setLength(double length) {
    this->length = length;
}
void Cuboid::setHeight(double height) {
    this->height = height;
}

