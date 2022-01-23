//
// Created by Yonasz on 22.01.2022.
//

#include <iostream>
#include "Actor.h"
#include "ScenaWalka.h"
#include "ScenaDialog.h"

using namespace std;

int main()
{

    srand(time(NULL));
    Actor a1("Player",100,100,10,30,40,50,1,1);
    Actor a2("Enemy",100,100,10,30,40,50,1,1);
    ScenaWalka s1;
    s1.player=&a1;
    s1.enemy=&a2;
    ScenaDialog s2;
    s2.addLine("Uczen: To zwykly kij!? Dawaj zaklety miecz!");
    s2.addLine("Stachu Jones: Jak ci zara przywale!");
    while(s2.update())
    {

    }





    return 0;
}