//
// Created by Joel Olofsson on 2021-11-30.
//

#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(double width, double height, double depth, char *color): Rectangle(height, width, color), depth(depth)  {}

double Parallelepiped::getArea() {
    return 2 * Rectangle::getArea() + 2 * getWidth() * depth + 2 * getHeight() * depth;
}

double Parallelepiped::getVolume() {
    return Rectangle::getArea() * depth;
}

