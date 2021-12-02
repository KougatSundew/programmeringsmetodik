//
// Created by jolof on 2021-12-01.
//

#ifndef LABB_2_CYLINDER_H
#define LABB_2_CYLINDER_H
#include "Circle.h"

class Cylinder : public Circle {
    double height;
public:
    Cylinder(double height, double radius, char* color);
    double getArea();
};


#endif //LABB_2_CYLINDER_H
