//
// Created by Yonasz on 22.01.2022.
//

#ifndef JIPP2_SCENADIALOG_H
#define JIPP2_SCENADIALOG_H

#include "Scena.h"
#include <vector>
#include <string>

using namespace std;

class ScenaDialog: public Scena{
public:
    bool update();
    void addLine(string x);

    vector<string> dialog;

};


#endif //JIPP2_SCENADIALOG_H
