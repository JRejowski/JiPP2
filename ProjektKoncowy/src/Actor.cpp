//
// Created by Yonasz on 22.01.2022.
//

#include "Actor.h"

bool Actor::czyZyje() {
    if(hp<=0) {
        return false;
    }
    else return true;
}

void Actor::setHP(int hp) {
    this->hp=hp;
}
int Actor::getHP() {
    return hp;
}

bool Actor::czyJestMana() {
    if(mana<=0){
        return false;
    }
    else return true;

}

string Actor::getName() {
    return name;
}

void Actor::setName(string name) {
    this->name=name;
}

int Actor::getDmg() {
    int randDMG = 0;
    randDMG = rand()%(maxDmg-minDmg+1)+minDmg;
    return randDMG;
}

int Actor::getDmgSpell() {
    int randDMGspell = 0;
    randDMGspell = rand()%(maxDmgSpell-minDmgSpell+1)+minDmgSpell;
    return randDMGspell;
}

int Actor::getMana() {
    return mana;
}

void Actor::setMana(int mana) {
    this->mana=mana;
}

int Actor::getMinDmg() {
    return minDmg;
}

void Actor::setMinDmg(int minDmg) {
    this->minDmg=minDmg;
}

int Actor::getMaxDmg() {
    return maxDmg;
}

void Actor::setMaxDmg(int maxDmg) {
    this->maxDmg=maxDmg;
}

int Actor::getMinDmgSpell() {
    return minDmgSpell;
}

void Actor::setMinDmgSpell(int minDmgSpell) {
    this->minDmgSpell=minDmgSpell;
}

int Actor::getMaxDmgSpell() {
    return maxDmgSpell;
}

void Actor::setMaxDmgSpell(int maxDmgSpell) {
    this->maxDmgSpell=maxDmgSpell;
}

float Actor::getMnoznikObrazen() {
    return mnoznikObrazen;
}

void Actor::setMnoznikObrazen(float mnoznikObrazen) {
    this->mnoznikObrazen=mnoznikObrazen;
}

float Actor::getMnoznikObrazenSpell() {
    return mnoznikObrazenSpell;
}

void Actor::setMnoznikObrazenSpell(float mnoznikObrazenSpell) {
    this->mnoznikObrazenSpell=mnoznikObrazenSpell;
}

Actor::Actor(string name, int hp, int mana, int minDmg, int maxDmg, int minDmgSpell, int maxDmgSpell,
             float mnoznikObrazen, float mnoznikObrazenSpell): name(name),hp(hp),mana(mana),minDmg(minDmg),maxDmg(maxDmg),minDmgSpell(minDmgSpell),maxDmgSpell(maxDmgSpell),mnoznikObrazen(mnoznikObrazen),mnoznikObrazenSpell(mnoznikObrazenSpell) {

}

