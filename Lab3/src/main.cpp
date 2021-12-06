//
// Created by Admin on 05.12.2021.
//

#include <iostream>
#include "func3.h"
#include <time.h>
#include <stdlib.h>


using namespace std;

int main()
{
    double a=2;
    double b=4;

    int w;

    srand(time(NULL));
    int *tab = new int[100];
    for(int i=0;i<100;i++)
    {
        tab[i]= getrandomint(1,100);
        tab[i]= getrandomint(-100,100);
    }
    for(int i=0; i<100; i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    cout<<"Highest number in array: "<<highestValueInArray(tab,100)<<endl;
    changeOrder(tab,100);
    for(int i=0; i<100; i++)
    {
        cout<<tab[i]<<" ";
    }

    cout<<endl;
    cout<<calculateAverage(&a,&b);
    cout<<endl;
    printPositive(tab,100);

    sort(tab,100);

    for(int i=0; i<100; i++)
    {
        cout<<tab[i]<<" ";
    }
    insertValueToVariable(10,&w);

    cout<<endl;
    cout<<w;

    return 0;
}

