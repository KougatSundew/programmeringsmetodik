//
// Created by jolof on 2021-11-26.
//

#ifndef LABB_2_SHAPE_H
#define LABB_2_SHAPE_H
#include "math.h"

class Shape {
    char* color;
public:
    static int numberOfObjects;
    Shape(char* color);
    virtual double getArea() = 0;
    virtual char* getColor();
    int getNumberOfObjects();
};


#endif //LABB_2_SHAPE_H
