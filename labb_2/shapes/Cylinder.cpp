//
// Created by jolof on 2021-12-01.
//

#include "Cylinder.h"
Cylinder::Cylinder(double height, double radius, char *color):height(height), Circle(radius, color) {}

double Cylinder::getArea() {
    return (Circle::getArea()*height);
}