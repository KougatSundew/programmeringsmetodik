//
// Created by Joel Olofsson on 2021-11-30.
//

#ifndef LABB_2_PARALLELEPIPED_H
#define LABB_2_PARALLELEPIPED_H

#include "Rectangle.h"

class Parallelepiped : public Rectangle {
    double depth;
public:
    Parallelepiped(double width, double height, double depth, char* color);
    double getArea() override;
    double getVolume();
};


#endif //LABB_2_PARALLELEPIPED_H
