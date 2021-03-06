//
// Created by Yonasz on 12.12.2021.
//

#ifndef JIPP2_TRIANGLE_H
#define JIPP2_TRIANGLE_H

#include "Node.h"

class Triangle {
private:
    Node n[3];
    string name;

public:
    friend class Node;
    friend ostream & operator<<(ostream &lhs, const Triangle &rhs);

    void display();

    Triangle(Node n1, Node n2, Node n3, string name);

    double distance(int firstPointIndex, int secondPointIndex);



};

ostream & operator<<(ostream &lhs, const Triangle &rhs);
void showTriangleData(Triangle triangle);
void showTriangleData(Triangle &triangle);
void showTriangleData(Triangle *triangle);

#endif //JIPP2_TRIANGLE_H
