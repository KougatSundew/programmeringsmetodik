//
// Created by jolof on 2021-11-26.
//

#ifndef LABB_2_CIRCLE_H
#define LABB_2_CIRCLE_H
#include "Shape.h"
#include "math.h"
class Circle: public Shape {
    int radius = 0;
public:
    Circle(int radius, char* color);
    int getArea();
};


#endif //LABB_2_CIRCLE_H
