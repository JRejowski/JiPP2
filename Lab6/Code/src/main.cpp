//
// Created by Admin on 15.11.2021.
//
#include <iostream>
#include "Node.h"
#include "Triangle.h"

int main()
{
    Node a(1,1),b(1,4),c(2,8);

    Triangle t1(a,b,c,"First triangle");

    t1.display();

    Triangle *triangle = &t1;

    cout << "Distance between first and second point is " << t1.distance(0,1) << endl;

    //cout<<pointsDistance(a,b);

    //showTriangleData(triangle);
    //showTriangleData(&t1);

    cout<<t1<<endl;

    return 0;
}

