//
// Created by Admin on 08.11.2021.
//

#ifndef JIPP2_VEHICLE_H
#define JIPP2_VEHICLE_H

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    string registerPlate;
    string name;
    int numberOfSeats;
    string *passengers = new string[numberOfSeats];
    string brand;
    string type;
public:
    void showData();
    Vehicle(string registerPlate, string name, int numberOfSeats,string brand, string type);

};


#endif //JIPP2_VEHICLE_H
