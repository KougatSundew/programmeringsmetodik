//
// Created by Joel Olofsson on 2021-11-30.
//

#ifndef LABB_2_ROUNDEDRECTANGLE_H
#define LABB_2_ROUNDEDRECTANGLE_H

#include "Rectangle.h"

class RoundedRectangle : public Rectangle {
    double cornerRadius;
public:
    RoundedRectangle(double height, double width, double cornerRadius, char* color);
    double getArea() override;
};


#endif //LABB_2_ROUNDEDRECTANGLE_H
