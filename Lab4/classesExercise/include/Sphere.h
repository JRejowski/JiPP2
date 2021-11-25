//
// Created by Yonasz on 06.11.2021.
//

#ifndef JIPP2_SPHERE_H
#define JIPP2_SPHERE_H


class Sphere {
private:
    double radius;
public:

    Sphere(double radius);

    double countVolume();

    double getRadius();
    void setRadius(double radius);
};


#endif //JIPP2_SPHERE_H
