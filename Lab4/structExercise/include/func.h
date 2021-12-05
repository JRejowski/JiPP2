//
// Created by Admin on 25.10.2021.
//

#ifndef JIPP2_FUNC_H
#define JIPP2_FUNC_H

#include <iostream>
#include <string>

using namespace std;

struct car
{
    string brand;
    string model;
    int year_of_production;
    string colour;
    int number_of_owners;

};

void show_objects(car c);

int howManyCarsSameBrand(struct car *cars, int numberOfCars, string wantedBrand);

int whichIsTheOldestCar(struct car *cars, int numberOfCars);


#endif //JIPP2_FUNC_H
