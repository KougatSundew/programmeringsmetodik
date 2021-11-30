//
// Created by jolof on 2021-11-26.
//

#include "Circle.h"
Circle::Circle(int radius, char *color):Shape(color), radius(radius) {}
int Circle::getArea() {
    return (M_PI*radius*radius);
}

