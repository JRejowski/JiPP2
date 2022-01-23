//
// Created by Yonasz on 22.01.2022.
//

#include <iostream>
#include <stdlib.h>
#include "ScenaDialog.h"


void ScenaDialog::addLine(string x)
{
	dialog.push_back(x);
}

bool ScenaDialog::update() {

    for(string x : dialog)
    {
        cout<<x<<endl;
        _sleep(1000);
    }

    return false;


}
