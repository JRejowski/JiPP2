//
// Created by Yonasz on 12.12.2021.
//

#include "../include/Figure0.h"

Figure0::Figure0(int numberOfVertices) : numbersOfVertices(numberOfVertices) {

    double a,b;

    for(int i=0;i<numberOfVertices;i++)
    {
        cout<<"Podaj wspolrzedne pierwszego punktu: ";
        cin>>a;
        cin>>b;
        points[i] = Point(a,b);
    }

}

