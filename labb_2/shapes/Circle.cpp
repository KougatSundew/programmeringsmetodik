//
// Created by jolof on 2021-11-26.
//

#include "Circle.h"
Circle::Circle(double radius, char *color):Shape(color), radius(radius) {}
double Circle::getArea() {
    return (M_PI*radius*radius);
}

