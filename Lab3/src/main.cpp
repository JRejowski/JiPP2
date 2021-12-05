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
    srand(time(NULL));
    int *tab = new int[100];
    for(int i=0;i<100;i++)
    {
        tab[i]= getrandomint(1,100);
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


    return 0;
}

