
#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

#include <iostream>
#include <math.h>

using namespace std;

class Node {
private:
    double x, y;
    friend double pointsDistance(Node, Node);
public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);
};
double pointsDistance(Node a, Node b);


#endif //JIPP2_NODE_H
