//
// Created by Yonasz on 22.01.2022.
//

#ifndef JIPP2_SCENAWALKA_H
#define JIPP2_SCENAWALKA_H

#include "Scena.h"
#include "Actor.h"
#include <string>

using namespace std;

class ScenaWalka:public Scena {
public:
    bool update(float);
    void drukujStaty();
    void drukujRaport();
    int drukujOpcje();
    bool walka(int i);


    Actor* player;
    Actor* enemy;
    int lastPlayerDmg = 0;
    int lastEnemyDmg = 0;
    int numerTury=1;

};


#endif //JIPP2_SCENAWALKA_H
