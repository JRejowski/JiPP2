
#ifndef JIPP2_FIGURE_H
#define JIPP2_FIGURE_H

#include <iostream>
#include <string>

using namespace std;

class Figure {
protected:
    string name;
    string color;
public:
    string getName();
    string getColor();

};


#endif //JIPP2_FIGURE_H
