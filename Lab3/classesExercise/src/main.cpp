//
// Created by Admin on 25.10.2021.
//
#include <iostream>
#include <string>
#include "../include/func.h"

using namespace std;



int main()
{
    c1.brand = "Subaru";
    c1.model = "Forester";
    c1.year_of_production = 2003;
    c1.colour = "Blue";
    c1.number_of_owners=3;

    c2 = {"Ford","Mustang",1971,"Green",2};
    c3 = {"Mitsubishi","Lancer",1992,"White",5};
    c4 = {"Lamborghini","Gallardo", 2005,"Yellow",128};
    show_objects(c1);
    show_objects(c2);
    show_objects(c3);
    show_objects(c4);

    return 0;
}