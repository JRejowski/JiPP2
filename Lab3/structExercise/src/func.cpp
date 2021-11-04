//
// Created by Admin on 25.10.2021.
//
#include <iostream>
#include <string>
#include "../include/func.h"

using namespace std;

void show_objects(car c)
{
    cout<<c.brand<<" | "<<c.model<<" | "<<c.year_of_production<<" | "<<c.colour<<" | "<<c.number_of_owners<<endl;
}


int howManyCarsSameBrand(struct car *cars, int numberOfCars, string wantedBrand)
{
    int counter=0;

    for(int i=0;i<numberOfCars;++i)
    {
        if(cars[i].brand==wantedBrand)
        {
            counter++;
        }
    }

return counter;
}

int whichIsTheOldestCar(struct car *cars, int numberOfCars)
{
    int oldest=0;
    int oldestYear=cars[0].year_of_production;
    for(int i=0;i<numberOfCars;++i)
    {
        if(cars[i].year_of_production<oldestYear)
        {
            oldestYear=cars[i].year_of_production;
            oldest=i;
        }
    }

    return oldest;
}

