//
// Created by Admin on 25.10.2021.
//
#include <iostream>
#include <string>
#include "../include/func.h"

using namespace std;

int main()
{
    struct car c1,c2,c3,c4;
    c1.brand = "Subaru";
    c1.model = "Forester";
    c1.year_of_production = 2003;
    c1.colour = "Blue";
    c1.number_of_owners=3;

    c2 = {"Ford","Mustang",1971,"Green",2};
    c3 = {"Ford","Ranger",1992,"White",5};
    c4 = {"Lamborghini","Gallardo", 2005,"Yellow",128};
    show_objects(c1);
    show_objects(c2);
    show_objects(c3);
    show_objects(c4);

    struct car cars[4]={c1,c2,c3,c4};

    cout<<howManyCarsSameBrand(cars,4,"Ford")<<endl;

    cout<<whichIsTheOldestCar(cars,4)<<endl;

    return 0;
}