//
// Created by jolof on 2021-11-26.
//

#ifndef LABB_2_RECTANGLE_H
#define LABB_2_RECTANGLE_H
#include "Shape.h"
#include "math.h"

class Rectangle: public Shape {
    int height;
    int width;
public:
    Rectangle(int height, int width, char* color);
    int getArea();
};


#endif //LABB_2_RECTANGLE_H
