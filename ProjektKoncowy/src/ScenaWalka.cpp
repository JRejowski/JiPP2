//
// Created by Yonasz on 22.01.2022.
//

#include <iostream>
#include "ScenaWalka.h"

void ScenaWalka::drukujStaty() {

    cout<<player->getName()<<"\t\t\t"<<enemy->getName()<<endl;
    cout<<"Zycie: "<<player->getHP()<<"\t\t"<<"Zycie: "<<enemy->getHP()<<endl;
    cout<<"Mana:  "<<player->getMana()<<"\t\t"<<"Mana:  "<<enemy->getMana()<<endl;
}

void ScenaWalka::drukujRaport() {
    cout<<"Zadales przeciwnikowi "<<lastPlayerDmg<<" obrazen!\n";
    cout<<"Przeciwnik zadal tobie "<<lastEnemyDmg<<" obrazen!\n";
}

int ScenaWalka::drukujOpcje() {
    int x=0;
    cout<<"Co chcesz zrobic?\n";
    cout<<"1.Atak fizyczny\n";
    cout<<"2.Atak magiczny\n";
    cin>>x;
    return x;
}

bool ScenaWalka::walka(int i) {

    int x,y;

    x = player->getHP();
    y = enemy->getHP();

    if(i==1)
    {

        lastPlayerDmg = player->getDmg();
        enemy->setHP(y-lastPlayerDmg);
        if(enemy->czyZyje()==0)
        {
            drukujStaty();
            cout<<"Zadales przeciwnikowi "<<lastPlayerDmg<<" obrazen!\n";
            cout<<"Przeciwnik pokonany!"<<endl;
            return false;
        }

        lastEnemyDmg = enemy->getDmg();
        player->setHP(x-lastEnemyDmg);
        if(player->czyZyje()==0)
        {
            drukujStaty();
            cout<<"Przeciwnik zadal tobie "<<lastEnemyDmg<<" obrazen!\n";
            cout<<"Zostales pokonany!"<<endl;
            return false;
        }

    }
    if(i==2)
    {

        if(player->czyJestMana()==1)
        {
            lastPlayerDmg = player->getDmgSpell();
            enemy->setHP(y - lastPlayerDmg);
            player->setMana(player->getMana()-50);
        }
        else
        {
            cout<<"Nie masz many! Uzywasz ataku fizycznego!\n";
            lastPlayerDmg = player->getDmg();
            enemy->setHP(y - lastPlayerDmg);
        }
        if(enemy->czyZyje()==0)
        {
            drukujStaty();
            cout<<"Zadales przeciwnikowi "<<lastPlayerDmg<<" obrazen!\n";
            cout<<"Przeciwnik pokonany!"<<endl;
            return false;
        }


        lastEnemyDmg = enemy->getDmg();
        player->setHP(x-lastEnemyDmg);
        if(player->czyZyje()==0)
        {
            drukujStaty();
            cout<<"Przeciwnik zadal tobie "<<lastEnemyDmg<<" obrazen!\n";
            cout<<"Zostales pokonany!"<<endl;
            return false;
        }
    }
    return true;






}

bool ScenaWalka::update() {
    drukujStaty();
    if (numerTury > 1) drukujRaport();
    int x=drukujOpcje();
    numerTury++;
    if(!walka(x)) return false;
    else return true;
}



