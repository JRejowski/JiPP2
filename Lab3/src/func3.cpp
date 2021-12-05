//
// Created by Admin on 05.12.2021.
//
#include "func3.h"
#include <stdlib.h>

int getrandomint(int a, int b) {
    return a+rand()%(b-a+1);
}

int highestValueInArray(int *tab, int size) {
    int high=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(tab[i]>high)
        {
            high = tab[i];
        }

    }

    return high;
}

void changeOrder(int *tab, int size) {

    int *buffer = new int[size];
    for(int i=0; i<size; i++)
    {
        buffer[i]=tab[i];
    }
    for(int i=0;i<size;i++)
    {
        tab[i]=buffer[size-i-1];
    }

}


