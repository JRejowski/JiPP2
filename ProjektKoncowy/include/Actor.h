//
// Created by Yonasz on 22.01.2022.
//

#ifndef JIPP2_ACTOR_H
#define JIPP2_ACTOR_H

#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;


class Actor {
public:
    Actor(string name,int hp,int mana,int minDmg, int maxDmg, int minDmgSpell, int maxDmgSpell, float mnoznikObrazen, float mnoznikObrazenSpell);

    bool czyZyje();
    bool czyJestMana();
    int getDmg();
    int getDmgSpell();

    string getName();
    void setName(string name);

    int getHP();
    void setHP(int hp);

    int getMana();
    void setMana(int mana);

    int getMinDmg();
    void setMinDmg(int minDmg);

    int getMaxDmg();
    void setMaxDmg(int maxDmg);

    int getMinDmgSpell();
    void setMinDmgSpell(int minDmgSpell);

    int getMaxDmgSpell();
    void setMaxDmgSpell(int maxDmgSpell);

    float getMnoznikObrazen();
    void setMnoznikObrazen(float mnoznikObrazen);

    float getMnoznikObrazenSpell();
    void setMnoznikObrazenSpell(float mnoznikObrazenSpell);


private:
    string name;
    int hp;
    int mana;
    int minDmg;
    int maxDmg;
    int maxDmgSpell;
    int minDmgSpell;
    float mnoznikObrazen;
    float mnoznikObrazenSpell;

};


#endif //JIPP2_ACTOR_H
