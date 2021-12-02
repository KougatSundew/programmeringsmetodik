//
// Created by jolof on 2021-11-26.
//

#ifndef LABB_2_RECTANGLE_H
#define LABB_2_RECTANGLE_H
#include "Shape.h"

class Rectangle: public Shape {
    double height, width;
public:
    Rectangle(double height, double width, char* color);
    double getArea();
};


#endif //LABB_2_RECTANGLE_H
