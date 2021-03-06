//
// Created by Admin on 08.11.2021.
//
#include <iostream>
#include "../include/Vehicle.h"

long Vehicle::newestOsVersion = 2;

void Vehicle::showData() {



    cout <<"Register Plate: "<< registerPlate << " Name: " << name << " Number of seats: " << numberOfSeats << " ";
    for(int i=0;i<numberOfSeats;i++)
    {
        cout<<"Passenger "<< i+1 <<": "<<passengers[i]<<" ";
    }
    cout<<"Brand: "<< brand << " Type: " << type<<" Installed Os Version: "<<installedOsVersion<<endl;

}

void Vehicle::newPassenger(int place, string name) {
    passengers[place-1] = name;
}

Vehicle::Vehicle(string registerPlate, string name, int numberOfSeats, string brand, string type,int installedOsVersion)
:registerPlate(registerPlate),name(name),numberOfSeats(numberOfSeats),brand(brand),type(type),installedOsVersion(installedOsVersion)
{
    passengers = new string[numberOfSeats];
    for(int i=0;i<numberOfSeats;i++)
    {
        cout<<"Who's sitting here?"<<endl;
        cin>>passengers[i];

    }
}

Vehicle::Vehicle(Vehicle &vehicle) {
    registerPlate = vehicle.registerPlate;
    name = vehicle.name;
    numberOfSeats = vehicle.numberOfSeats;
    brand = vehicle.brand;
    type = vehicle.type;
    passengers = new string[numberOfSeats];
    for(int i=0; i<numberOfSeats; i++)
    {
    passengers[i] = vehicle.passengers[i];
    }
    installedOsVersion = vehicle.installedOsVersion;
}

void Vehicle::setName(string name) {
    this->name = name;
}

void Vehicle::setRegisterPlate(string registerPlate) {
    this->registerPlate = registerPlate;
}

string Vehicle::getName() {
    return name;
}
string Vehicle::getRegisterPlate() {
    return registerPlate;
}
string Vehicle::getBrand() {
    return brand;
}
string Vehicle::getType() {
    return type;
}

void Vehicle::upgradeOs() {
    this->installedOsVersion = newestOsVersion;
}

void Vehicle::showOsVersion() {
    cout<<"This vehicle Os Version is: "<<installedOsVersion<<endl;
}

void Vehicle::postNewOs(int x) {
    newestOsVersion = x;
}








