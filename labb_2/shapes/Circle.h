//
// Created by jolof on 2021-11-26.
//

#ifndef LABB_2_CIRCLE_H
#define LABB_2_CIRCLE_H
#include "Shape.h"

class Circle: public Shape {
    double radius;
public:
    Circle(double radius, char* color);
    virtual double getArea();
};


#endif //LABB_2_CIRCLE_H
