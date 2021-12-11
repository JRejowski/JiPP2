
#include <iostream>
#include "Vehicle.h"

using namespace std;

int main()
{
    Vehicle v1("KN00000","Car1",2,"Ford","Van",1);
    v1.showData();
    v1.newPassenger(1,"Alex");
    v1.showData();

    Vehicle v2(v1);
    v2.showData();
    v1.upgradeOs();
    v1.showOsVersion();
    Vehicle::postNewOs(3);
    v1.upgradeOs();
    v1.showOsVersion();


    return 0;
}