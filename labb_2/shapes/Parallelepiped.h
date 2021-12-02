//
// Created by Joel Olofsson on 2021-11-30.
//

#ifndef LABB_2_PARALLELEPIPED_H
#define LABB_2_PARALLELEPIPED_H

#include "Rectangle.h"

class Parallelepiped : public Rectangle {
    double height;
public:
    Parallelepiped(double baseWidth, double baseHeight, double height, char* color);
    double getArea();
};


#endif //LABB_2_PARALLELEPIPED_H
