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

    double getWidth();
    double getLength();
    double getHeight();

    void setWidth(double width);
    void setLength(double length);
    void setHeight(double height);


};


#endif //JIPP2_CUBOIDAREA_H
