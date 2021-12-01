//
// Created by Admin on 08.11.2021.
//

#include <iostream>
#include "Vehicle.h"

using namespace std;

int main()
{
    Vehicle v1("KN00000","Car1",2,"Ford","Van");
    v1.showData();
    v1.newPassenger(1,"Alex");
    v1.showData();

    Vehicle v2(v1);
    v2.showData();

    return 0;
}