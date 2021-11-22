
#include "../include/Rectangle.h"




double Rectangle::area() {
    return a*b;
}

double Rectangle::circuit() {
    return 2*a+2*b;
}

Rectangle::Rectangle(string name, string color, double a, double b):a(a),b(b){
    this->name;
    this->color;
}

