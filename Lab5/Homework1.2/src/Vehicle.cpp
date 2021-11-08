//
// Created by Admin on 08.11.2021.
//
#include <iostream>
#include "../include/Vehicle.h"

void Vehicle::showData() {



    cout << registerPlate << "  " << name << "  " << numberOfSeats << "  ";
    for(int i=0;i<numberOfSeats;i++)
    {
        cout<<passengers[i]<<"  ";
    }
    cout<< brand << "  " << type;

}

Vehicle::Vehicle(string registerPlate, string name, int numberOfSeats, string brand, string type)
:registerPlate(registerPlate),name(name),numberOfSeats(numberOfSeats),brand(brand),type(type)
{
    for(int i=0;i<numberOfSeats;i++)
    {
        cout<<"Who's sitting here?"<<endl;
        cin>>passengers[i];

    }
}

