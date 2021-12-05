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

double calculateAverage(double *a, double *b) {
    return  (*a + *b)/2;
}

void printPositive(int *tab, int size) {
    for(int i=0;i<size;i++)
    {
        if(tab[i]>0)
        {
            cout<<tab[i]<<" ";
        }
    }
    cout<<endl;

}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void sort(int *tab, int size)
{
    int i, j;
    for (i = 0; i < size-1; i++)

        // Last i elements are already in place
        for (j = 0; j < size-i-1; j++)
            if (tab[j] > tab[j+1])
                swap(&tab[j], &tab[j+1]);
}

void insertValueToVariable(int x, int *w) {

    *w = x;
}





