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
    string *passengers;
    string brand;
    string type;
    int installedOsVersion;
    static long newestOsVersion;


public:
    void showData();
    void newPassenger(int place, string name);

    Vehicle(string registerPlate, string name, int numberOfSeats,string brand, string type, int installedOsVersion);
    Vehicle(Vehicle &vehicle);

    void upgradeOs();
    void showOsVersion();

    static void postNewOs(int x);

    void setName(string name);
    void setRegisterPlate(string registerPlate);

    string getName();
    string getRegisterPlate();
    string getBrand();
    string getType();
};



#endif //JIPP2_VEHICLE_H
