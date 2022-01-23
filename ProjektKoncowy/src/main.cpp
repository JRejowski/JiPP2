//
// Created by Yonasz on 22.01.2022.
//

#include <iostream>
#include "Actor.h"
#include "ScenaWalka.h"

using namespace std;

int main()
{

    srand(time(NULL));
    Actor a1("Player",100,100,10,30,40,50,1,1);
    Actor a2("Enemy",100,100,10,30,40,50,1,1);
    ScenaWalka s1;
    s1.player=&a1;
    s1.enemy=&a2;
    while(s1.update(21)){

    }





    return 0;
}