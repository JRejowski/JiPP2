//
// Created by Admin on 25.10.2021.
//
#include <iostream>
#include "../include/func.h"

using namespace std;

struct car
{
    string brand;
    string model;
    int year_of_production=0;
    string colour;
    int number_of_owners=0;

}c1,c2,c3,c4;

void show_objects(car c)
{
    cout<<c.brand<<" | "<<c.model<<" | "<<c.year_of_production<<" | "<<c.colour<<" | "<<c.number_of_owners<<endl;
}

