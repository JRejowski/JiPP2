//
// Created by Yonasz on 04.11.2021.
//

#ifndef JIPP2_CUBOIDAREA_H
#define JIPP2_CUBOIDAREA_H

using namespace std;

class Cuboid {

private:
    double width;
    double length;
    double height;

public:
    Cuboid(double width, double length, double heigth);
    double countArea();

};


#endif //JIPP2_CUBOIDAREA_H
