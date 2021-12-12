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
    /*
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
     */
    int a=0;
    int b=0;
    int wynik=0;

    try
    {
        cout<<"Podaj liczby do podzielenia: ";
        cin>>a;
        if(a<0) throw(a);
        cin>>b;
        if(b<0) throw(b);


        wynik = a/b;
        if(wynik<0) {
            throw(wynik);
        }
        else
        {
            cout<<"Wynik dzielenia "<<a<<" / "<<b<<" = "<<wynik;
        }
    }
    catch (int x)
    {

        cout<<"Zle dane";
    }


    return 0;
}

