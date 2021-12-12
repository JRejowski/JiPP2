//
// Created by Yonasz on 12.12.2021.
//
#include <math.h>
#include "Triangle.h"

void Triangle::display() {
    cout<<"Name: "<<name<<endl;
    cout<<"Node 0: "<<n[0].x<<"\t"<<n[0].y<<endl;
    cout<<"Node 1: "<<n[1].x<<"\t"<<n[1].y<<endl;
    cout<<"Node 2: "<<n[2].x<<"\t"<<n[2].y<<endl;
}

Triangle::Triangle(Node n1, Node n2, Node n3, string name) {
    this->n[0] = n1;
    this->n[1] = n2;
    this->n[2] = n3;
    this->name = name;
}

double Triangle::distance(int firstPointIndex, int secondPointIndex) {
    return sqrt(pow((n[secondPointIndex].x-n[firstPointIndex].x),2)+pow((n[secondPointIndex].y-n[firstPointIndex].y),2));
}

void showTriangleData(Triangle triangle) {
    triangle.display();
}


void showTriangleData(Triangle &triangle) {
   triangle.display();
}

void showTriangleData(Triangle *triangle) {
    triangle->display();
}

ostream &operator<<(ostream &lhs, const Triangle &rhs) {
    lhs<<"Name: "<<rhs.name<<endl;
    lhs<<"Node 0: "<<rhs.n[0].x<<"  "<<rhs.n[0].y<<endl;
    lhs<<"Node 1: "<<rhs.n[1].x<<"  "<<rhs.n[1].y<<endl;
    lhs<<"Node 2: "<<rhs.n[2].x<<"  "<<rhs.n[2].y<<endl;
    return lhs;
}
