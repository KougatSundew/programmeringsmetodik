//
// Created by Joel Olofsson on 2021-11-30.
//

#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(double baseWidth, double baseHeight, double height, char *color): Rectangle(baseHeight, baseWidth, color), height(height)  {}

double Parallelepiped::getArea() {
    return Rectangle::getArea()*height;
}
